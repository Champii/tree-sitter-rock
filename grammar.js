module.exports = grammar({
    name: 'rock',
    fileTypes: ['rk'],

    externals: $ => [
	$._indent,
	$._indent_incr,
	$._indent_decr,
    ],

    // FIXME: needed for fine-grained space handling
    extras: $ => [],

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
	    seq('extern', $._ws),
	    $.prototype,
	),

	prototype: $ => seq(
	    seq($.identifier, $._ws),
	    pad(':', $),
	    $.signature,
	),

	use: $ => seq(
	    seq('use', $._ws),
	    $.identifier_path,
	),

	struct_decl: $ => seq(
	    seq('struct', $._ws),
	    $.type,
	    indented($.struct_member, $),
	),

	trait_decl: $ => seq(
	    'trait',
	    pad($.type, $),
	    repeat($.type),
	    indented($.trait_member, $),
	),

	trait_member: $ => choice(
	    $.function_definition,
	    $.prototype,
	),

	impl: $ => seq(
	    'impl',
	    pad($.type, $),
	    repeat($.type),
	    indented($.function_definition, $),
	),

	mod_decl: $ => seq(
	    seq('mod', $._ws),
	    $.identifier,
	),

	struct_member: $ => seq(
	    $.identifier,
	    pad(':', $),
	    $.type,
	),

	identifier_path: $ => sep1(choice($.identifier, '(*)'), '::'),

	signature: $ => sep1($.type, pad('=>', $)),

	function_definition: $ => seq(
	    seq($.identifier, $._ws),
	    pad(':', $),
	    $.arguments_decl,
	    $.body
	),

	arguments_decl: $ => choice(
	    pad('->', $),
	    seq(
		commaSep1($.identifier, $),
		pad('->', $)
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
	    seq('let', $._ws),
	    $.identifier,
	    pad('=', $),
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
	    pad(':', $),
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
	    sep1($._expression, pad(',', $)),
	    ')'
	),

	space_arguments: $ => seq(
	    $._ws,
	    sep1($.primary, pad(',', $)),
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

	_ws: $ => /[ ]*/,
	_ws1: $ => /[ ]+/,


	string: $ => /"(?:[^"\\]|\\.)*"/,

	array: $ => seq(
	    '[',
	    commaSep1($._expression, $),
	    ']'
	),

    }
});

function commaSep1(rule, $) {
    return sep1(rule, pad(',', $))
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

function pad(rule, $) {
    return seq(
	$._ws,
	rule,
	$._ws,
    )
}
