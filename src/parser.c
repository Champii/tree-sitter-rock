#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_extern = 2,
  anon_sym_COLON = 3,
  anon_sym_use = 4,
  anon_sym_struct = 5,
  anon_sym_trait = 6,
  anon_sym_impl = 7,
  anon_sym_mod = 8,
  anon_sym_LPAREN_STAR_RPAREN = 9,
  anon_sym_COLON_COLON = 10,
  anon_sym_EQ_GT = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_COMMA = 13,
  anon_sym_return = 14,
  aux_sym_type_token1 = 15,
  aux_sym_type_token2 = 16,
  sym_identifier = 17,
  sym_number = 18,
  sym__newline = 19,
  sym__indent = 20,
  sym__indent_incr = 21,
  sym__indent_decr = 22,
  sym_source_file = 23,
  sym_top_level = 24,
  sym_external = 25,
  sym_prototype = 26,
  sym_use = 27,
  sym_struct_decl = 28,
  sym_trait_decl = 29,
  sym_trait_member = 30,
  sym_impl = 31,
  sym_mod_decl = 32,
  sym_struct_member = 33,
  sym_identifier_path = 34,
  sym_signature = 35,
  sym_function_definition = 36,
  sym_arguments_decl = 37,
  sym_body = 38,
  sym__statement = 39,
  sym_return__statement = 40,
  sym__expression = 41,
  sym_type = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_top_level_repeat1 = 44,
  aux_sym_struct_decl_repeat1 = 45,
  aux_sym_struct_decl_repeat2 = 46,
  aux_sym_trait_decl_repeat1 = 47,
  aux_sym_trait_decl_repeat2 = 48,
  aux_sym_impl_repeat1 = 49,
  aux_sym_identifier_path_repeat1 = 50,
  aux_sym_signature_repeat1 = 51,
  aux_sym_arguments_decl_repeat1 = 52,
  aux_sym_body_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_extern] = "extern",
  [anon_sym_COLON] = ":",
  [anon_sym_use] = "use",
  [anon_sym_struct] = "struct",
  [anon_sym_trait] = "trait",
  [anon_sym_impl] = "impl",
  [anon_sym_mod] = "mod",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_return] = "return",
  [aux_sym_type_token1] = "type_token1",
  [aux_sym_type_token2] = "type_token2",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__indent_incr] = "_indent_incr",
  [sym__indent_decr] = "_indent_decr",
  [sym_source_file] = "source_file",
  [sym_top_level] = "top_level",
  [sym_external] = "external",
  [sym_prototype] = "prototype",
  [sym_use] = "use",
  [sym_struct_decl] = "struct_decl",
  [sym_trait_decl] = "trait_decl",
  [sym_trait_member] = "trait_member",
  [sym_impl] = "impl",
  [sym_mod_decl] = "mod_decl",
  [sym_struct_member] = "struct_member",
  [sym_identifier_path] = "identifier_path",
  [sym_signature] = "signature",
  [sym_function_definition] = "function_definition",
  [sym_arguments_decl] = "arguments_decl",
  [sym_body] = "body",
  [sym__statement] = "_statement",
  [sym_return__statement] = "return__statement",
  [sym__expression] = "_expression",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_top_level_repeat1] = "top_level_repeat1",
  [aux_sym_struct_decl_repeat1] = "struct_decl_repeat1",
  [aux_sym_struct_decl_repeat2] = "struct_decl_repeat2",
  [aux_sym_trait_decl_repeat1] = "trait_decl_repeat1",
  [aux_sym_trait_decl_repeat2] = "trait_decl_repeat2",
  [aux_sym_impl_repeat1] = "impl_repeat1",
  [aux_sym_identifier_path_repeat1] = "identifier_path_repeat1",
  [aux_sym_signature_repeat1] = "signature_repeat1",
  [aux_sym_arguments_decl_repeat1] = "arguments_decl_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_LPAREN_STAR_RPAREN] = anon_sym_LPAREN_STAR_RPAREN,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return] = anon_sym_return,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [aux_sym_type_token2] = aux_sym_type_token2,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__indent_incr] = sym__indent_incr,
  [sym__indent_decr] = sym__indent_decr,
  [sym_source_file] = sym_source_file,
  [sym_top_level] = sym_top_level,
  [sym_external] = sym_external,
  [sym_prototype] = sym_prototype,
  [sym_use] = sym_use,
  [sym_struct_decl] = sym_struct_decl,
  [sym_trait_decl] = sym_trait_decl,
  [sym_trait_member] = sym_trait_member,
  [sym_impl] = sym_impl,
  [sym_mod_decl] = sym_mod_decl,
  [sym_struct_member] = sym_struct_member,
  [sym_identifier_path] = sym_identifier_path,
  [sym_signature] = sym_signature,
  [sym_function_definition] = sym_function_definition,
  [sym_arguments_decl] = sym_arguments_decl,
  [sym_body] = sym_body,
  [sym__statement] = sym__statement,
  [sym_return__statement] = sym_return__statement,
  [sym__expression] = sym__expression,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_top_level_repeat1] = aux_sym_top_level_repeat1,
  [aux_sym_struct_decl_repeat1] = aux_sym_struct_decl_repeat1,
  [aux_sym_struct_decl_repeat2] = aux_sym_struct_decl_repeat2,
  [aux_sym_trait_decl_repeat1] = aux_sym_trait_decl_repeat1,
  [aux_sym_trait_decl_repeat2] = aux_sym_trait_decl_repeat2,
  [aux_sym_impl_repeat1] = aux_sym_impl_repeat1,
  [aux_sym_identifier_path_repeat1] = aux_sym_identifier_path_repeat1,
  [aux_sym_signature_repeat1] = aux_sym_signature_repeat1,
  [aux_sym_arguments_decl_repeat1] = aux_sym_arguments_decl_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_incr] = {
    .visible = false,
    .named = true,
  },
  [sym__indent_decr] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_top_level] = {
    .visible = true,
    .named = true,
  },
  [sym_external] = {
    .visible = true,
    .named = true,
  },
  [sym_prototype] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_trait_member] = {
    .visible = true,
    .named = true,
  },
  [sym_impl] = {
    .visible = true,
    .named = true,
  },
  [sym_mod_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_path] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return__statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_level_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trait_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_impl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 11:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_extern);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_use);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_trait);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_impl);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_type_token2);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_type_token2);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(40);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 2},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 2},
  [48] = {.lex_state = 1, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 14},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 14},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 3},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__indent_incr = 1,
  ts_external_token__indent_decr = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__indent_incr] = sym__indent_incr,
  [ts_external_token__indent_decr] = sym__indent_decr,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_incr] = true,
    [ts_external_token__indent_decr] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
    [ts_external_token__indent_decr] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__indent_incr] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [aux_sym_type_token2] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_incr] = ACTIONS(1),
    [sym__indent_decr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(97),
    [sym_top_level] = STATE(2),
    [sym_external] = STATE(14),
    [sym_use] = STATE(14),
    [sym_struct_decl] = STATE(14),
    [sym_trait_decl] = STATE(14),
    [sym_impl] = STATE(14),
    [sym_mod_decl] = STATE(14),
    [sym_function_definition] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extern] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_trait] = ACTIONS(11),
    [anon_sym_impl] = ACTIONS(13),
    [anon_sym_mod] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_extern,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(11), 1,
      anon_sym_trait,
    ACTIONS(13), 1,
      anon_sym_impl,
    ACTIONS(15), 1,
      anon_sym_mod,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
    STATE(14), 7,
      sym_external,
      sym_use,
      sym_struct_decl,
      sym_trait_decl,
      sym_impl,
      sym_mod_decl,
      sym_function_definition,
  [38] = 10,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_extern,
    ACTIONS(26), 1,
      anon_sym_use,
    ACTIONS(29), 1,
      anon_sym_struct,
    ACTIONS(32), 1,
      anon_sym_trait,
    ACTIONS(35), 1,
      anon_sym_impl,
    ACTIONS(38), 1,
      anon_sym_mod,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(3), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
    STATE(14), 7,
      sym_external,
      sym_use,
      sym_struct_decl,
      sym_trait_decl,
      sym_impl,
      sym_mod_decl,
      sym_function_definition,
  [76] = 4,
    ACTIONS(48), 1,
      anon_sym_EQ_GT,
    STATE(5), 1,
      aux_sym_signature_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(46), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [96] = 4,
    ACTIONS(48), 1,
      anon_sym_EQ_GT,
    STATE(6), 1,
      aux_sym_signature_repeat1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(52), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [116] = 4,
    ACTIONS(58), 1,
      anon_sym_EQ_GT,
    STATE(6), 1,
      aux_sym_signature_repeat1,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(56), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [136] = 4,
    ACTIONS(65), 1,
      anon_sym_COLON_COLON,
    STATE(7), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [156] = 4,
    ACTIONS(72), 1,
      anon_sym_COLON_COLON,
    STATE(7), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(70), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [176] = 4,
    ACTIONS(72), 1,
      anon_sym_COLON_COLON,
    STATE(8), 1,
      aux_sym_identifier_path_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(76), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [196] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(82), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [215] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(63), 8,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      anon_sym_COLON_COLON,
      sym_identifier,
  [230] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(86), 8,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      anon_sym_EQ_GT,
      sym_identifier,
  [245] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(93), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [264] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_LF,
    STATE(10), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(99), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [283] = 2,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(56), 8,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      anon_sym_EQ_GT,
      sym_identifier,
  [298] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(103), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [312] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(107), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [326] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(111), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [340] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(115), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [354] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(119), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [368] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(123), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [382] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(127), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [396] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(131), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [410] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(135), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [424] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(139), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [438] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(143), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [452] = 2,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(147), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [466] = 2,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(151), 7,
      anon_sym_extern,
      anon_sym_use,
      anon_sym_struct,
      anon_sym_trait,
      anon_sym_impl,
      anon_sym_mod,
      sym_identifier,
  [480] = 5,
    ACTIONS(153), 1,
      anon_sym_return,
    ACTIONS(157), 1,
      sym__newline,
    STATE(18), 1,
      sym_body,
    ACTIONS(155), 2,
      sym_identifier,
      sym_number,
    STATE(27), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [499] = 5,
    ACTIONS(159), 1,
      anon_sym_return,
    ACTIONS(163), 1,
      sym__newline,
    STATE(94), 1,
      sym_body,
    ACTIONS(161), 2,
      sym_identifier,
      sym_number,
    STATE(114), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [518] = 7,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    ACTIONS(167), 1,
      aux_sym_type_token1,
    ACTIONS(169), 1,
      aux_sym_type_token2,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(30), 1,
      sym_arguments_decl,
    STATE(63), 1,
      sym_type,
    STATE(100), 1,
      sym_signature,
  [540] = 4,
    ACTIONS(159), 1,
      anon_sym_return,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_number,
    STATE(93), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [555] = 3,
    ACTIONS(177), 1,
      sym__newline,
    ACTIONS(169), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
    STATE(35), 2,
      sym_type,
      aux_sym_trait_decl_repeat1,
  [567] = 3,
    ACTIONS(179), 1,
      sym__newline,
    ACTIONS(169), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
    STATE(35), 2,
      sym_type,
      aux_sym_trait_decl_repeat1,
  [579] = 3,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(181), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
    STATE(35), 2,
      sym_type,
      aux_sym_trait_decl_repeat1,
  [591] = 3,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(169), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
    STATE(34), 2,
      sym_type,
      aux_sym_trait_decl_repeat1,
  [603] = 3,
    ACTIONS(188), 1,
      sym__newline,
    ACTIONS(169), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
    STATE(33), 2,
      sym_type,
      aux_sym_trait_decl_repeat1,
  [615] = 3,
    ACTIONS(190), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(192), 2,
      sym__indent,
      sym__indent_decr,
  [626] = 2,
    ACTIONS(196), 1,
      sym__newline,
    ACTIONS(194), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [635] = 3,
    ACTIONS(190), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(198), 2,
      sym__indent,
      sym__indent_decr,
  [646] = 3,
    STATE(4), 1,
      sym_type,
    STATE(22), 1,
      sym_signature,
    ACTIONS(200), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [657] = 2,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(202), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [666] = 3,
    ACTIONS(190), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(206), 2,
      sym__indent,
      sym__indent_decr,
  [677] = 2,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(86), 3,
      anon_sym_EQ_GT,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [686] = 3,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(85), 1,
      sym_trait_member,
    STATE(103), 2,
      sym_prototype,
      sym_function_definition,
  [697] = 2,
    ACTIONS(212), 1,
      sym__newline,
    ACTIONS(210), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [706] = 3,
    ACTIONS(190), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(214), 2,
      sym__indent,
      sym__indent_decr,
  [717] = 3,
    ACTIONS(216), 1,
      sym__newline,
    STATE(48), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(219), 2,
      sym__indent,
      sym__indent_decr,
  [728] = 3,
    ACTIONS(221), 1,
      sym__indent,
    ACTIONS(223), 1,
      sym__indent_decr,
    STATE(76), 1,
      aux_sym_trait_decl_repeat2,
  [738] = 2,
    STATE(37), 1,
      sym_type,
    ACTIONS(167), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [746] = 3,
    ACTIONS(225), 1,
      anon_sym_DASH_GT,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_arguments_decl_repeat1,
  [756] = 2,
    STATE(21), 1,
      sym__expression,
    ACTIONS(229), 2,
      sym_identifier,
      sym_number,
  [764] = 3,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(30), 1,
      sym_arguments_decl,
  [774] = 2,
    STATE(15), 1,
      sym_type,
    ACTIONS(200), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [782] = 3,
    ACTIONS(233), 1,
      sym__indent,
    ACTIONS(235), 1,
      sym__indent_decr,
    STATE(67), 1,
      aux_sym_body_repeat1,
  [792] = 3,
    ACTIONS(237), 1,
      sym__indent,
    ACTIONS(239), 1,
      sym__indent_decr,
    STATE(73), 1,
      aux_sym_struct_decl_repeat2,
  [802] = 2,
    STATE(105), 1,
      sym__expression,
    ACTIONS(241), 2,
      sym_identifier,
      sym_number,
  [810] = 2,
    STATE(24), 1,
      sym_identifier_path,
    ACTIONS(243), 2,
      anon_sym_LPAREN_STAR_RPAREN,
      sym_identifier,
  [818] = 3,
    ACTIONS(54), 1,
      sym__newline,
    ACTIONS(245), 1,
      anon_sym_EQ_GT,
    STATE(59), 1,
      aux_sym_signature_repeat1,
  [828] = 3,
    ACTIONS(50), 1,
      sym__newline,
    ACTIONS(248), 1,
      anon_sym_EQ_GT,
    STATE(59), 1,
      aux_sym_signature_repeat1,
  [838] = 3,
    ACTIONS(250), 1,
      sym__indent,
    ACTIONS(252), 1,
      sym__indent_decr,
    STATE(74), 1,
      aux_sym_impl_repeat1,
  [848] = 2,
    STATE(77), 1,
      sym_type,
    ACTIONS(167), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [856] = 3,
    ACTIONS(44), 1,
      sym__newline,
    ACTIONS(248), 1,
      anon_sym_EQ_GT,
    STATE(60), 1,
      aux_sym_signature_repeat1,
  [866] = 2,
    STATE(102), 1,
      sym_type,
    ACTIONS(167), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [874] = 3,
    ACTIONS(254), 1,
      anon_sym_DASH_GT,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_arguments_decl_repeat1,
  [884] = 2,
    STATE(36), 1,
      sym_type,
    ACTIONS(167), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [892] = 3,
    ACTIONS(259), 1,
      sym__indent,
    ACTIONS(262), 1,
      sym__indent_decr,
    STATE(67), 1,
      aux_sym_body_repeat1,
  [902] = 3,
    ACTIONS(165), 1,
      anon_sym_DASH_GT,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(29), 1,
      sym_arguments_decl,
  [912] = 2,
    STATE(96), 1,
      sym_type,
    ACTIONS(167), 2,
      aux_sym_type_token1,
      aux_sym_type_token2,
  [920] = 3,
    ACTIONS(233), 1,
      sym__indent,
    ACTIONS(264), 1,
      sym__indent_decr,
    STATE(67), 1,
      aux_sym_body_repeat1,
  [930] = 3,
    ACTIONS(250), 1,
      sym__indent,
    ACTIONS(266), 1,
      sym__indent_decr,
    STATE(74), 1,
      aux_sym_impl_repeat1,
  [940] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(51), 1,
      aux_sym_arguments_decl_repeat1,
  [950] = 3,
    ACTIONS(270), 1,
      sym__indent,
    ACTIONS(273), 1,
      sym__indent_decr,
    STATE(73), 1,
      aux_sym_struct_decl_repeat2,
  [960] = 3,
    ACTIONS(275), 1,
      sym__indent,
    ACTIONS(278), 1,
      sym__indent_decr,
    STATE(74), 1,
      aux_sym_impl_repeat1,
  [970] = 3,
    ACTIONS(221), 1,
      sym__indent,
    ACTIONS(280), 1,
      sym__indent_decr,
    STATE(76), 1,
      aux_sym_trait_decl_repeat2,
  [980] = 3,
    ACTIONS(282), 1,
      sym__indent,
    ACTIONS(285), 1,
      sym__indent_decr,
    STATE(76), 1,
      aux_sym_trait_decl_repeat2,
  [990] = 2,
    ACTIONS(54), 1,
      sym__newline,
    ACTIONS(56), 1,
      anon_sym_EQ_GT,
  [997] = 2,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(80), 1,
      sym_function_definition,
  [1004] = 2,
    ACTIONS(233), 1,
      sym__indent,
    STATE(55), 1,
      aux_sym_body_repeat1,
  [1011] = 2,
    ACTIONS(289), 1,
      sym__newline,
    STATE(47), 1,
      aux_sym_struct_decl_repeat1,
  [1018] = 2,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(83), 1,
      sym_struct_member,
  [1025] = 2,
    ACTIONS(233), 1,
      sym__indent,
    STATE(70), 1,
      aux_sym_body_repeat1,
  [1032] = 2,
    ACTIONS(293), 1,
      sym__newline,
    STATE(43), 1,
      aux_sym_struct_decl_repeat1,
  [1039] = 2,
    ACTIONS(221), 1,
      sym__indent,
    STATE(75), 1,
      aux_sym_trait_decl_repeat2,
  [1046] = 2,
    ACTIONS(295), 1,
      sym__newline,
    STATE(38), 1,
      aux_sym_struct_decl_repeat1,
  [1053] = 2,
    ACTIONS(237), 1,
      sym__indent,
    STATE(56), 1,
      aux_sym_struct_decl_repeat2,
  [1060] = 1,
    ACTIONS(297), 2,
      anon_sym_LPAREN_STAR_RPAREN,
      sym_identifier,
  [1065] = 2,
    ACTIONS(221), 1,
      sym__indent,
    STATE(49), 1,
      aux_sym_trait_decl_repeat2,
  [1072] = 2,
    ACTIONS(250), 1,
      sym__indent,
    STATE(71), 1,
      aux_sym_impl_repeat1,
  [1079] = 1,
    ACTIONS(254), 2,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
  [1084] = 2,
    ACTIONS(250), 1,
      sym__indent,
    STATE(61), 1,
      aux_sym_impl_repeat1,
  [1091] = 2,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(26), 1,
      sym_prototype,
  [1098] = 2,
    ACTIONS(301), 1,
      sym__newline,
    STATE(40), 1,
      aux_sym_struct_decl_repeat1,
  [1105] = 1,
    ACTIONS(109), 1,
      sym__newline,
  [1109] = 1,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [1113] = 1,
    ACTIONS(305), 1,
      sym__newline,
  [1117] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1121] = 1,
    ACTIONS(309), 1,
      sym_identifier,
  [1125] = 1,
    ACTIONS(311), 1,
      sym__indent_incr,
  [1129] = 1,
    ACTIONS(125), 1,
      sym__newline,
  [1133] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1137] = 1,
    ACTIONS(315), 1,
      sym__newline,
  [1141] = 1,
    ACTIONS(317), 1,
      sym__newline,
  [1145] = 1,
    ACTIONS(319), 1,
      sym__indent_incr,
  [1149] = 1,
    ACTIONS(121), 1,
      sym__newline,
  [1153] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON,
  [1157] = 1,
    ACTIONS(323), 1,
      sym__indent_incr,
  [1161] = 1,
    ACTIONS(325), 1,
      sym__indent_incr,
  [1165] = 1,
    ACTIONS(113), 1,
      sym__newline,
  [1169] = 1,
    ACTIONS(327), 1,
      anon_sym_COLON,
  [1173] = 1,
    ACTIONS(329), 1,
      sym__indent_incr,
  [1177] = 1,
    ACTIONS(331), 1,
      sym__indent_incr,
  [1181] = 1,
    ACTIONS(333), 1,
      sym__indent_incr,
  [1185] = 1,
    ACTIONS(145), 1,
      sym__newline,
  [1189] = 1,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [1193] = 1,
    ACTIONS(337), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 196,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 264,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 298,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 326,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 354,
  [SMALL_STATE(21)] = 368,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 396,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 438,
  [SMALL_STATE(27)] = 452,
  [SMALL_STATE(28)] = 466,
  [SMALL_STATE(29)] = 480,
  [SMALL_STATE(30)] = 499,
  [SMALL_STATE(31)] = 518,
  [SMALL_STATE(32)] = 540,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 567,
  [SMALL_STATE(35)] = 579,
  [SMALL_STATE(36)] = 591,
  [SMALL_STATE(37)] = 603,
  [SMALL_STATE(38)] = 615,
  [SMALL_STATE(39)] = 626,
  [SMALL_STATE(40)] = 635,
  [SMALL_STATE(41)] = 646,
  [SMALL_STATE(42)] = 657,
  [SMALL_STATE(43)] = 666,
  [SMALL_STATE(44)] = 677,
  [SMALL_STATE(45)] = 686,
  [SMALL_STATE(46)] = 697,
  [SMALL_STATE(47)] = 706,
  [SMALL_STATE(48)] = 717,
  [SMALL_STATE(49)] = 728,
  [SMALL_STATE(50)] = 738,
  [SMALL_STATE(51)] = 746,
  [SMALL_STATE(52)] = 756,
  [SMALL_STATE(53)] = 764,
  [SMALL_STATE(54)] = 774,
  [SMALL_STATE(55)] = 782,
  [SMALL_STATE(56)] = 792,
  [SMALL_STATE(57)] = 802,
  [SMALL_STATE(58)] = 810,
  [SMALL_STATE(59)] = 818,
  [SMALL_STATE(60)] = 828,
  [SMALL_STATE(61)] = 838,
  [SMALL_STATE(62)] = 848,
  [SMALL_STATE(63)] = 856,
  [SMALL_STATE(64)] = 866,
  [SMALL_STATE(65)] = 874,
  [SMALL_STATE(66)] = 884,
  [SMALL_STATE(67)] = 892,
  [SMALL_STATE(68)] = 902,
  [SMALL_STATE(69)] = 912,
  [SMALL_STATE(70)] = 920,
  [SMALL_STATE(71)] = 930,
  [SMALL_STATE(72)] = 940,
  [SMALL_STATE(73)] = 950,
  [SMALL_STATE(74)] = 960,
  [SMALL_STATE(75)] = 970,
  [SMALL_STATE(76)] = 980,
  [SMALL_STATE(77)] = 990,
  [SMALL_STATE(78)] = 997,
  [SMALL_STATE(79)] = 1004,
  [SMALL_STATE(80)] = 1011,
  [SMALL_STATE(81)] = 1018,
  [SMALL_STATE(82)] = 1025,
  [SMALL_STATE(83)] = 1032,
  [SMALL_STATE(84)] = 1039,
  [SMALL_STATE(85)] = 1046,
  [SMALL_STATE(86)] = 1053,
  [SMALL_STATE(87)] = 1060,
  [SMALL_STATE(88)] = 1065,
  [SMALL_STATE(89)] = 1072,
  [SMALL_STATE(90)] = 1079,
  [SMALL_STATE(91)] = 1084,
  [SMALL_STATE(92)] = 1091,
  [SMALL_STATE(93)] = 1098,
  [SMALL_STATE(94)] = 1105,
  [SMALL_STATE(95)] = 1109,
  [SMALL_STATE(96)] = 1113,
  [SMALL_STATE(97)] = 1117,
  [SMALL_STATE(98)] = 1121,
  [SMALL_STATE(99)] = 1125,
  [SMALL_STATE(100)] = 1129,
  [SMALL_STATE(101)] = 1133,
  [SMALL_STATE(102)] = 1137,
  [SMALL_STATE(103)] = 1141,
  [SMALL_STATE(104)] = 1145,
  [SMALL_STATE(105)] = 1149,
  [SMALL_STATE(106)] = 1153,
  [SMALL_STATE(107)] = 1157,
  [SMALL_STATE(108)] = 1161,
  [SMALL_STATE(109)] = 1165,
  [SMALL_STATE(110)] = 1169,
  [SMALL_STATE(111)] = 1173,
  [SMALL_STATE(112)] = 1177,
  [SMALL_STATE(113)] = 1181,
  [SMALL_STATE(114)] = 1185,
  [SMALL_STATE(115)] = 1189,
  [SMALL_STATE(116)] = 1193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signature, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signature, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signature_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_signature_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_path_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_path_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_path_repeat1, 2), SHIFT_REPEAT(87),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_path, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_path, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_path, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_path, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl, 6),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_decl, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_decl, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod_decl, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod_decl, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return__statement, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return__statement, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prototype, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prototype, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_impl, 7),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_impl, 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 6),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_decl, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_decl, 6),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trait_decl, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trait_decl_repeat1, 2), SHIFT_REPEAT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_decl_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_decl_repeat2, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat2, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_impl_repeat1, 3),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2), SHIFT_REPEAT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(62),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2), SHIFT_REPEAT(98),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(32),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat2, 2), SHIFT_REPEAT(81),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat2, 2),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_impl_repeat1, 2), SHIFT_REPEAT(78),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_impl_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trait_decl_repeat2, 2), SHIFT_REPEAT(45),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trait_decl_repeat2, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3),
  [307] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trait_member, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rock_external_scanner_create(void);
void tree_sitter_rock_external_scanner_destroy(void *);
bool tree_sitter_rock_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rock_external_scanner_serialize(void *, char *);
void tree_sitter_rock_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rock(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rock_external_scanner_create,
      tree_sitter_rock_external_scanner_destroy,
      tree_sitter_rock_external_scanner_scan,
      tree_sitter_rock_external_scanner_serialize,
      tree_sitter_rock_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
