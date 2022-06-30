(function_definition (identifier) @name.function)

(arguments_decl (identifier) @variable.parameter)

(prototype (identifier) @name.function)

(struct_decl (type) @name.type)
(struct_member (identifier) @variable)


(identifier) @local.scope
(identifier_path (identifier)) @constant
(mod_decl (identifier)) @constant

(number) @number

(type) @type

[
  "->"
  "=>"
  ":"
  ","
  "::"
] @punctuation.delimiter

[
  "extern"
  "use"
  "struct"
  "trait"
  "impl"
  "mod"
] @keyword

