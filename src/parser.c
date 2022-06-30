#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_extern = 2,
  anon_sym_COLON = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_COMMA = 6,
  anon_sym_Bool = 7,
  anon_sym_Int64 = 8,
  anon_sym_return = 9,
  sym_identifier = 10,
  sym_number = 11,
  sym__newline = 12,
  sym__indent = 13,
  sym__indent_incr = 14,
  sym__indent_decr = 15,
  sym_source_file = 16,
  sym_top_level = 17,
  sym_external = 18,
  sym_prototype = 19,
  sym_signature = 20,
  sym_function_definition = 21,
  sym_arguments_decl = 22,
  sym_type = 23,
  sym_body = 24,
  sym__statement = 25,
  sym_return__statement = 26,
  sym__expression = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_top_level_repeat1 = 29,
  aux_sym_signature_repeat1 = 30,
  aux_sym_arguments_decl_repeat1 = 31,
  aux_sym_body_repeat1 = 32,
  aux_sym_body_repeat2 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_extern] = "extern",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_Bool] = "Bool",
  [anon_sym_Int64] = "Int64",
  [anon_sym_return] = "return",
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
  [sym_signature] = "signature",
  [sym_function_definition] = "function_definition",
  [sym_arguments_decl] = "arguments_decl",
  [sym_type] = "type",
  [sym_body] = "body",
  [sym__statement] = "_statement",
  [sym_return__statement] = "return__statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_top_level_repeat1] = "top_level_repeat1",
  [aux_sym_signature_repeat1] = "signature_repeat1",
  [aux_sym_arguments_decl_repeat1] = "arguments_decl_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_Bool] = anon_sym_Bool,
  [anon_sym_Int64] = anon_sym_Int64,
  [anon_sym_return] = anon_sym_return,
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
  [sym_signature] = sym_signature,
  [sym_function_definition] = sym_function_definition,
  [sym_arguments_decl] = sym_arguments_decl,
  [sym_type] = sym_type,
  [sym_body] = sym_body,
  [sym__statement] = sym__statement,
  [sym_return__statement] = sym_return__statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_top_level_repeat1] = aux_sym_top_level_repeat1,
  [aux_sym_signature_repeat1] = aux_sym_signature_repeat1,
  [aux_sym_arguments_decl_repeat1] = aux_sym_arguments_decl_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_body_repeat2] = aux_sym_body_repeat2,
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
  [anon_sym_Bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
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
  [sym_type] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_level_repeat1] = {
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
  [aux_sym_body_repeat2] = {
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
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'B') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '4') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Bool);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_Int64);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(31);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
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
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_Bool] = ACTIONS(1),
    [anon_sym_Int64] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_incr] = ACTIONS(1),
    [sym__indent_decr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_top_level] = STATE(3),
    [sym_external] = STATE(10),
    [sym_function_definition] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_extern] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      sym__newline,
    STATE(23), 1,
      sym_body,
    ACTIONS(11), 2,
      sym_identifier,
      sym_number,
    STATE(24), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [19] = 5,
    ACTIONS(5), 1,
      anon_sym_extern,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
    STATE(10), 2,
      sym_external,
      sym_function_definition,
  [37] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(4), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
    STATE(10), 2,
      sym_external,
      sym_function_definition,
  [55] = 4,
    ACTIONS(29), 1,
      anon_sym_EQ_GT,
    STATE(8), 1,
      aux_sym_signature_repeat1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(27), 2,
      anon_sym_extern,
      sym_identifier,
  [70] = 4,
    ACTIONS(29), 1,
      anon_sym_EQ_GT,
    STATE(5), 1,
      aux_sym_signature_repeat1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(33), 2,
      anon_sym_extern,
      sym_identifier,
  [85] = 4,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      sym_number,
    STATE(38), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [100] = 4,
    ACTIONS(45), 1,
      anon_sym_EQ_GT,
    STATE(8), 1,
      aux_sym_signature_repeat1,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 2,
      anon_sym_extern,
      sym_identifier,
  [115] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 3,
      anon_sym_extern,
      anon_sym_EQ_GT,
      sym_identifier,
  [125] = 4,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_LF,
    STATE(12), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(52), 2,
      anon_sym_extern,
      sym_identifier,
  [139] = 2,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(56), 3,
      anon_sym_extern,
      anon_sym_EQ_GT,
      sym_identifier,
  [149] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(62), 2,
      anon_sym_extern,
      sym_identifier,
  [163] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_LF,
    STATE(13), 1,
      aux_sym_top_level_repeat1,
    ACTIONS(69), 2,
      anon_sym_extern,
      sym_identifier,
  [177] = 3,
    STATE(6), 1,
      sym_type,
    STATE(18), 1,
      sym_signature,
    ACTIONS(71), 2,
      anon_sym_Bool,
      anon_sym_Int64,
  [188] = 3,
    ACTIONS(73), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_body_repeat1,
    ACTIONS(76), 2,
      sym__indent,
      sym__indent_decr,
  [199] = 2,
    ACTIONS(80), 1,
      sym__newline,
    ACTIONS(78), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [208] = 2,
    ACTIONS(84), 1,
      sym__newline,
    ACTIONS(82), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [217] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(88), 2,
      anon_sym_extern,
      sym_identifier,
  [226] = 2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(92), 2,
      anon_sym_extern,
      sym_identifier,
  [235] = 2,
    ACTIONS(96), 1,
      sym__newline,
    ACTIONS(94), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [244] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(100), 2,
      anon_sym_extern,
      sym_identifier,
  [253] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(104), 2,
      anon_sym_extern,
      sym_identifier,
  [262] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(108), 2,
      anon_sym_extern,
      sym_identifier,
  [271] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(112), 2,
      anon_sym_extern,
      sym_identifier,
  [280] = 3,
    ACTIONS(114), 1,
      sym__newline,
    STATE(15), 1,
      aux_sym_body_repeat1,
    ACTIONS(116), 2,
      sym__indent,
      sym__indent_decr,
  [291] = 3,
    ACTIONS(118), 1,
      anon_sym_DASH_GT,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_arguments_decl_repeat1,
  [301] = 2,
    STATE(9), 1,
      sym_type,
    ACTIONS(71), 2,
      anon_sym_Bool,
      anon_sym_Int64,
  [309] = 2,
    STATE(21), 1,
      sym__expression,
    ACTIONS(122), 2,
      sym_identifier,
      sym_number,
  [317] = 3,
    ACTIONS(124), 1,
      anon_sym_DASH_GT,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_arguments_decl_repeat1,
  [327] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_DASH_GT,
    STATE(26), 1,
      aux_sym_arguments_decl_repeat1,
  [337] = 3,
    ACTIONS(131), 1,
      anon_sym_DASH_GT,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(2), 1,
      sym_arguments_decl,
  [347] = 3,
    ACTIONS(135), 1,
      sym__indent,
    ACTIONS(137), 1,
      sym__indent_decr,
    STATE(33), 1,
      aux_sym_body_repeat2,
  [357] = 3,
    ACTIONS(139), 1,
      sym__indent,
    ACTIONS(142), 1,
      sym__indent_decr,
    STATE(33), 1,
      aux_sym_body_repeat2,
  [367] = 2,
    STATE(44), 1,
      sym__expression,
    ACTIONS(144), 2,
      sym_identifier,
      sym_number,
  [375] = 1,
    ACTIONS(124), 2,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
  [380] = 2,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(19), 1,
      sym_prototype,
  [387] = 2,
    ACTIONS(135), 1,
      sym__indent,
    STATE(32), 1,
      aux_sym_body_repeat2,
  [394] = 2,
    ACTIONS(148), 1,
      sym__newline,
    STATE(25), 1,
      aux_sym_body_repeat1,
  [401] = 1,
    ACTIONS(150), 1,
      sym__indent_incr,
  [405] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [409] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [413] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [417] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON,
  [421] = 1,
    ACTIONS(98), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 125,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 149,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 177,
  [SMALL_STATE(15)] = 188,
  [SMALL_STATE(16)] = 199,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 226,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 280,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 317,
  [SMALL_STATE(30)] = 327,
  [SMALL_STATE(31)] = 337,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 357,
  [SMALL_STATE(34)] = 367,
  [SMALL_STATE(35)] = 375,
  [SMALL_STATE(36)] = 380,
  [SMALL_STATE(37)] = 387,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 405,
  [SMALL_STATE(41)] = 409,
  [SMALL_STATE(42)] = 413,
  [SMALL_STATE(43)] = 417,
  [SMALL_STATE(44)] = 421,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signature, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signature, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signature_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_signature_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prototype, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prototype, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return__statement, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return__statement, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2), SHIFT_REPEAT(40),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
