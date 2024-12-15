/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "gherkin",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => $.feature,

    feature: ($) =>
      seq(
        repeat($.tag),
        "Feature:",
        " ",
        $.name,
        optional($.description),
        optional($.background),
        choice(
          repeat1($.rule),
          repeat1(choice($.example, $.scenario, $.scenario_outline)),
        ),
      ),

    rule: ($) =>
      seq(
        "Rule:",
        " ",
        $.name,
        optional($.description),
        optional($.background),
        repeat1(choice($.example, $.scenario, $.scenario_outline)),
      ),

    background: ($) =>
      seq(
        repeat($.tag),
        "Background:",
        " ",
        $.name,
        repeat1(choice($.given, $.and, $.but)),
      ),

    scenario: ($) =>
      seq(
        repeat($.tag),
        "Scenario:",
        " ",
        $.name,
        optional($.description),
        repeat1(choice($.given, $.when, $.then, $.and, $.but)),
      ),

    example: ($) =>
      seq(
        repeat($.tag),
        "Example:",
        " ",
        $.name,
        repeat1(choice($.given, $.when, $.then, $.and, $.but)),
      ),

    scenario_outline: ($) =>
      seq(
        repeat($.tag),
        "Scenario Outline:",
        " ",
        $.name,
        optional($.description),
        repeat1(choice($.given, $.when, $.then, $.and, $.but)),
        repeat1(choice($.examples, $.scenarios)),
      ),

    examples: ($) => seq("Examples:", " ", $.name, $.table),

    scenarios: ($) => seq("Scenarios:", " ", $.name, $.table),

    tag: ($) => /@[A-z]+/,

    name: ($) => /([A-z\-_,\.\']| )+/,

    action: ($) => repeat1(choice($._literal, $._var)),

    comment: (_) => token(seq("#", /.*/)),

    _literal: ($) => /[A-z\-_,\.\']+/,

    _var: ($) =>
      choice(
        seq(/</, $.var, />/),
        seq(/"</, $.var, />"/),
        seq(/"/, $.var, /"/),
      ),

    var: ($) => /[A-z\-_,\.\']+/,

    description: ($) => repeat1(/([A-z,\.\'\-_"]+)/),

    step: ($) => choice($.given, $.when, $.then, $.and, $.but),

    given: ($) =>
      seq("Given", " ", $.action, optional(choice($.text, $.table))),

    when: ($) => seq("When", " ", $.action, optional(choice($.text, $.table))),

    then: ($) => seq("Then", " ", $.action, optional(choice($.text, $.table))),

    and: ($) => seq("And", " ", $.action, optional(choice($.text, $.table))),

    but: ($) => seq("But", " ", $.action, optional(choice($.text, $.table))),

    text: ($) => seq('"""', /[\n|\r]?/, optional($.text_body), '"""'),

    text_body: ($) => repeat1(/.|\n|\r/),

    table: ($) => repeat1($.table_row),

    table_row: ($) =>
      seq("|", optional(repeat1(seq($.table_element, "|"))), /\n|\r/),

    table_element: ($) => /([A-z \.\']+)/,
  },
});
