module.exports = grammar({
    name: 'rock',
    fileTypes: ['rk'],

    externals: $ => [
	$._indent,
	$._indent_incr,
	$._indent_decr,
    ],

    rules: {
	source_file: $ => repeat($.top_level),

	top_level: $ => seq(
	    choice(
		$.external,
		$.function_definition,
	    ),
	    repeat('\n')
	),

	external: $ => seq(
	    'extern',
	    $.prototype,
	),

	prototype: $ => seq(
	    $.identifier,
	    ':',
	    $.signature,
	),

	signature: $ => sep1($.type, '=>'),

	function_definition: $ => seq(
	    $.identifier,
	    ':',
	    $.arguments_decl,
	    $.body
	),

	arguments_decl: $ => choice(
	    '->',
	    seq(
		commaSep1($.identifier),
		'->'
	    ),
	),

	type: $ => choice(
	    'Bool',
	    'Int64'
	),

	body: $ => choice(
	    seq(
		$._newline,
		$._indent_incr,
		repeat1(seq($._indent, $._statement, repeat1($._newline))),
		$._indent_decr
	    ),
	    $._statement,
	),

	_statement: $ => choice(
	    $.return__statement,
	    $._expression
	),

	return__statement: $ => seq(
	    'return',
	    $._expression,
	),

	_expression: $ => choice(
	    $.identifier,
	    $.number
	),

	identifier: $ => /[a-z]+/,

	number: $ => /\d+/,

	_newline: $ => /\n/,
    }
});

function commaSep1(rule) {
    return sep1(rule, ',')
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}

