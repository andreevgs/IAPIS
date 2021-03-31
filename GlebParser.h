
// Generated from /home/Gleb/GlebParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


namespace antlrcpptest {


class  GlebParser : public antlr4::Parser {
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
    RuleMain = 0, RuleSummOperation = 1, RuleSumm = 2, RuleDiffOperation = 3, 
    RuleDiff = 4, RuleMultOperation = 5, RuleMult = 6, RuleDivOperation = 7, 
    RuleDiv = 8, RuleInPowOperation = 9, RuleInPow = 10, RuleInSqrt = 11, 
    RuleOperation = 12, RuleMath = 13, RuleCreate = 14, RuleAss = 15, RuleExpr = 16, 
    RuleForCycle = 17, RuleIfExpr = 18, RuleBlock = 19
  };

  explicit GlebParser(antlr4::TokenStream *input);
  ~GlebParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  /* public parser declarations/members section */
  bool myAction() { return true; }
  bool doesItBlend() { return true; }
  void cleanUp() {}
  void doInit() {}
  void doAfter() {}


  class MainContext;
  class SummOperationContext;
  class SummContext;
  class DiffOperationContext;
  class DiffContext;
  class MultOperationContext;
  class MultContext;
  class DivOperationContext;
  class DivContext;
  class InPowOperationContext;
  class InPowContext;
  class InSqrtContext;
  class OperationContext;
  class MathContext;
  class CreateContext;
  class AssContext;
  class ExprContext;
  class ForCycleContext;
  class IfExprContext;
  class BlockContext; 

  class  MainContext : public antlr4::ParserRuleContext {
  public:
    MainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MathContext *> math();
    MathContext* math(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MainContext* main();

  class  SummOperationContext : public antlr4::ParserRuleContext {
  public:
    SummOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Plus();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *PlusAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SummOperationContext* summOperation();

  class  SummContext : public antlr4::ParserRuleContext {
  public:
    SummContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *ClosePar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SummContext* summ();

  class  DiffOperationContext : public antlr4::ParserRuleContext {
  public:
    DiffOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Minus();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *MinusAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiffOperationContext* diffOperation();

  class  DiffContext : public antlr4::ParserRuleContext {
  public:
    DiffContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *Minus();
    antlr4::tree::TerminalNode *ClosePar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiffContext* diff();

  class  MultOperationContext : public antlr4::ParserRuleContext {
  public:
    MultOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Star();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *StarAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultOperationContext* multOperation();

  class  MultContext : public antlr4::ParserRuleContext {
  public:
    MultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *Star();
    antlr4::tree::TerminalNode *ClosePar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultContext* mult();

  class  DivOperationContext : public antlr4::ParserRuleContext {
  public:
    DivOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Devide();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *DevideAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivOperationContext* divOperation();

  class  DivContext : public antlr4::ParserRuleContext {
  public:
    DivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *Devide();
    antlr4::tree::TerminalNode *ClosePar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<DivContext *> div();
    DivContext* div(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DivContext* div();

  class  InPowOperationContext : public antlr4::ParserRuleContext {
  public:
    InPowOperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Pow();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    antlr4::tree::TerminalNode *PowAss();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InPowOperationContext* inPowOperation();

  class  InPowContext : public antlr4::ParserRuleContext {
  public:
    InPowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *Pow();
    antlr4::tree::TerminalNode *ClosePar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InPowContext* inPow();

  class  InSqrtContext : public antlr4::ParserRuleContext {
  public:
    InSqrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Sqrt();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();
    OperationContext *operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InSqrtContext* inSqrt();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SummContext *summ();
    DiffContext *diff();
    MultContext *mult();
    DivContext *div();
    InPowContext *inPow();
    InSqrtContext *inSqrt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperationContext* operation();

  class  MathContext : public antlr4::ParserRuleContext {
  public:
    MathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SummOperationContext *summOperation();
    DiffOperationContext *diffOperation();
    MultOperationContext *multOperation();
    DivOperationContext *divOperation();
    InPowOperationContext *inPowOperation();
    InSqrtContext *inSqrt();
    CreateContext *create();
    AssContext *ass();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MathContext* math();

  class  CreateContext : public antlr4::ParserRuleContext {
  public:
    CreateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Float();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CreateContext* create();

  class  AssContext : public antlr4::ParserRuleContext {
  public:
    AssContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *Assign();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLT();
    OperationContext *operation();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssContext* ass();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForCycleContext *forCycle();
    IfExprContext *ifExpr();
    BlockContext *block();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  ForCycleContext : public antlr4::ParserRuleContext {
  public:
    ForCycleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *OpenPar();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);
    antlr4::tree::TerminalNode *ClosePar();
    antlr4::tree::TerminalNode *FigureOpen();
    antlr4::tree::TerminalNode *FigureClose();
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *CompareOperator();
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);
    std::vector<MathContext *> math();
    MathContext* math(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForCycleContext* forCycle();

  class  IfExprContext : public antlr4::ParserRuleContext {
  public:
    IfExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *OpenPar();
    antlr4::tree::TerminalNode *CompareOperator();
    antlr4::tree::TerminalNode *ClosePar();
    antlr4::tree::TerminalNode *FigureOpen();
    antlr4::tree::TerminalNode *FigureClose();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> FLT();
    antlr4::tree::TerminalNode* FLT(size_t i);
    std::vector<MathContext *> math();
    MathContext* math(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfExprContext* ifExpr();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FigureOpen();
    antlr4::tree::TerminalNode *FigureClose();
    std::vector<MathContext *> math();
    MathContext* math(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace antlrcpptest
