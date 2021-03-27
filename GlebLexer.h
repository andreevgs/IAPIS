/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/Gleb/GlebLexer.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"


/* lexer postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


namespace antlrcpptest {


class  GlebLexer : public antlr4::Lexer {
public:
  enum {
    Tim = 1, Return = 2, Continue = 3, Integer = 4, Float = 5, And = 6, 
    For = 7, IF = 8, Then = 9, Else = 10, INT = 11, Digit = 12, FLT = 13, 
    CompareOperator = 14, LessThan = 15, LessOrEqual = 16, GreaterThan = 17, 
    GreaterOrEqual = 18, Equal = 19, NotEqual = 20, Assign = 21, Colon = 22, 
    Newline = 23, Plus = 24, PlusAss = 25, Minus = 26, MinusAss = 27, Star = 28, 
    StarAss = 29, Devide = 30, DevideAss = 31, OpenPar = 32, ClosePar = 33, 
    FigureOpen = 34, FigureClose = 35, QuestionMark = 36, Comma = 37, Ant = 38, 
    Pow = 39, PowAss = 40, Sqrt = 41, SqrtAss = 42, Foo = 43, Bar = 44, 
    ID = 45, Comment = 46, WS = 47
  };

  enum {
    CommentsChannel = 2, DirectiveChannel = 3
  };

  explicit GlebLexer(antlr4::CharStream *input);
  ~GlebLexer();

  /* public lexer declarations section */
  bool canTestFoo() { return true; }
  bool isItFoo() { return true; }
  bool isItBar() { return true; }

  void myFooLexerAction() { /* do something*/ };
  void myBarLexerAction() { /* do something*/ };

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

  virtual void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;
  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.
  void FooAction(antlr4::RuleContext *context, size_t actionIndex);
  void BarAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool FooSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
  bool BarSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
