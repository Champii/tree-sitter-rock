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
		$.use,
		$.struct_decl,
		$.trait_decl,
		$.impl,
		$.function_definition,
		$.mod_decl,
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

	use: $ => seq(
	    'use',
	    $.identifier_path,
	),

	struct_decl: $ => seq(
	    'struct',
	    $.type,
	    indented($.struct_member, $),
	),

	trait_decl: $ => seq(
	    'trait',
	    $.type,
	    repeat($.type),
	    indented($.trait_member, $),
	),

	trait_member: $ => choice(
	    $.function_definition,
	    $.prototype,
	),

	impl: $ => seq(
	    'impl',
	    $.type,
	    repeat($.type),
	    indented($.function_definition, $),
	),

	mod_decl: $ => seq(
	    'mod',
	    $.identifier,
	),

	struct_member: $ => seq(
	    $.identifier,
	    ':',
	    $.type,
	),

	identifier_path: $ => sep1(choice($.identifier, '(*)'), '::'),

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

	body: $ => choice(
	    indented($._statement, $),
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

	type: $ => choice(
	    /[A-Z][a-zA-Z0-9]+/,
	    /[a-z]/,
	),

	identifier: $ => /@?[a-z]+/,

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

function indented(rule, $) {
    return seq(
	$._newline,
	$._indent_incr,
	repeat1(seq($._indent, rule, repeat1($._newline))),
	$._indent_decr
    )
}
