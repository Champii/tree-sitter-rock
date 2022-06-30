(function_definition (identifier) @name.function)
(prototype (identifier) @name.function)

(arguments_decl (identifier) @variable.parameter)

(struct_decl (type) @name.type)
(struct_member (identifier) @property)
(struct_ctor_arg (identifier) @property)

(identifier) @local.scope
(identifier_path (identifier)) @module

(mod_decl (identifier)) @module

(dot (identifier)) @property

(primary
  (operand) (_)+ @name.function (secondary (arguments))) 


(number) @number

(type) @type

[
  "->"
  "=>"
  ":"
  ","
  "::"
  "="
  "."
  "!"
  "["
  "]"
  "("
  ")"
] @punctuation.delimiter

[
  "extern"
  "use"
  "struct"
  "trait"
  "impl"
  "mod"
  "let"
] @keyword

(binary_op) @punctuation.separator.infix
