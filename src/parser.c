#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 176
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_comment = 12,
  aux_sym__literal_token1 = 13,
  aux_sym__var_token1 = 14,
  aux_sym__var_token2 = 15,
  aux_sym__var_token3 = 16,
  aux_sym__var_token4 = 17,
  aux_sym__var_token5 = 18,
  aux_sym_description_token1 = 19,
  anon_sym_Given = 20,
  anon_sym_When = 21,
  anon_sym_Then = 22,
  anon_sym_And = 23,
  anon_sym_But = 24,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 25,
  aux_sym_text_token1 = 26,
  aux_sym_text_body_token1 = 27,
  anon_sym_PIPE = 28,
  aux_sym_table_row_token1 = 29,
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
  sym__literal = 41,
  sym__var = 42,
  sym_var = 43,
  sym_description = 44,
  sym_given = 45,
  sym_when = 46,
  sym_then = 47,
  sym_and = 48,
  sym_but = 49,
  sym_text = 50,
  sym_text_body = 51,
  sym_table = 52,
  sym_table_row = 53,
  aux_sym_feature_repeat1 = 54,
  aux_sym_feature_repeat2 = 55,
  aux_sym_feature_repeat3 = 56,
  aux_sym_background_repeat1 = 57,
  aux_sym_scenario_repeat1 = 58,
  aux_sym_scenario_outline_repeat1 = 59,
  aux_sym_action_repeat1 = 60,
  aux_sym_description_repeat1 = 61,
  aux_sym_text_body_repeat1 = 62,
  aux_sym_table_repeat1 = 63,
  aux_sym_table_row_repeat1 = 64,
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
  [sym_comment] = "comment",
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
  [aux_sym_table_row_token1] = "table_row_token1",
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
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_repeat1] = "scenario_repeat1",
  [aux_sym_scenario_outline_repeat1] = "scenario_outline_repeat1",
  [aux_sym_action_repeat1] = "action_repeat1",
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
  [sym_comment] = sym_comment,
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
  [aux_sym_table_row_token1] = aux_sym_table_row_token1,
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
  [aux_sym_background_repeat1] = aux_sym_background_repeat1,
  [aux_sym_scenario_repeat1] = aux_sym_scenario_repeat1,
  [aux_sym_scenario_outline_repeat1] = aux_sym_scenario_outline_repeat1,
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [aux_sym_table_row_token1] = {
    .visible = false,
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
  [12] = 3,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 2,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 2,
  [24] = 24,
  [25] = 25,
  [26] = 3,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 10,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 10,
  [45] = 9,
  [46] = 46,
  [47] = 47,
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
  [77] = 73,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 74,
  [86] = 76,
  [87] = 73,
  [88] = 78,
  [89] = 84,
  [90] = 90,
  [91] = 91,
  [92] = 75,
  [93] = 93,
  [94] = 82,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 111,
  [118] = 116,
  [119] = 112,
  [120] = 111,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 115,
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
  [151] = 137,
  [152] = 138,
  [153] = 144,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 137,
  [158] = 138,
  [159] = 144,
  [160] = 160,
  [161] = 161,
  [162] = 131,
  [163] = 135,
  [164] = 154,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 160,
  [170] = 161,
  [171] = 131,
  [172] = 160,
  [173] = 173,
  [174] = 161,
  [175] = 175,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '"', 161,
        '#', 72,
        '<', 156,
        '>', 157,
        '@', 57,
        'A', 123,
        'B', 83,
        'E', 152,
        'F', 100,
        'G', 111,
        'R', 148,
        'S', 91,
        'T', 109,
        'W', 110,
        '|', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(224);
      if (('\t' <= lookahead && lookahead <= '\f')) SKIP(2);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '#') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '#') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 161,
        '#', 72,
        '<', 156,
        '@', 57,
        'A', 123,
        'B', 147,
        'E', 153,
        'G', 111,
        'R', 148,
        'S', 92,
        '|', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 161,
        '#', 72,
        '<', 156,
        'A', 123,
        'B', 147,
        'E', 154,
        'G', 111,
        'S', 93,
        'T', 109,
        'W', 110,
        '|', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(217);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '"', 160,
        '#', 72,
        '>', 157,
        '@', 57,
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
      if (lookahead == '"') ADVANCE(159);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '<') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '@') ADVANCE(57);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(201);
      if (lookahead == 'S') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == 'A') ADVANCE(193);
      if (lookahead == 'B') ADVANCE(202);
      if (lookahead == 'G') ADVANCE(183);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == 'W') ADVANCE(182);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(66);
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
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(16);
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
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      ADVANCE_MAP(
        '"', 161,
        '#', 72,
        '<', 156,
        '>', 9,
        '@', 57,
        'A', 123,
        'B', 147,
        'E', 153,
        'G', 111,
        'R', 148,
        'S', 92,
        'T', 109,
        'W', 110,
        '|', 223,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(58);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('C' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Feature_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Rule_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Background_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Scenario_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Example_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ScenarioOutline_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Examples_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Scenarios_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(115);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'g') ADVANCE(138);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'h') ADVANCE(103);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'k') ADVANCE(108);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(116);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'v') ADVANCE(104);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(82);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(88);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == 'x') ADVANCE(89);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__literal_token1);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__var_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__var_token2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__var_token3);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__var_token4);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__var_token5);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__var_token5);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '<') ADVANCE(158);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__var_token5);
      if (lookahead == '<') ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(177);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(178);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'k') ADVANCE(180);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_Given);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_Given);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_When);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_When);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_Then);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_Then);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_And);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_And);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_But);
      if (lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_But);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          (',' <= lookahead && lookahead <= '.') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '|') ADVANCE(218);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '"') ADVANCE(7);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_text_body_token1);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '#') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_table_row_token1);
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_table_element);
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(224);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_table_element);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
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
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 10},
  [86] = {.lex_state = 10},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 10},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 58},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 58},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 219},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 58},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
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
    [sym_source_file] = STATE(173),
    [sym_feature] = STATE(175),
    [aux_sym_feature_repeat1] = STATE(110),
    [anon_sym_Feature_COLON] = ACTIONS(5),
    [sym_tag] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
  [38] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
  [76] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(38), 2,
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
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(41), 2,
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
  [142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(40), 2,
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
  [175] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(22), 2,
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
  [208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    STATE(37), 2,
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
  [241] = 8,
    ACTIONS(3), 1,
      sym_comment,
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
  [276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 7,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(68), 10,
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
  [301] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    ACTIONS(72), 6,
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
  [336] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__literal_token1,
    ACTIONS(86), 1,
      aux_sym__var_token1,
    ACTIONS(88), 1,
      aux_sym__var_token3,
    ACTIONS(90), 1,
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
  [371] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    ACTIONS(104), 1,
      aux_sym_description_token1,
    STATE(36), 1,
      sym_description,
    STATE(48), 1,
      sym_background,
    STATE(75), 1,
      aux_sym_description_repeat1,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(101), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(70), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [418] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    ACTIONS(106), 6,
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
  [453] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    ACTIONS(108), 6,
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
  [488] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
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
  [523] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    ACTIONS(112), 6,
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
  [558] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    ACTIONS(104), 1,
      aux_sym_description_token1,
    STATE(31), 1,
      sym_description,
    STATE(50), 1,
      sym_background,
    STATE(75), 1,
      aux_sym_description_repeat1,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(97), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(67), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      aux_sym__literal_token1,
    ACTIONS(117), 1,
      aux_sym__var_token1,
    ACTIONS(120), 1,
      aux_sym__var_token3,
    ACTIONS(123), 1,
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
  [640] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(63), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(45), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [678] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(65), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(45), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [716] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(25), 2,
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
  [742] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym__literal_token1,
    ACTIONS(145), 1,
      aux_sym__var_token1,
    ACTIONS(148), 1,
      aux_sym__var_token3,
    ACTIONS(151), 1,
      aux_sym__var_token5,
    STATE(23), 3,
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
  [776] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(57), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    STATE(45), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    STATE(25), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(154), 13,
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
  [840] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym__literal_token1,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    STATE(23), 3,
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
  [874] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(55), 1,
      sym_description,
    STATE(92), 1,
      aux_sym_description_repeat1,
    STATE(15), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [910] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(92), 1,
      aux_sym_description_repeat1,
    STATE(24), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [946] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(92), 1,
      aux_sym_description_repeat1,
    STATE(11), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [982] = 10,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(56), 1,
      sym_description,
    STATE(92), 1,
      aux_sym_description_repeat1,
    STATE(21), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1018] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    STATE(48), 1,
      sym_background,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(101), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(70), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_And,
      anon_sym_But,
    ACTIONS(68), 9,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
      aux_sym__var_token1,
      aux_sym__var_token3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1098] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    ACTIONS(104), 1,
      aux_sym_description_token1,
    STATE(52), 1,
      sym_description,
    STATE(71), 1,
      sym_background,
    STATE(75), 1,
      aux_sym_description_repeat1,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(53), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1158] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    STATE(49), 1,
      sym_background,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(104), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1196] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [1253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 13,
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
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 13,
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
  [1291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 13,
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
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 13,
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
  [1329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 6,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      aux_sym__var_token1,
      aux_sym__var_token3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_PIPE,
    ACTIONS(70), 7,
      aux_sym__literal_token1,
      aux_sym__var_token5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [1350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_Given,
    ACTIONS(210), 1,
      anon_sym_When,
    ACTIONS(213), 1,
      anon_sym_Then,
    ACTIONS(216), 1,
      anon_sym_And,
    ACTIONS(219), 1,
      anon_sym_But,
    ACTIONS(51), 2,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
    STATE(45), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1381] = 6,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(222), 5,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1407] = 6,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(230), 5,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1433] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(104), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(68), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1465] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(103), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(69), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1497] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(101), 2,
      sym_rule,
      aux_sym_feature_repeat2,
    STATE(70), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1529] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_Given,
    ACTIONS(239), 1,
      anon_sym_And,
    ACTIONS(242), 1,
      anon_sym_But,
    STATE(51), 4,
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
  [1555] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_Background_COLON,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(102), 1,
      sym_tag,
    STATE(72), 1,
      sym_background,
    STATE(95), 1,
      aux_sym_feature_repeat1,
    STATE(61), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1586] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    STATE(11), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1671] = 7,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(24), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(58), 3,
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
  [1721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_Examples_COLON,
    ACTIONS(256), 1,
      anon_sym_Scenarios_COLON,
    STATE(58), 3,
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
  [1744] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(264), 1,
      anon_sym_Example_COLON,
    ACTIONS(267), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(270), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1773] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    STATE(16), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1800] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1829] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    STATE(14), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1856] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(58), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1879] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_Given,
    ACTIONS(76), 1,
      anon_sym_When,
    ACTIONS(78), 1,
      anon_sym_Then,
    ACTIONS(80), 1,
      anon_sym_And,
    ACTIONS(82), 1,
      anon_sym_But,
    STATE(17), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1906] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_Examples_COLON,
    ACTIONS(128), 1,
      anon_sym_Scenarios_COLON,
    STATE(58), 3,
      sym_examples,
      sym_scenarios,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [1929] = 7,
    ACTIONS(3), 1,
      sym_comment,
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
    STATE(20), 6,
      sym_given,
      sym_when,
      sym_then,
      sym_and,
      sym_but,
      aux_sym_scenario_repeat1,
  [1956] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [1984] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [2012] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [2040] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(59), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [2068] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(61), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [2093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(98), 1,
      anon_sym_Example_COLON,
    ACTIONS(100), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(232), 1,
      sym_tag,
    STATE(96), 1,
      aux_sym_feature_repeat1,
    STATE(54), 4,
      sym_scenario,
      sym_example,
      sym_scenario_outline,
      aux_sym_feature_repeat3,
  [2118] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(287), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2142] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(287), 1,
      aux_sym__literal_token1,
    STATE(5), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2166] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      aux_sym_description_token1,
    STATE(82), 1,
      aux_sym_description_repeat1,
    ACTIONS(289), 6,
      anon_sym_Rule_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [2184] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym__var_token1,
    ACTIONS(88), 1,
      aux_sym__var_token3,
    ACTIONS(90), 1,
      aux_sym__var_token5,
    ACTIONS(293), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(12), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym__var_token1,
    ACTIONS(88), 1,
      aux_sym__var_token3,
    ACTIONS(90), 1,
      aux_sym__var_token5,
    ACTIONS(293), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(12), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2232] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym__var_token1,
    ACTIONS(88), 1,
      aux_sym__var_token3,
    ACTIONS(90), 1,
      aux_sym__var_token5,
    ACTIONS(293), 1,
      aux_sym__literal_token1,
    STATE(7), 1,
      sym_action,
    STATE(12), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
  [2270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_Rule_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      anon_sym_Examples_COLON,
      anon_sym_Scenarios_COLON,
      sym_tag,
  [2284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(287), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      aux_sym_description_token1,
    STATE(82), 1,
      aux_sym_description_repeat1,
    ACTIONS(299), 6,
      anon_sym_Rule_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
      sym_tag,
  [2326] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(287), 1,
      aux_sym__literal_token1,
    STATE(7), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2350] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(6), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2374] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(5), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2398] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(8), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2422] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(4), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2446] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__var_token1,
    ACTIONS(163), 1,
      aux_sym__var_token3,
    ACTIONS(165), 1,
      aux_sym__var_token5,
    ACTIONS(304), 1,
      aux_sym__literal_token1,
    STATE(7), 1,
      sym_action,
    STATE(26), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2470] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym__var_token1,
    ACTIONS(31), 1,
      aux_sym__var_token3,
    ACTIONS(33), 1,
      aux_sym__var_token5,
    ACTIONS(287), 1,
      aux_sym__literal_token1,
    STATE(6), 1,
      sym_action,
    STATE(3), 3,
      sym__literal,
      sym__var,
      aux_sym_action_repeat1,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_tag,
    STATE(90), 1,
      aux_sym_feature_repeat1,
    ACTIONS(306), 5,
      anon_sym_Feature_COLON,
      anon_sym_Background_COLON,
      anon_sym_Scenario_COLON,
      anon_sym_Example_COLON,
      anon_sym_ScenarioOutline_COLON,
  [2511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(46), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
  [2530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      aux_sym_description_token1,
    STATE(94), 1,
      aux_sym_description_repeat1,
    ACTIONS(313), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [2547] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_Given,
    ACTIONS(226), 1,
      anon_sym_And,
    ACTIONS(228), 1,
      anon_sym_But,
    STATE(47), 4,
      sym_given,
      sym_and,
      sym_but,
      aux_sym_background_repeat1,
  [2566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      aux_sym_description_token1,
    STATE(94), 1,
      aux_sym_description_repeat1,
    ACTIONS(318), 5,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
  [2583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_Background_COLON,
    ACTIONS(322), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(324), 1,
      anon_sym_Example_COLON,
    ACTIONS(326), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(328), 1,
      sym_tag,
    STATE(90), 1,
      aux_sym_feature_repeat1,
  [2605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_Scenario_COLON,
    ACTIONS(324), 1,
      anon_sym_Example_COLON,
    ACTIONS(326), 1,
      anon_sym_ScenarioOutline_COLON,
    ACTIONS(328), 1,
      sym_tag,
    STATE(90), 1,
      aux_sym_feature_repeat1,
  [2624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_rule,
      aux_sym_feature_repeat2,
  [2638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      sym_table,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [2652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      sym_table,
    STATE(22), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [2666] = 5,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_text_body_token1,
    STATE(109), 1,
      aux_sym_text_body_repeat1,
    STATE(130), 1,
      sym_text_body,
  [2682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_rule,
      aux_sym_feature_repeat2,
  [2696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    ACTIONS(338), 1,
      anon_sym_Rule_COLON,
    STATE(102), 2,
      sym_rule,
      aux_sym_feature_repeat2,
  [2710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_rule,
      aux_sym_feature_repeat2,
  [2724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_Rule_COLON,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    STATE(102), 2,
      sym_rule,
      aux_sym_feature_repeat2,
  [2738] = 4,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(341), 1,
      aux_sym_table_row_token1,
    ACTIONS(343), 1,
      sym_table_element,
    STATE(106), 1,
      aux_sym_table_row_repeat1,
  [2751] = 4,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_table_element,
    ACTIONS(345), 1,
      aux_sym_table_row_token1,
    STATE(108), 1,
      aux_sym_table_row_repeat1,
  [2764] = 4,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_text_body_token1,
    STATE(107), 1,
      aux_sym_text_body_repeat1,
  [2777] = 4,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_table_row_token1,
    ACTIONS(354), 1,
      sym_table_element,
    STATE(108), 1,
      aux_sym_table_row_repeat1,
  [2790] = 4,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(359), 1,
      aux_sym_text_body_token1,
    STATE(107), 1,
      aux_sym_text_body_repeat1,
  [2803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_tag,
    ACTIONS(361), 1,
      anon_sym_Feature_COLON,
    STATE(90), 1,
      aux_sym_feature_repeat1,
  [2816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(137), 1,
      sym_var,
  [2826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(159), 1,
      sym_var,
  [2836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(144), 1,
      sym_var,
  [2846] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(352), 2,
      aux_sym_table_row_token1,
      sym_table_element,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 2,
      aux_sym__var_token2,
      aux_sym__var_token5,
  [2862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__literal_token1,
    STATE(138), 1,
      sym_var,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(151), 1,
      sym_var,
  [2882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__literal_token1,
    STATE(152), 1,
      sym_var,
  [2892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(153), 1,
      sym_var,
  [2902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      aux_sym__literal_token1,
    STATE(157), 1,
      sym_var,
  [2912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__literal_token1,
    STATE(158), 1,
      sym_var,
  [2922] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SPACE,
  [2929] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_name,
  [2936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
  [2943] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_name,
  [2950] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(377), 1,
      sym_name,
  [2957] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SPACE,
  [2964] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_SPACE,
  [2971] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SPACE,
  [2978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [2985] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SPACE,
  [2992] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_name,
  [2999] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SPACE,
  [3006] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_name,
  [3013] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SPACE,
  [3020] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_name,
  [3027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__var_token2,
  [3034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__var_token4,
  [3041] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SPACE,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym__var_token4,
  [3055] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_SPACE,
  [3062] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SPACE,
  [3069] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SPACE,
  [3076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      aux_sym__var_token5,
  [3083] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_SPACE,
  [3090] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_name,
  [3097] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_name,
  [3104] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_SPACE,
  [3111] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_text_token1,
  [3118] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_name,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym__var_token2,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym__var_token4,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      aux_sym__var_token5,
  [3146] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_SPACE,
  [3153] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_name,
  [3160] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_name,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym__var_token2,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym__var_token4,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym__var_token5,
  [3188] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_SPACE,
  [3195] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_SPACE,
  [3202] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SPACE,
  [3209] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_SPACE,
  [3216] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_SPACE,
  [3223] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_name,
  [3230] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_name,
  [3237] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_SPACE,
  [3244] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_SPACE,
  [3251] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_SPACE,
  [3258] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_SPACE,
  [3265] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SPACE,
  [3272] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SPACE,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
  [3286] = 2,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_SPACE,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 371,
  [SMALL_STATE(14)] = 418,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 488,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 605,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 678,
  [SMALL_STATE(22)] = 716,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 776,
  [SMALL_STATE(25)] = 814,
  [SMALL_STATE(26)] = 840,
  [SMALL_STATE(27)] = 874,
  [SMALL_STATE(28)] = 910,
  [SMALL_STATE(29)] = 946,
  [SMALL_STATE(30)] = 982,
  [SMALL_STATE(31)] = 1018,
  [SMALL_STATE(32)] = 1056,
  [SMALL_STATE(33)] = 1078,
  [SMALL_STATE(34)] = 1098,
  [SMALL_STATE(35)] = 1138,
  [SMALL_STATE(36)] = 1158,
  [SMALL_STATE(37)] = 1196,
  [SMALL_STATE(38)] = 1215,
  [SMALL_STATE(39)] = 1234,
  [SMALL_STATE(40)] = 1253,
  [SMALL_STATE(41)] = 1272,
  [SMALL_STATE(42)] = 1291,
  [SMALL_STATE(43)] = 1310,
  [SMALL_STATE(44)] = 1329,
  [SMALL_STATE(45)] = 1350,
  [SMALL_STATE(46)] = 1381,
  [SMALL_STATE(47)] = 1407,
  [SMALL_STATE(48)] = 1433,
  [SMALL_STATE(49)] = 1465,
  [SMALL_STATE(50)] = 1497,
  [SMALL_STATE(51)] = 1529,
  [SMALL_STATE(52)] = 1555,
  [SMALL_STATE(53)] = 1586,
  [SMALL_STATE(54)] = 1615,
  [SMALL_STATE(55)] = 1644,
  [SMALL_STATE(56)] = 1671,
  [SMALL_STATE(57)] = 1698,
  [SMALL_STATE(58)] = 1721,
  [SMALL_STATE(59)] = 1744,
  [SMALL_STATE(60)] = 1773,
  [SMALL_STATE(61)] = 1800,
  [SMALL_STATE(62)] = 1829,
  [SMALL_STATE(63)] = 1856,
  [SMALL_STATE(64)] = 1879,
  [SMALL_STATE(65)] = 1906,
  [SMALL_STATE(66)] = 1929,
  [SMALL_STATE(67)] = 1956,
  [SMALL_STATE(68)] = 1984,
  [SMALL_STATE(69)] = 2012,
  [SMALL_STATE(70)] = 2040,
  [SMALL_STATE(71)] = 2068,
  [SMALL_STATE(72)] = 2093,
  [SMALL_STATE(73)] = 2118,
  [SMALL_STATE(74)] = 2142,
  [SMALL_STATE(75)] = 2166,
  [SMALL_STATE(76)] = 2184,
  [SMALL_STATE(77)] = 2208,
  [SMALL_STATE(78)] = 2232,
  [SMALL_STATE(79)] = 2256,
  [SMALL_STATE(80)] = 2270,
  [SMALL_STATE(81)] = 2284,
  [SMALL_STATE(82)] = 2308,
  [SMALL_STATE(83)] = 2326,
  [SMALL_STATE(84)] = 2350,
  [SMALL_STATE(85)] = 2374,
  [SMALL_STATE(86)] = 2398,
  [SMALL_STATE(87)] = 2422,
  [SMALL_STATE(88)] = 2446,
  [SMALL_STATE(89)] = 2470,
  [SMALL_STATE(90)] = 2494,
  [SMALL_STATE(91)] = 2511,
  [SMALL_STATE(92)] = 2530,
  [SMALL_STATE(93)] = 2547,
  [SMALL_STATE(94)] = 2566,
  [SMALL_STATE(95)] = 2583,
  [SMALL_STATE(96)] = 2605,
  [SMALL_STATE(97)] = 2624,
  [SMALL_STATE(98)] = 2638,
  [SMALL_STATE(99)] = 2652,
  [SMALL_STATE(100)] = 2666,
  [SMALL_STATE(101)] = 2682,
  [SMALL_STATE(102)] = 2696,
  [SMALL_STATE(103)] = 2710,
  [SMALL_STATE(104)] = 2724,
  [SMALL_STATE(105)] = 2738,
  [SMALL_STATE(106)] = 2751,
  [SMALL_STATE(107)] = 2764,
  [SMALL_STATE(108)] = 2777,
  [SMALL_STATE(109)] = 2790,
  [SMALL_STATE(110)] = 2803,
  [SMALL_STATE(111)] = 2816,
  [SMALL_STATE(112)] = 2826,
  [SMALL_STATE(113)] = 2836,
  [SMALL_STATE(114)] = 2846,
  [SMALL_STATE(115)] = 2854,
  [SMALL_STATE(116)] = 2862,
  [SMALL_STATE(117)] = 2872,
  [SMALL_STATE(118)] = 2882,
  [SMALL_STATE(119)] = 2892,
  [SMALL_STATE(120)] = 2902,
  [SMALL_STATE(121)] = 2912,
  [SMALL_STATE(122)] = 2922,
  [SMALL_STATE(123)] = 2929,
  [SMALL_STATE(124)] = 2936,
  [SMALL_STATE(125)] = 2943,
  [SMALL_STATE(126)] = 2950,
  [SMALL_STATE(127)] = 2957,
  [SMALL_STATE(128)] = 2964,
  [SMALL_STATE(129)] = 2971,
  [SMALL_STATE(130)] = 2978,
  [SMALL_STATE(131)] = 2985,
  [SMALL_STATE(132)] = 2992,
  [SMALL_STATE(133)] = 2999,
  [SMALL_STATE(134)] = 3006,
  [SMALL_STATE(135)] = 3013,
  [SMALL_STATE(136)] = 3020,
  [SMALL_STATE(137)] = 3027,
  [SMALL_STATE(138)] = 3034,
  [SMALL_STATE(139)] = 3041,
  [SMALL_STATE(140)] = 3048,
  [SMALL_STATE(141)] = 3055,
  [SMALL_STATE(142)] = 3062,
  [SMALL_STATE(143)] = 3069,
  [SMALL_STATE(144)] = 3076,
  [SMALL_STATE(145)] = 3083,
  [SMALL_STATE(146)] = 3090,
  [SMALL_STATE(147)] = 3097,
  [SMALL_STATE(148)] = 3104,
  [SMALL_STATE(149)] = 3111,
  [SMALL_STATE(150)] = 3118,
  [SMALL_STATE(151)] = 3125,
  [SMALL_STATE(152)] = 3132,
  [SMALL_STATE(153)] = 3139,
  [SMALL_STATE(154)] = 3146,
  [SMALL_STATE(155)] = 3153,
  [SMALL_STATE(156)] = 3160,
  [SMALL_STATE(157)] = 3167,
  [SMALL_STATE(158)] = 3174,
  [SMALL_STATE(159)] = 3181,
  [SMALL_STATE(160)] = 3188,
  [SMALL_STATE(161)] = 3195,
  [SMALL_STATE(162)] = 3202,
  [SMALL_STATE(163)] = 3209,
  [SMALL_STATE(164)] = 3216,
  [SMALL_STATE(165)] = 3223,
  [SMALL_STATE(166)] = 3230,
  [SMALL_STATE(167)] = 3237,
  [SMALL_STATE(168)] = 3244,
  [SMALL_STATE(169)] = 3251,
  [SMALL_STATE(170)] = 3258,
  [SMALL_STATE(171)] = 3265,
  [SMALL_STATE(172)] = 3272,
  [SMALL_STATE(173)] = 3279,
  [SMALL_STATE(174)] = 3286,
  [SMALL_STATE(175)] = 3293,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_but, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__var, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__var, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_example, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 6, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_but, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 5, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0), SHIFT_REPEAT(142),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0), SHIFT_REPEAT(143),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0), SHIFT_REPEAT(145),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat3, 2, 0, 0), SHIFT_REPEAT(96),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 7, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 7, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2, 0, 0),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat2, 2, 0, 0),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat2, 2, 0, 0), SHIFT_REPEAT(139),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_body_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_body, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [457] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
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
