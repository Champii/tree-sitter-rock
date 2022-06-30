module.exports = grammar({
    name: 'rock',
    fileTypes: ['rk'],

    externals: $ => [
	$._indent,
	$._indent_incr,
	$._indent_decr,
    ],

    // FIXME: needed for multiline struct decl
    // extras: $ => [],

    conflicts: $ => [
	[$.primary],
	[$.space_arguments],
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
	    $.assign,
	    $._expression
	),

	assign: $ => seq(
	    'let',
	    $.identifier,
	    '=',
	    $._expression,
	),

	_expression: $ => choice(
	    $.struct_ctor,
	    $.return,
	    $.binary,
	    $.unary,
	    $.native_op,
	),

	struct_ctor: $ => seq(
	    $.type,
	    indented($.struct_ctor_arg, $),
	),

	struct_ctor_arg: $ => seq(
	    $.identifier,
	    ':',
	    $._expression,
	),

	return: $ => seq(
	    'return',
	    $._expression,
	),

	binary: $ => seq(
	    $.unary,
	    $.binary_op,
	    $._expression,
	),

	unary: $ => seq(
	    $.primary,
	),

	primary: $ => seq(
	    $.operand,
	    optional(repeat1($.secondary))
	),

	operand: $ => choice(
	    $.literal,
	    $.identifier_path,
	    $.parenthesized_expression,
	),

	literal: $ => choice(
	    $.boolean,
	    $.float,
	    $.number,
	    $.array,
	    $.string,
	    $.char,
	),

	parenthesized_expression: $ => seq(
	    '(',
	    $._expression,
	    ')'
	),

	secondary: $ => choice(
	    $.indice,
	    $.dot,
	    $.arguments,
	),

	indice: $ => seq(
	    '[',
	    $._expression,
	    ']'
	),

	dot: $ => seq(
	    '.',
	    $.identifier
	),

	arguments: $ => choice(
	    '!',
	    '()',
	    $.parenthesis_arguments,
	    $.space_arguments,
	),

	parenthesis_arguments: $ => seq(
	    '(',
	    sep1($._expression, ','),
	    ')'
	),

	space_arguments: $ => seq(
	    ' ',
	    sep1($.primary, ','),
	),

	type: $ => choice(
	    /[A-Z][a-zA-Z0-9]+/,
	    /[a-z]/,
	),

	native_op: $ => seq(
	    '~',
	    $.type,
	),

	binary_op: $ => /[\+\-\*\/\|<>=\!\$@&]+/,

	identifier: $ => /@?[a-z]+/,

	number: $ => /\d+/,

	_newline: $ => /\n/,

	boolean: $ => choice(
	    'true',
	    'false',
	),

	float: $ => /\d+\.\d+/,

	char: $ => /'.'/,

	string: $ => /"(?:[^"\\]|\\.)*"/,

    array: $ => seq(
	'[',
	commaSep1($._expression),
	']'
    ),

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
