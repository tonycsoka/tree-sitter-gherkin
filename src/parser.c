#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Feature_COLON = 1,
  anon_sym_SPACE = 2,
  anon_sym_Rule_COLON = 3,
  anon_sym_Background_COLON = 4,
  anon_sym_Scenario_COLON = 5,
  anon_sym_Example_COLON = 6,
  anon_sym_ScenarioOutline_COLON = 7,
  anon_sym_Examples_COLON = 8,
  anon_sym_Scenarios_COLON = 9,
  sym_tag = 10,
  sym_name = 11,
  aux_sym__comment_token1 = 12,
  anon_sym_POUND = 13,
  aux_sym__literal_token1 = 14,
  aux_sym__var_token1 = 15,
  aux_sym__var_token2 = 16,
  aux_sym__var_token3 = 17,
  aux_sym__var_token4 = 18,
  aux_sym__var_token5 = 19,
  aux_sym_description_token1 = 20,
  anon_sym_Given = 21,
  anon_sym_When = 22,
  anon_sym_Then = 23,
  anon_sym_And = 24,
  anon_sym_But = 25,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 26,
  aux_sym_text_token1 = 27,
  aux_sym_text_body_token1 = 28,
  anon_sym_PIPE = 29,
  sym_table_element = 30,
  sym_source_file = 31,
  sym_feature = 32,
  sym_rule = 33,
  sym_background = 34,
  sym_scenario = 35,
  sym_example = 36,
  sym_scenario_outline = 37,
  sym_examples = 38,
  sym_scenarios = 39,
  sym_action = 40,
  sym__comment = 41,
  sym_comment = 42,
  sym__literal = 43,
  sym__var = 44,
  sym_var = 45,
  sym_description = 46,
  sym_given = 47,
  sym_when = 48,
  sym_then = 49,
  sym_and = 50,
  sym_but = 51,
  sym_text = 52,
  sym_text_body = 53,
  sym_table = 54,
  sym_table_row = 55,
  aux_sym_feature_repeat1 = 56,
  aux_sym_feature_repeat2 = 57,
  aux_sym_feature_repeat3 = 58,
  aux_sym_feature_repeat4 = 59,
  aux_sym_background_repeat1 = 60,
  aux_sym_scenario_repeat1 = 61,
  aux_sym_scenario_outline_repeat1 = 62,
  aux_sym_action_repeat1 = 63,
  aux_sym_comment_repeat1 = 64,
  aux_sym_description_repeat1 = 65,
  aux_sym_text_body_repeat1 = 66,
  aux_sym_table_repeat1 = 67,
  aux_sym_table_row_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Feature_COLON] = "Feature:",
  [anon_sym_SPACE] = " ",
  [anon_sym_Rule_COLON] = "Rule:",
  [anon_sym_Background_COLON] = "Background:",
  [anon_sym_Scenario_COLON] = "Scenario:",
  [anon_sym_Example_COLON] = "Example:",
  [anon_sym_ScenarioOutline_COLON] = "Scenario Outline:",
  [anon_sym_Examples_COLON] = "Examples:",
  [anon_sym_Scenarios_COLON] = "Scenarios:",
  [sym_tag] = "tag",
  [sym_name] = "name",
  [aux_sym__comment_token1] = "_comment_token1",
  [anon_sym_POUND] = "#",
  [aux_sym__literal_token1] = "_literal_token1",
  [aux_sym__var_token1] = "_var_token1",
  [aux_sym__var_token2] = "_var_token2",
  [aux_sym__var_token3] = "_var_token3",
  [aux_sym__var_token4] = "_var_token4",
  [aux_sym__var_token5] = "_var_token5",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_Given] = "Given",
  [anon_sym_When] = "When",
  [anon_sym_Then] = "Then",
  [anon_sym_And] = "And",
  [anon_sym_But] = "But",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_body_token1] = "text_body_token1",
  [anon_sym_PIPE] = "|",
  [sym_table_element] = "table_element",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_rule] = "rule",
  [sym_background] = "background",
  [sym_scenario] = "scenario",
  [sym_example] = "example",
  [sym_scenario_outline] = "scenario_outline",
  [sym_examples] = "examples",
  [sym_scenarios] = "scenarios",
  [sym_action] = "action",
  [sym__comment] = "_comment",
  [sym_comment] = "comment",
  [sym__literal] = "_literal",
  [sym__var] = "_var",
  [sym_var] = "var",
  [sym_description] = "description",
  [sym_given] = "given",
  [sym_when] = "when",
  [sym_then] = "then",
  [sym_and] = "and",
  [sym_but] = "but",
  [sym_text] = "text",
  [sym_text_body] = "text_body",
  [sym_table] = "table",
  [sym_table_row] = "table_row",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_feature_repeat2] = "feature_repeat2",
  [aux_sym_feature_repeat3] = "feature_repeat3",
  [aux_sym_feature_repeat4] = "feature_repeat4",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_repeat1] = "scenario_repeat1",
  [aux_sym_scenario_outline_repeat1] = "scenario_outline_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_text_body_repeat1] = "text_body_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_row_repeat1] = "table_row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Feature_COLON] = anon_sym_Feature_COLON,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_Rule_COLON] = anon_sym_Rule_COLON,
  [anon_sym_Background_COLON] = anon_sym_Background_COLON,
  [anon_sym_Scenario_COLON] = anon_sym_Scenario_COLON,
  [anon_sym_Example_COLON] = anon_sym_Example_COLON,
  [anon_sym_ScenarioOutline_COLON] = anon_sym_ScenarioOutline_COLON,
  [anon_sym_Examples_COLON] = anon_sym_Examples_COLON,
  [anon_sym_Scenarios_COLON] = anon_sym_Scenarios_COLON,
  [sym_tag] = sym_tag,
  [sym_name] = sym_name,
  [aux_sym__comment_token1] = aux_sym__comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__literal_token1] = aux_sym__literal_token1,
  [aux_sym__var_token1] = aux_sym__var_token1,
  [aux_sym__var_token2] = aux_sym__var_token2,
  [aux_sym__var_token3] = aux_sym__var_token3,
  [aux_sym__var_token4] = aux_sym__var_token4,
  [aux_sym__var_token5] = aux_sym__var_token5,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_Given] = anon_sym_Given,
  [anon_sym_When] = anon_sym_When,
  [anon_sym_Then] = anon_sym_Then,
  [anon_sym_And] = anon_sym_And,
  [anon_sym_But] = anon_sym_But,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_body_token1] = aux_sym_text_body_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_table_element] = sym_table_element,
  [sym_source_file] = sym_source_file,
  [sym_feature] = sym_feature,
  [sym_rule] = sym_rule,
  [sym_background] = sym_background,
  [sym_scenario] = sym_scenario,
  [sym_example] = sym_example,
  [sym_scenario_outline] = sym_scenario_outline,
  [sym_examples] = sym_examples,
  [sym_scenarios] = sym_scenarios,
  [sym_action] = sym_action,
  [sym__comment] = sym__comment,
  [sym_comment] = sym_comment,
  [sym__literal] = sym__literal,
  [sym__var] = sym__var,
  [sym_var] = sym_var,
  [sym_description] = sym_description,
  [sym_given] = sym_given,
  [sym_when] = sym_when,
  [sym_then] = sym_then,
  [sym_and] = sym_and,
  [sym_but] = sym_but,
  [sym_text] = sym_text,
  [sym_text_body] = sym_text_body,
  [sym_table] = sym_table,
  [sym_table_row] = sym_table_row,
  [aux_sym_feature_repeat1] = aux_sym_feature_repeat1,
  [aux_sym_feature_repeat2] = aux_sym_feature_repeat2,
  [aux_sym_feature_repeat3] = aux_sym_feature_repeat3,
  [aux_sym_feature_repeat4] = aux_sym_feature_repeat4,
  [aux_sym_background_repeat1] = aux_sym_background_repeat1,
  [aux_sym_scenario_repeat1] = aux_sym_scenario_repeat1,
  [aux_sym_scenario_outline_repeat1] = aux_sym_scenario_outline_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_text_body_repeat1] = aux_sym_text_body_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_row_repeat1] = aux_sym_table_row_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Feature_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Rule_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Background_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Example_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScenarioOutline_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Examples_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenarios_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__var_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_When] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_And] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_But] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_table_element] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_example] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_examples] = {
    .visible = true,
    .named = true,
  },
  [sym_scenarios] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__var] = {
    .visible = false,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_given] = {
    .visible = true,
    .named = true,
  },
  [sym_when] = {
    .visible = true,
    .named = true,
  },
  [sym_then] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_but] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text_body] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_row] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_outline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_row_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 3,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 2,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 3,
  [27] = 2,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 17,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 9,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 17,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 82,
  [87] = 83,
  [88] = 77,
  [89] = 85,
  [90] = 84,
  [91] = 82,
  [92] = 83,
  [93] = 77,
  [94] = 94,
  [95] = 95,
  [96] = 79,
  [97] = 78,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 128,
  [129] = 126,
  [130] = 128,
  [131] = 125,
  [132] = 126,
  [133] = 128,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 123,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 146,
  [167] = 147,
  [168] = 149,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 146,
  [173] = 147,
  [174] = 149,
  [175] = 159,
  [176] = 160,
  [177] = 164,
  [178] = 169,
  [179] = 170,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 159,
  [185] = 160,
  [186] = 164,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 164,
        '#', 75,
        '<', 159,
        '>', 160,
        '@', 58,
        'A', 126,
        'B', 86,
        'E', 155,
        'F', 103,
        'G', 114,
        'R', 151,
        'S', 94,
        'T', 112,
        'W', 113,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(2);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 164,
        '<', 159,
        '@', 58,
        'A', 126,
        'B', 150,
        'E', 156,
        'G', 114,
        'R', 151,
        'S', 95,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 164,
        '<', 159,
        'A', 126,
        'B', 150,
        'E', 157,
        'G', 114,
        'S', 96,
        'T', 112,
        'W', 113,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(220);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 163,
        '#', 75,
        '>', 160,
        '@', 58,
        'B', 22,
        'E', 56,
        'F', 31,
        'R', 53,
        'S', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(162);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(165);
      if (lookahead == '<') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 17:
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == 'B') ADVANCE(171);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == 'R') ADVANCE(204);
      if (lookahead == 'S') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(196);
      if (lookahead == 'B') ADVANCE(205);
      if (lookahead == 'G') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(184);
      if (lookahead == 'W') ADVANCE(185);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(1);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 57:
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(57);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 58:
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      ADVANCE_MAP(
        '"', 164,
        '<', 159,
        '>', 9,
        '@', 58,
        'A', 126,
        'B', 150,
        'E', 156,
        'G', 114,
        'R', 151,
        'S', 95,
        'T', 112,
        'W', 113,
        '|', 226,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Rule_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Background_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Example_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ScenarioOutline_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Examples_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Scenarios_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(109);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'g') ADVANCE(141);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'h') ADVANCE(106);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'v') ADVANCE(107);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(85);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(91);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(92);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__var_token1);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__var_token2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__var_token3);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__var_token4);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__var_token5);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__var_token5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '<') ADVANCE(161);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__var_token5);
      if (lookahead == '<') ADVANCE(161);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(202);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(188);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(180);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'k') ADVANCE(183);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 't') ADVANCE(219);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'v') ADVANCE(182);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(170);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_Given);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Given);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_When);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_When);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_Then);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Then);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_And);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_And);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_But);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_But);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '"') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_table_element);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_table_element);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 17},
  [79] = {.lex_state = 17},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 18},
  [97] = {.lex_state = 18},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 57},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 222},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 59},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 59},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 59},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Feature_COLON] = ACTIONS(1),
    [anon_sym_Rule_COLON] = ACTIONS(1),
    [anon_sym_Background_COLON] = ACTIONS(1),
    [anon_sym_Scenario_COLON] = ACTIONS(1),
    [anon_sym_Example_COLON] = ACTIONS(1),
    [anon_sym_ScenarioOutline_COLON] = ACTIONS(1),
    [anon_sym_Examples_COLON] = ACTIONS(1),
    [anon_sym_Scenarios_COLON] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym__literal_token1] = ACTIONS(1),
    [aux_sym__var_token1] = ACTIONS(1),
    [aux_sym__var_token2] = ACTIONS(1),
    [aux_sym__var_token3] = ACTIONS(1),
    [aux_sym__var_token5] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(1),
    [anon_sym_When] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [anon_sym_And] = ACTIONS(1),
    [anon_sym_But] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_feature] = STATE(138),
    [sym__comment] = STATE(94),
    [sym_comment] = STATE(141),
    [aux_sym_feature_repeat1] = STATE(94),
    [aux_sym_feature_repeat2] = STATE(122),
    [anon_sym_Feature_COLON] = ACTIONS(3),
    [sym_tag] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      aux_sym__literal_token1,
    ACTIONS(14), 1,
      aux_sym__var_token1,
    ACTIONS(17), 1,
      aux_sym__var_token3,
    ACTIONS(20), 1,
      aux_sym__var_token5,
    STATE(2), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(23), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(9), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [35] = 7,
    ACTIONS(27), 1,
      aux_sym__literal_token1,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    STATE(2), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(35), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [70] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(45), 2,
      sym_text,
      sym_table,
    ACTIONS(37), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [100] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(40), 2,
      sym_text,
      sym_table,
    ACTIONS(43), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [130] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(41), 2,
      sym_text,
      sym_table,
    ACTIONS(45), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [160] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(39), 2,
      sym_text,
      sym_table,
    ACTIONS(47), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [190] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(46), 2,
      sym_text,
      sym_table,
    ACTIONS(49), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [220] = 7,
    ACTIONS(53), 1,
      anon_sym_Given,
    ACTIONS(56), 1,
      anon_sym_When,
    ACTIONS(59), 1,
      anon_sym_Then,
    ACTIONS(62), 1,
      anon_sym_And,
    ACTIONS(65), 1,
      anon_sym_But,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [252] = 13,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    ACTIONS(80), 1,
      aux_sym_description_token1,
    STATE(30), 1,
      sym_description,
    STATE(49), 1,
      sym_background,
    STATE(78), 1,
      aux_sym_description_repeat1,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(103), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(70), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [296] = 7,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [328] = 7,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [360] = 13,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    ACTIONS(80), 1,
      aux_sym_description_token1,
    STATE(29), 1,
      sym_description,
    STATE(54), 1,
      sym_background,
    STATE(78), 1,
      aux_sym_description_repeat1,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(113), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(73), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [404] = 7,
    ACTIONS(96), 1,
      aux_sym__literal_token1,
    ACTIONS(98), 1,
      aux_sym__var_token1,
    ACTIONS(100), 1,
      aux_sym__var_token3,
    ACTIONS(102), 1,
      aux_sym__var_token5,
    ACTIONS(35), 3,
      anon_sym_Given,
      anon_sym_And,
      anon_sym_But,
    STATE(19), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(25), 7,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [436] = 7,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    ACTIONS(104), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [468] = 13,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    ACTIONS(80), 1,
      aux_sym_description_token1,
    STATE(36), 1,
      sym_description,
    STATE(53), 1,
      sym_background,
    STATE(78), 1,
      aux_sym_description_repeat1,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(112), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(71), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [512] = 2,
    ACTIONS(108), 7,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      aux_sym__var_token1,
      aux_sym__var_token3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [534] = 7,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    ACTIONS(110), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [566] = 7,
    ACTIONS(112), 1,
      aux_sym__literal_token1,
    ACTIONS(115), 1,
      aux_sym__var_token1,
    ACTIONS(118), 1,
      aux_sym__var_token3,
    ACTIONS(121), 1,
      aux_sym__var_token5,
    ACTIONS(23), 3,
      anon_sym_Given,
      anon_sym_And,
      anon_sym_But,
    STATE(19), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(9), 7,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [598] = 7,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
    STATE(9), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [630] = 9,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    ACTIONS(130), 1,
      anon_sym_Given,
    ACTIONS(132), 1,
      anon_sym_When,
    ACTIONS(134), 1,
      anon_sym_Then,
    ACTIONS(136), 1,
      anon_sym_And,
    ACTIONS(138), 1,
      anon_sym_But,
    STATE(61), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(42), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [665] = 9,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    ACTIONS(130), 1,
      anon_sym_Given,
    ACTIONS(132), 1,
      anon_sym_When,
    ACTIONS(134), 1,
      anon_sym_Then,
    ACTIONS(136), 1,
      anon_sym_And,
    ACTIONS(138), 1,
      anon_sym_But,
    STATE(55), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(42), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [700] = 9,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    ACTIONS(130), 1,
      anon_sym_Given,
    ACTIONS(132), 1,
      anon_sym_When,
    ACTIONS(134), 1,
      anon_sym_Then,
    ACTIONS(136), 1,
      anon_sym_And,
    ACTIONS(138), 1,
      anon_sym_But,
    STATE(67), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(42), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [735] = 3,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    STATE(24), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(140), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [758] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(24), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [781] = 7,
    ACTIONS(147), 1,
      aux_sym__literal_token1,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    STATE(27), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(25), 4,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
    ACTIONS(35), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [812] = 7,
    ACTIONS(155), 1,
      aux_sym__literal_token1,
    ACTIONS(158), 1,
      aux_sym__var_token1,
    ACTIONS(161), 1,
      aux_sym__var_token3,
    ACTIONS(164), 1,
      aux_sym__var_token5,
    STATE(27), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
    ACTIONS(9), 4,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
    ACTIONS(23), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [843] = 9,
    ACTIONS(167), 1,
      aux_sym_description_token1,
    ACTIONS(169), 1,
      anon_sym_Given,
    ACTIONS(171), 1,
      anon_sym_When,
    ACTIONS(173), 1,
      anon_sym_Then,
    ACTIONS(175), 1,
      anon_sym_And,
    ACTIONS(177), 1,
      anon_sym_But,
    STATE(57), 1,
      sym_description,
    STATE(97), 1,
      aux_sym_description_repeat1,
    STATE(15), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [876] = 10,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    STATE(53), 1,
      sym_background,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(112), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(71), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [911] = 10,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    STATE(54), 1,
      sym_background,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(113), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(73), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [946] = 9,
    ACTIONS(167), 1,
      aux_sym_description_token1,
    ACTIONS(179), 1,
      anon_sym_Given,
    ACTIONS(181), 1,
      anon_sym_When,
    ACTIONS(183), 1,
      anon_sym_Then,
    ACTIONS(185), 1,
      anon_sym_And,
    ACTIONS(187), 1,
      anon_sym_But,
    STATE(59), 1,
      sym_description,
    STATE(97), 1,
      aux_sym_description_repeat1,
    STATE(21), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [979] = 11,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    ACTIONS(80), 1,
      aux_sym_description_token1,
    STATE(60), 1,
      sym_description,
    STATE(75), 1,
      sym_background,
    STATE(78), 1,
      aux_sym_description_repeat1,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(63), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1016] = 9,
    ACTIONS(167), 1,
      aux_sym_description_token1,
    ACTIONS(179), 1,
      anon_sym_Given,
    ACTIONS(181), 1,
      anon_sym_When,
    ACTIONS(183), 1,
      anon_sym_Then,
    ACTIONS(185), 1,
      anon_sym_And,
    ACTIONS(187), 1,
      anon_sym_But,
    STATE(66), 1,
      sym_description,
    STATE(97), 1,
      aux_sym_description_repeat1,
    STATE(22), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1049] = 1,
    ACTIONS(189), 14,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_PIPE,
  [1066] = 1,
    ACTIONS(191), 14,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_PIPE,
  [1083] = 10,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    STATE(50), 1,
      sym_background,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(111), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(74), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1118] = 2,
    ACTIONS(108), 5,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(106), 9,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      aux_sym__var_token1,
      aux_sym__var_token3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [1137] = 9,
    ACTIONS(167), 1,
      aux_sym_description_token1,
    ACTIONS(169), 1,
      anon_sym_Given,
    ACTIONS(171), 1,
      anon_sym_When,
    ACTIONS(173), 1,
      anon_sym_Then,
    ACTIONS(175), 1,
      anon_sym_And,
    ACTIONS(177), 1,
      anon_sym_But,
    STATE(64), 1,
      sym_description,
    STATE(97), 1,
      aux_sym_description_repeat1,
    STATE(20), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1170] = 1,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1186] = 1,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1202] = 1,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1218] = 7,
    ACTIONS(199), 1,
      anon_sym_Given,
    ACTIONS(202), 1,
      anon_sym_When,
    ACTIONS(205), 1,
      anon_sym_Then,
    ACTIONS(208), 1,
      anon_sym_And,
    ACTIONS(211), 1,
      anon_sym_But,
    ACTIONS(51), 2,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
    STATE(42), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1246] = 1,
    ACTIONS(214), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1262] = 1,
    ACTIONS(216), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1278] = 1,
    ACTIONS(218), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1294] = 1,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1310] = 2,
    ACTIONS(106), 6,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      aux_sym__var_token1,
      aux_sym__var_token3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
    ACTIONS(108), 7,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1328] = 5,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(52), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
    ACTIONS(222), 5,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1351] = 8,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(113), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(73), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1380] = 8,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(110), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(72), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1409] = 5,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(52), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
    ACTIONS(232), 5,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1432] = 5,
    ACTIONS(236), 1,
      anon_sym_Given,
    ACTIONS(239), 1,
      anon_sym_And,
    ACTIONS(242), 1,
      anon_sym_But,
    STATE(52), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
    ACTIONS(234), 5,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1455] = 8,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(111), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(74), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1484] = 8,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(112), 2,
      sym_rule,
      aux_sym_feature_repeat3,
    STATE(71), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1513] = 4,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(62), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1533] = 6,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    STATE(11), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1557] = 6,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    STATE(18), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1581] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1607] = 6,
    ACTIONS(130), 1,
      anon_sym_Given,
    ACTIONS(132), 1,
      anon_sym_When,
    ACTIONS(134), 1,
      anon_sym_Then,
    ACTIONS(136), 1,
      anon_sym_And,
    ACTIONS(138), 1,
      anon_sym_But,
    STATE(23), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1631] = 8,
    ACTIONS(70), 1,
      anon_sym_Background_COLON,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(78), 1,
      sym_tag,
    STATE(76), 1,
      sym_background,
    STATE(100), 1,
      aux_sym_feature_repeat2,
    STATE(69), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1659] = 4,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(62), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(249), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1679] = 4,
    ACTIONS(253), 1,
      anon_sym_Examples_COLON,
    ACTIONS(256), 1,
      anon_sym_Scenarios_COLON,
    STATE(62), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1699] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1725] = 6,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    STATE(15), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1749] = 6,
    ACTIONS(84), 1,
      anon_sym_Given,
    ACTIONS(86), 1,
      anon_sym_When,
    ACTIONS(88), 1,
      anon_sym_Then,
    ACTIONS(90), 1,
      anon_sym_And,
    ACTIONS(92), 1,
      anon_sym_But,
    STATE(12), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1773] = 6,
    ACTIONS(130), 1,
      anon_sym_Given,
    ACTIONS(132), 1,
      anon_sym_When,
    ACTIONS(134), 1,
      anon_sym_Then,
    ACTIONS(136), 1,
      anon_sym_And,
    ACTIONS(138), 1,
      anon_sym_But,
    STATE(21), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1797] = 4,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(62), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1817] = 7,
    ACTIONS(265), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(268), 1,
      anon_sym_Example_COLON,
    ACTIONS(271), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(274), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1843] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1869] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1894] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1919] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1944] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1969] = 7,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [1994] = 6,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(69), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [2016] = 6,
    ACTIONS(72), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(74), 1,
      anon_sym_Example_COLON,
    ACTIONS(76), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(230), 1,
      sym_tag,
    STATE(102), 1,
      aux_sym_feature_repeat2,
    STATE(58), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat4,
  [2038] = 6,
    ACTIONS(98), 1,
      aux_sym__var_token1,
    ACTIONS(100), 1,
      aux_sym__var_token3,
    ACTIONS(102), 1,
      aux_sym__var_token5,
    ACTIONS(289), 1,
      aux_sym__literal_token1,
    STATE(5), 1,
      sym_action,
    STATE(14), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2059] = 3,
    ACTIONS(293), 1,
      aux_sym_description_token1,
    STATE(79), 1,
      aux_sym_description_repeat1,
    ACTIONS(291), 6,
      anon_sym_Rule_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [2074] = 3,
    ACTIONS(297), 1,
      aux_sym_description_token1,
    STATE(79), 1,
      aux_sym_description_repeat1,
    ACTIONS(295), 6,
      anon_sym_Rule_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [2089] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
  [2100] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
  [2111] = 6,
    ACTIONS(98), 1,
      aux_sym__var_token1,
    ACTIONS(100), 1,
      aux_sym__var_token3,
    ACTIONS(102), 1,
      aux_sym__var_token5,
    ACTIONS(289), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(14), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2132] = 6,
    ACTIONS(98), 1,
      aux_sym__var_token1,
    ACTIONS(100), 1,
      aux_sym__var_token3,
    ACTIONS(102), 1,
      aux_sym__var_token5,
    ACTIONS(289), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(14), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2153] = 6,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(7), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2174] = 6,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(6), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2195] = 6,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2216] = 6,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2237] = 6,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(5), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2258] = 6,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    ACTIONS(306), 1,
      aux_sym__literal_token1,
    STATE(6), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2279] = 6,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    ACTIONS(306), 1,
      aux_sym__literal_token1,
    STATE(7), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2300] = 6,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    ACTIONS(306), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2321] = 6,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    ACTIONS(306), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2342] = 6,
    ACTIONS(149), 1,
      aux_sym__var_token1,
    ACTIONS(151), 1,
      aux_sym__var_token3,
    ACTIONS(153), 1,
      aux_sym__var_token5,
    ACTIONS(306), 1,
      aux_sym__literal_token1,
    STATE(5), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2363] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(308), 1,
      anon_sym_Feature_COLON,
    ACTIONS(310), 1,
      sym_tag,
    STATE(114), 1,
      aux_sym_feature_repeat2,
    STATE(141), 1,
      sym_comment,
    STATE(101), 2,
      sym__comment,
      aux_sym_feature_repeat1,
  [2383] = 3,
    ACTIONS(314), 1,
      sym_tag,
    STATE(95), 1,
      aux_sym_feature_repeat2,
    ACTIONS(312), 5,
      anon_sym_Feature_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
  [2397] = 3,
    ACTIONS(317), 1,
      aux_sym_description_token1,
    STATE(96), 1,
      aux_sym_description_repeat1,
    ACTIONS(320), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [2411] = 3,
    ACTIONS(322), 1,
      aux_sym_description_token1,
    STATE(96), 1,
      aux_sym_description_repeat1,
    ACTIONS(324), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [2425] = 4,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(51), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
  [2441] = 4,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(48), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
  [2457] = 6,
    ACTIONS(326), 1,
      anon_sym_Background_COLON,
    ACTIONS(328), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(330), 1,
      anon_sym_Example_COLON,
    ACTIONS(332), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(334), 1,
      sym_tag,
    STATE(95), 1,
      aux_sym_feature_repeat2,
  [2476] = 4,
    ACTIONS(338), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_Feature_COLON,
      sym_tag,
    STATE(101), 2,
      sym__comment,
      aux_sym_feature_repeat1,
  [2491] = 5,
    ACTIONS(328), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(330), 1,
      anon_sym_Example_COLON,
    ACTIONS(332), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(334), 1,
      sym_tag,
    STATE(95), 1,
      aux_sym_feature_repeat2,
  [2507] = 3,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2518] = 3,
    ACTIONS(341), 1,
      aux_sym__comment_token1,
    ACTIONS(343), 1,
      aux_sym__literal_token1,
    STATE(104), 2,
      sym__literal,
      aux_sym_comment_repeat1,
  [2529] = 3,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 1,
      anon_sym_Rule_COLON,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2540] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      sym_table,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [2551] = 3,
    ACTIONS(351), 1,
      aux_sym__comment_token1,
    ACTIONS(353), 1,
      aux_sym__literal_token1,
    STATE(104), 2,
      sym__literal,
      aux_sym_comment_repeat1,
  [2562] = 4,
    ACTIONS(355), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(357), 1,
      aux_sym_text_body_token1,
    STATE(118), 1,
      aux_sym_text_body_repeat1,
    STATE(145), 1,
      sym_text_body,
  [2575] = 3,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(81), 1,
      sym_table,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [2586] = 3,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2597] = 3,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2608] = 3,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2619] = 3,
    ACTIONS(68), 1,
      anon_sym_Rule_COLON,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_rule,
      aux_sym_feature_repeat3,
  [2630] = 3,
    ACTIONS(334), 1,
      sym_tag,
    ACTIONS(359), 1,
      anon_sym_Feature_COLON,
    STATE(95), 1,
      aux_sym_feature_repeat2,
  [2640] = 2,
    ACTIONS(361), 1,
      aux_sym__literal_token1,
    STATE(107), 2,
      sym__literal,
      aux_sym_comment_repeat1,
  [2648] = 3,
    ACTIONS(363), 1,
      aux_sym__comment_token1,
    ACTIONS(365), 1,
      sym_table_element,
    STATE(116), 1,
      aux_sym_table_row_repeat1,
  [2658] = 3,
    ACTIONS(368), 1,
      aux_sym__comment_token1,
    ACTIONS(370), 1,
      sym_table_element,
    STATE(120), 1,
      aux_sym_table_row_repeat1,
  [2668] = 3,
    ACTIONS(372), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(374), 1,
      aux_sym_text_body_token1,
    STATE(121), 1,
      aux_sym_text_body_repeat1,
  [2678] = 1,
    ACTIONS(376), 3,
      anon_sym_Feature_COLON,
      sym_tag,
      anon_sym_POUND,
  [2684] = 3,
    ACTIONS(370), 1,
      sym_table_element,
    ACTIONS(378), 1,
      aux_sym__comment_token1,
    STATE(116), 1,
      aux_sym_table_row_repeat1,
  [2694] = 3,
    ACTIONS(380), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(382), 1,
      aux_sym_text_body_token1,
    STATE(121), 1,
      aux_sym_text_body_repeat1,
  [2704] = 3,
    ACTIONS(308), 1,
      anon_sym_Feature_COLON,
    ACTIONS(334), 1,
      sym_tag,
    STATE(95), 1,
      aux_sym_feature_repeat2,
  [2714] = 1,
    ACTIONS(385), 2,
      aux_sym__var_token2,
      aux_sym__var_token5,
  [2719] = 1,
    ACTIONS(363), 2,
      aux_sym__comment_token1,
      sym_table_element,
  [2724] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(174), 1,
      sym_var,
  [2731] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(146), 1,
      sym_var,
  [2738] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(149), 1,
      sym_var,
  [2745] = 2,
    ACTIONS(389), 1,
      aux_sym__literal_token1,
    STATE(147), 1,
      sym_var,
  [2752] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(166), 1,
      sym_var,
  [2759] = 2,
    ACTIONS(389), 1,
      aux_sym__literal_token1,
    STATE(167), 1,
      sym_var,
  [2766] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(168), 1,
      sym_var,
  [2773] = 2,
    ACTIONS(387), 1,
      aux_sym__literal_token1,
    STATE(172), 1,
      sym_var,
  [2780] = 2,
    ACTIONS(389), 1,
      aux_sym__literal_token1,
    STATE(173), 1,
      sym_var,
  [2787] = 1,
    ACTIONS(391), 1,
      sym_name,
  [2791] = 1,
    ACTIONS(393), 1,
      anon_sym_SPACE,
  [2795] = 1,
    ACTIONS(395), 1,
      anon_sym_SPACE,
  [2799] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [2803] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [2807] = 1,
    ACTIONS(401), 1,
      anon_sym_PIPE,
  [2811] = 1,
    ACTIONS(403), 1,
      sym_name,
  [2815] = 1,
    ACTIONS(405), 1,
      aux_sym__comment_token1,
  [2819] = 1,
    ACTIONS(407), 1,
      sym_name,
  [2823] = 1,
    ACTIONS(409), 1,
      sym_name,
  [2827] = 1,
    ACTIONS(411), 1,
      sym_name,
  [2831] = 1,
    ACTIONS(413), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2835] = 1,
    ACTIONS(415), 1,
      aux_sym__var_token2,
  [2839] = 1,
    ACTIONS(415), 1,
      aux_sym__var_token4,
  [2843] = 1,
    ACTIONS(417), 1,
      anon_sym_SPACE,
  [2847] = 1,
    ACTIONS(415), 1,
      aux_sym__var_token5,
  [2851] = 1,
    ACTIONS(419), 1,
      anon_sym_SPACE,
  [2855] = 1,
    ACTIONS(421), 1,
      aux_sym_text_token1,
  [2859] = 1,
    ACTIONS(423), 1,
      sym_name,
  [2863] = 1,
    ACTIONS(425), 1,
      sym_name,
  [2867] = 1,
    ACTIONS(427), 1,
      sym_name,
  [2871] = 1,
    ACTIONS(385), 1,
      aux_sym__var_token4,
  [2875] = 1,
    ACTIONS(429), 1,
      sym_name,
  [2879] = 1,
    ACTIONS(431), 1,
      sym_name,
  [2883] = 1,
    ACTIONS(433), 1,
      sym_name,
  [2887] = 1,
    ACTIONS(435), 1,
      anon_sym_SPACE,
  [2891] = 1,
    ACTIONS(437), 1,
      anon_sym_SPACE,
  [2895] = 1,
    ACTIONS(439), 1,
      anon_sym_SPACE,
  [2899] = 1,
    ACTIONS(441), 1,
      sym_name,
  [2903] = 1,
    ACTIONS(443), 1,
      anon_sym_SPACE,
  [2907] = 1,
    ACTIONS(445), 1,
      anon_sym_SPACE,
  [2911] = 1,
    ACTIONS(447), 1,
      sym_name,
  [2915] = 1,
    ACTIONS(449), 1,
      aux_sym__var_token2,
  [2919] = 1,
    ACTIONS(449), 1,
      aux_sym__var_token4,
  [2923] = 1,
    ACTIONS(449), 1,
      aux_sym__var_token5,
  [2927] = 1,
    ACTIONS(451), 1,
      anon_sym_SPACE,
  [2931] = 1,
    ACTIONS(453), 1,
      anon_sym_SPACE,
  [2935] = 1,
    ACTIONS(455), 1,
      anon_sym_SPACE,
  [2939] = 1,
    ACTIONS(457), 1,
      aux_sym__var_token2,
  [2943] = 1,
    ACTIONS(457), 1,
      aux_sym__var_token4,
  [2947] = 1,
    ACTIONS(457), 1,
      aux_sym__var_token5,
  [2951] = 1,
    ACTIONS(459), 1,
      anon_sym_SPACE,
  [2955] = 1,
    ACTIONS(461), 1,
      anon_sym_SPACE,
  [2959] = 1,
    ACTIONS(463), 1,
      anon_sym_SPACE,
  [2963] = 1,
    ACTIONS(465), 1,
      anon_sym_SPACE,
  [2967] = 1,
    ACTIONS(467), 1,
      anon_sym_SPACE,
  [2971] = 1,
    ACTIONS(469), 1,
      anon_sym_SPACE,
  [2975] = 1,
    ACTIONS(471), 1,
      anon_sym_SPACE,
  [2979] = 1,
    ACTIONS(473), 1,
      anon_sym_SPACE,
  [2983] = 1,
    ACTIONS(475), 1,
      anon_sym_SPACE,
  [2987] = 1,
    ACTIONS(477), 1,
      anon_sym_SPACE,
  [2991] = 1,
    ACTIONS(479), 1,
      anon_sym_SPACE,
  [2995] = 1,
    ACTIONS(481), 1,
      anon_sym_SPACE,
  [2999] = 1,
    ACTIONS(483), 1,
      anon_sym_SPACE,
  [3003] = 1,
    ACTIONS(485), 1,
      sym_name,
  [3007] = 1,
    ACTIONS(487), 1,
      anon_sym_SPACE,
  [3011] = 1,
    ACTIONS(489), 1,
      anon_sym_SPACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 404,
  [SMALL_STATE(15)] = 436,
  [SMALL_STATE(16)] = 468,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 566,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 630,
  [SMALL_STATE(22)] = 665,
  [SMALL_STATE(23)] = 700,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 758,
  [SMALL_STATE(26)] = 781,
  [SMALL_STATE(27)] = 812,
  [SMALL_STATE(28)] = 843,
  [SMALL_STATE(29)] = 876,
  [SMALL_STATE(30)] = 911,
  [SMALL_STATE(31)] = 946,
  [SMALL_STATE(32)] = 979,
  [SMALL_STATE(33)] = 1016,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1083,
  [SMALL_STATE(37)] = 1118,
  [SMALL_STATE(38)] = 1137,
  [SMALL_STATE(39)] = 1170,
  [SMALL_STATE(40)] = 1186,
  [SMALL_STATE(41)] = 1202,
  [SMALL_STATE(42)] = 1218,
  [SMALL_STATE(43)] = 1246,
  [SMALL_STATE(44)] = 1262,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1294,
  [SMALL_STATE(47)] = 1310,
  [SMALL_STATE(48)] = 1328,
  [SMALL_STATE(49)] = 1351,
  [SMALL_STATE(50)] = 1380,
  [SMALL_STATE(51)] = 1409,
  [SMALL_STATE(52)] = 1432,
  [SMALL_STATE(53)] = 1455,
  [SMALL_STATE(54)] = 1484,
  [SMALL_STATE(55)] = 1513,
  [SMALL_STATE(56)] = 1533,
  [SMALL_STATE(57)] = 1557,
  [SMALL_STATE(58)] = 1581,
  [SMALL_STATE(59)] = 1607,
  [SMALL_STATE(60)] = 1631,
  [SMALL_STATE(61)] = 1659,
  [SMALL_STATE(62)] = 1679,
  [SMALL_STATE(63)] = 1699,
  [SMALL_STATE(64)] = 1725,
  [SMALL_STATE(65)] = 1749,
  [SMALL_STATE(66)] = 1773,
  [SMALL_STATE(67)] = 1797,
  [SMALL_STATE(68)] = 1817,
  [SMALL_STATE(69)] = 1843,
  [SMALL_STATE(70)] = 1869,
  [SMALL_STATE(71)] = 1894,
  [SMALL_STATE(72)] = 1919,
  [SMALL_STATE(73)] = 1944,
  [SMALL_STATE(74)] = 1969,
  [SMALL_STATE(75)] = 1994,
  [SMALL_STATE(76)] = 2016,
  [SMALL_STATE(77)] = 2038,
  [SMALL_STATE(78)] = 2059,
  [SMALL_STATE(79)] = 2074,
  [SMALL_STATE(80)] = 2089,
  [SMALL_STATE(81)] = 2100,
  [SMALL_STATE(82)] = 2111,
  [SMALL_STATE(83)] = 2132,
  [SMALL_STATE(84)] = 2153,
  [SMALL_STATE(85)] = 2174,
  [SMALL_STATE(86)] = 2195,
  [SMALL_STATE(87)] = 2216,
  [SMALL_STATE(88)] = 2237,
  [SMALL_STATE(89)] = 2258,
  [SMALL_STATE(90)] = 2279,
  [SMALL_STATE(91)] = 2300,
  [SMALL_STATE(92)] = 2321,
  [SMALL_STATE(93)] = 2342,
  [SMALL_STATE(94)] = 2363,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2397,
  [SMALL_STATE(97)] = 2411,
  [SMALL_STATE(98)] = 2425,
  [SMALL_STATE(99)] = 2441,
  [SMALL_STATE(100)] = 2457,
  [SMALL_STATE(101)] = 2476,
  [SMALL_STATE(102)] = 2491,
  [SMALL_STATE(103)] = 2507,
  [SMALL_STATE(104)] = 2518,
  [SMALL_STATE(105)] = 2529,
  [SMALL_STATE(106)] = 2540,
  [SMALL_STATE(107)] = 2551,
  [SMALL_STATE(108)] = 2562,
  [SMALL_STATE(109)] = 2575,
  [SMALL_STATE(110)] = 2586,
  [SMALL_STATE(111)] = 2597,
  [SMALL_STATE(112)] = 2608,
  [SMALL_STATE(113)] = 2619,
  [SMALL_STATE(114)] = 2630,
  [SMALL_STATE(115)] = 2640,
  [SMALL_STATE(116)] = 2648,
  [SMALL_STATE(117)] = 2658,
  [SMALL_STATE(118)] = 2668,
  [SMALL_STATE(119)] = 2678,
  [SMALL_STATE(120)] = 2684,
  [SMALL_STATE(121)] = 2694,
  [SMALL_STATE(122)] = 2704,
  [SMALL_STATE(123)] = 2714,
  [SMALL_STATE(124)] = 2719,
  [SMALL_STATE(125)] = 2724,
  [SMALL_STATE(126)] = 2731,
  [SMALL_STATE(127)] = 2738,
  [SMALL_STATE(128)] = 2745,
  [SMALL_STATE(129)] = 2752,
  [SMALL_STATE(130)] = 2759,
  [SMALL_STATE(131)] = 2766,
  [SMALL_STATE(132)] = 2773,
  [SMALL_STATE(133)] = 2780,
  [SMALL_STATE(134)] = 2787,
  [SMALL_STATE(135)] = 2791,
  [SMALL_STATE(136)] = 2795,
  [SMALL_STATE(137)] = 2799,
  [SMALL_STATE(138)] = 2803,
  [SMALL_STATE(139)] = 2807,
  [SMALL_STATE(140)] = 2811,
  [SMALL_STATE(141)] = 2815,
  [SMALL_STATE(142)] = 2819,
  [SMALL_STATE(143)] = 2823,
  [SMALL_STATE(144)] = 2827,
  [SMALL_STATE(145)] = 2831,
  [SMALL_STATE(146)] = 2835,
  [SMALL_STATE(147)] = 2839,
  [SMALL_STATE(148)] = 2843,
  [SMALL_STATE(149)] = 2847,
  [SMALL_STATE(150)] = 2851,
  [SMALL_STATE(151)] = 2855,
  [SMALL_STATE(152)] = 2859,
  [SMALL_STATE(153)] = 2863,
  [SMALL_STATE(154)] = 2867,
  [SMALL_STATE(155)] = 2871,
  [SMALL_STATE(156)] = 2875,
  [SMALL_STATE(157)] = 2879,
  [SMALL_STATE(158)] = 2883,
  [SMALL_STATE(159)] = 2887,
  [SMALL_STATE(160)] = 2891,
  [SMALL_STATE(161)] = 2895,
  [SMALL_STATE(162)] = 2899,
  [SMALL_STATE(163)] = 2903,
  [SMALL_STATE(164)] = 2907,
  [SMALL_STATE(165)] = 2911,
  [SMALL_STATE(166)] = 2915,
  [SMALL_STATE(167)] = 2919,
  [SMALL_STATE(168)] = 2923,
  [SMALL_STATE(169)] = 2927,
  [SMALL_STATE(170)] = 2931,
  [SMALL_STATE(171)] = 2935,
  [SMALL_STATE(172)] = 2939,
  [SMALL_STATE(173)] = 2943,
  [SMALL_STATE(174)] = 2947,
  [SMALL_STATE(175)] = 2951,
  [SMALL_STATE(176)] = 2955,
  [SMALL_STATE(177)] = 2959,
  [SMALL_STATE(178)] = 2963,
  [SMALL_STATE(179)] = 2967,
  [SMALL_STATE(180)] = 2971,
  [SMALL_STATE(181)] = 2975,
  [SMALL_STATE(182)] = 2979,
  [SMALL_STATE(183)] = 2983,
  [SMALL_STATE(184)] = 2987,
  [SMALL_STATE(185)] = 2991,
  [SMALL_STATE(186)] = 2995,
  [SMALL_STATE(187)] = 2999,
  [SMALL_STATE(188)] = 3003,
  [SMALL_STATE(189)] = 3007,
  [SMALL_STATE(190)] = 3011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_but, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 6, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_but, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 4, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 5, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 7, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat4, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat4, 2, 0, 0), SHIFT_REPEAT(182),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat4, 2, 0, 0), SHIFT_REPEAT(183),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat4, 2, 0, 0), SHIFT_REPEAT(187),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat4, 2, 0, 0), SHIFT_REPEAT(102),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 8, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 7, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat2, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat2, 2, 0, 0), SHIFT_REPEAT(95),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0), SHIFT_REPEAT(180),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gherkin(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
