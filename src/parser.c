#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_DASH_GT = 3,
  anon_sym_COMMA = 4,
  anon_sym_bool = 5,
  anon_sym_int = 6,
  anon_sym_return = 7,
  sym_identifier = 8,
  sym_number = 9,
  sym__newline = 10,
  sym__indent = 11,
  sym__indent_incr = 12,
  sym__indent_decr = 13,
  sym_source_file = 14,
  sym_top_level = 15,
  sym_function_definition = 16,
  sym_arguments_decl = 17,
  sym_body = 18,
  sym__statement = 19,
  sym_return__statement = 20,
  sym__expression = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_top_level_repeat1 = 23,
  aux_sym_arguments_decl_repeat1 = 24,
  aux_sym_body_repeat1 = 25,
  aux_sym_body_repeat2 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_bool] = "bool",
  [anon_sym_int] = "int",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__indent_incr] = "_indent_incr",
  [sym__indent_decr] = "_indent_decr",
  [sym_source_file] = "source_file",
  [sym_top_level] = "top_level",
  [sym_function_definition] = "function_definition",
  [sym_arguments_decl] = "arguments_decl",
  [sym_body] = "body",
  [sym__statement] = "_statement",
  [sym_return__statement] = "return__statement",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_top_level_repeat1] = "top_level_repeat1",
  [aux_sym_arguments_decl_repeat1] = "arguments_decl_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_body_repeat2] = "body_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__indent_incr] = sym__indent_incr,
  [sym__indent_decr] = sym__indent_decr,
  [sym_source_file] = sym_source_file,
  [sym_top_level] = sym_top_level,
  [sym_function_definition] = sym_function_definition,
  [sym_arguments_decl] = sym_arguments_decl,
  [sym_body] = sym_body,
  [sym__statement] = sym__statement,
  [sym_return__statement] = sym_return__statement,
  [sym__expression] = sym__expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_top_level_repeat1] = aux_sym_top_level_repeat1,
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
  [anon_sym_COLON] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_top_level_repeat1] = {
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
      if (eof) ADVANCE(6);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_int);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0, .external_lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__indent_incr] = ACTIONS(1),
    [sym__indent_decr] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym_top_level] = STATE(4),
    [sym_function_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      sym__newline,
    STATE(16), 1,
      sym_body,
    ACTIONS(9), 2,
      sym_identifier,
      sym_number,
    STATE(17), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [19] = 4,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    STATE(28), 3,
      sym__statement,
      sym_return__statement,
      sym__expression,
  [34] = 4,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_function_definition,
    STATE(5), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
  [48] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(8), 1,
      sym_function_definition,
    STATE(5), 2,
      sym_top_level,
      aux_sym_source_file_repeat1,
  [62] = 3,
    ACTIONS(26), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_body_repeat1,
    ACTIONS(29), 2,
      sym__indent,
      sym__indent_decr,
  [73] = 3,
    ACTIONS(31), 1,
      sym__newline,
    STATE(6), 1,
      aux_sym_body_repeat1,
    ACTIONS(33), 2,
      sym__indent,
      sym__indent_decr,
  [84] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LF,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_top_level_repeat1,
  [97] = 4,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_LF,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_top_level_repeat1,
  [110] = 2,
    ACTIONS(49), 1,
      sym__newline,
    ACTIONS(47), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [119] = 2,
    ACTIONS(53), 1,
      sym__newline,
    ACTIONS(51), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [128] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym_top_level_repeat1,
  [141] = 2,
    ACTIONS(64), 1,
      sym__newline,
    ACTIONS(62), 3,
      anon_sym_return,
      sym_identifier,
      sym_number,
  [150] = 2,
    STATE(19), 1,
      sym__expression,
    ACTIONS(66), 2,
      sym_identifier,
      sym_number,
  [158] = 3,
    ACTIONS(68), 1,
      anon_sym_DASH_GT,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_arguments_decl_repeat1,
  [168] = 2,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [176] = 2,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [184] = 3,
    ACTIONS(80), 1,
      anon_sym_DASH_GT,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_arguments_decl_repeat1,
  [194] = 2,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [202] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
    STATE(15), 1,
      aux_sym_arguments_decl_repeat1,
  [212] = 3,
    ACTIONS(91), 1,
      sym__indent,
    ACTIONS(93), 1,
      sym__indent_decr,
    STATE(23), 1,
      aux_sym_body_repeat2,
  [222] = 2,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [230] = 3,
    ACTIONS(99), 1,
      sym__indent,
    ACTIONS(102), 1,
      sym__indent_decr,
    STATE(23), 1,
      aux_sym_body_repeat2,
  [240] = 3,
    ACTIONS(104), 1,
      anon_sym_DASH_GT,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(2), 1,
      sym_arguments_decl,
  [250] = 2,
    STATE(33), 1,
      sym__expression,
    ACTIONS(108), 2,
      sym_identifier,
      sym_number,
  [258] = 1,
    ACTIONS(80), 2,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
  [263] = 2,
    ACTIONS(91), 1,
      sym__indent,
    STATE(21), 1,
      aux_sym_body_repeat2,
  [270] = 2,
    ACTIONS(110), 1,
      sym__newline,
    STATE(7), 1,
      aux_sym_body_repeat1,
  [277] = 1,
    ACTIONS(112), 1,
      sym_identifier,
  [281] = 1,
    ACTIONS(114), 1,
      sym__indent_incr,
  [285] = 1,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [289] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [293] = 1,
    ACTIONS(85), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 168,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 194,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 212,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 230,
  [SMALL_STATE(24)] = 240,
  [SMALL_STATE(25)] = 250,
  [SMALL_STATE(26)] = 258,
  [SMALL_STATE(27)] = 263,
  [SMALL_STATE(28)] = 270,
  [SMALL_STATE(29)] = 277,
  [SMALL_STATE(30)] = 281,
  [SMALL_STATE(31)] = 285,
  [SMALL_STATE(32)] = 289,
  [SMALL_STATE(33)] = 293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_top_level, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_top_level, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_top_level_repeat1, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_top_level_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments_decl, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments_decl, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_decl_repeat1, 2), SHIFT_REPEAT(29),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return__statement, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return__statement, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 4),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2), SHIFT_REPEAT(3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat2, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
