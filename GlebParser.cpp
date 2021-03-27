/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/Gleb/GlebParser.g4 by ANTLR 4.9.1


#include "GlebParserVisitor.h"

#include "GlebParser.h"


/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


using namespace antlrcpp;
using namespace antlrcpptest;
using namespace antlr4;

GlebParser::GlebParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GlebParser::~GlebParser() {
  delete _interpreter;
}

std::string GlebParser::getGrammarFileName() const {
  return "GlebParser.g4";
}

const std::vector<std::string>& GlebParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GlebParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MainContext ------------------------------------------------------------------

GlebParser::MainContext::MainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GlebParser::MathContext *> GlebParser::MainContext::math() {
  return getRuleContexts<GlebParser::MathContext>();
}

GlebParser::MathContext* GlebParser::MainContext::math(size_t i) {
  return getRuleContext<GlebParser::MathContext>(i);
}

std::vector<GlebParser::ExprContext *> GlebParser::MainContext::expr() {
  return getRuleContexts<GlebParser::ExprContext>();
}

GlebParser::ExprContext* GlebParser::MainContext::expr(size_t i) {
  return getRuleContext<GlebParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> GlebParser::MainContext::Newline() {
  return getTokens(GlebParser::Newline);
}

tree::TerminalNode* GlebParser::MainContext::Newline(size_t i) {
  return getToken(GlebParser::Newline, i);
}


size_t GlebParser::MainContext::getRuleIndex() const {
  return GlebParser::RuleMain;
}


antlrcpp::Any GlebParser::MainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitMain(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::MainContext* GlebParser::main() {
  MainContext *_localctx = _tracker.createInstance<MainContext>(_ctx, getState());
  enterRule(_localctx, 0, GlebParser::RuleMain);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::Integer)
      | (1ULL << GlebParser::Float)
      | (1ULL << GlebParser::For)
      | (1ULL << GlebParser::IF)
      | (1ULL << GlebParser::FigureOpen)
      | (1ULL << GlebParser::ID))) != 0)) {
      setState(42);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GlebParser::Integer:
        case GlebParser::Float:
        case GlebParser::ID: {
          setState(40);
          math();
          break;
        }

        case GlebParser::For:
        case GlebParser::IF:
        case GlebParser::FigureOpen: {
          setState(41);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(45);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GlebParser::Newline) {
        setState(44);
        match(GlebParser::Newline);
      }
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummOperationContext ------------------------------------------------------------------

GlebParser::SummOperationContext::SummOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::SummOperationContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::SummOperationContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::SummOperationContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::SummOperationContext::Plus() {
  return getToken(GlebParser::Plus, 0);
}

std::vector<tree::TerminalNode *> GlebParser::SummOperationContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::SummOperationContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::SummOperationContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::SummOperationContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::SummOperationContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::SummOperationContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}

tree::TerminalNode* GlebParser::SummOperationContext::PlusAss() {
  return getToken(GlebParser::PlusAss, 0);
}


size_t GlebParser::SummOperationContext::getRuleIndex() const {
  return GlebParser::RuleSummOperation;
}


antlrcpp::Any GlebParser::SummOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitSummOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::SummOperationContext* GlebParser::summOperation() {
  SummOperationContext *_localctx = _tracker.createInstance<SummOperationContext>(_ctx, getState());
  enterRule(_localctx, 2, GlebParser::RuleSummOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(52);
      match(GlebParser::ID);
      setState(53);
      match(GlebParser::Assign);
      setState(58);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(54);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(55);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(56);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(57);
        operation();
        break;
      }

      default:
        break;
      }
      setState(60);
      match(GlebParser::Plus);
      setState(65);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(61);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(62);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(63);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(64);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      match(GlebParser::ID);
      setState(68);
      match(GlebParser::PlusAss);
      setState(73);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(69);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(70);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(71);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(72);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SummContext ------------------------------------------------------------------

GlebParser::SummContext::SummContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::SummContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::SummContext::Plus() {
  return getToken(GlebParser::Plus, 0);
}

tree::TerminalNode* GlebParser::SummContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::SummContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::SummContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::SummContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::SummContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::SummContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::SummContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::SummContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::SummContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}


size_t GlebParser::SummContext::getRuleIndex() const {
  return GlebParser::RuleSumm;
}


antlrcpp::Any GlebParser::SummContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitSumm(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::SummContext* GlebParser::summ() {
  SummContext *_localctx = _tracker.createInstance<SummContext>(_ctx, getState());
  enterRule(_localctx, 4, GlebParser::RuleSumm);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(GlebParser::OpenPar);
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(78);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(79);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(80);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(81);
      operation();
      break;
    }

    default:
      break;
    }
    setState(84);
    match(GlebParser::Plus);
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(85);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(86);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(87);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(88);
      operation();
      break;
    }

    default:
      break;
    }
    setState(91);
    match(GlebParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiffOperationContext ------------------------------------------------------------------

GlebParser::DiffOperationContext::DiffOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::DiffOperationContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::DiffOperationContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::DiffOperationContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::DiffOperationContext::Minus() {
  return getToken(GlebParser::Minus, 0);
}

std::vector<tree::TerminalNode *> GlebParser::DiffOperationContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::DiffOperationContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::DiffOperationContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::DiffOperationContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::DiffOperationContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::DiffOperationContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}

tree::TerminalNode* GlebParser::DiffOperationContext::MinusAss() {
  return getToken(GlebParser::MinusAss, 0);
}


size_t GlebParser::DiffOperationContext::getRuleIndex() const {
  return GlebParser::RuleDiffOperation;
}


antlrcpp::Any GlebParser::DiffOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitDiffOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::DiffOperationContext* GlebParser::diffOperation() {
  DiffOperationContext *_localctx = _tracker.createInstance<DiffOperationContext>(_ctx, getState());
  enterRule(_localctx, 6, GlebParser::RuleDiffOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      match(GlebParser::ID);
      setState(94);
      match(GlebParser::Assign);
      setState(99);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(95);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(96);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(97);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(98);
        operation();
        break;
      }

      default:
        break;
      }
      setState(101);
      match(GlebParser::Minus);
      setState(106);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(102);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(103);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(104);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(105);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(GlebParser::ID);
      setState(109);
      match(GlebParser::MinusAss);
      setState(114);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(110);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(111);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(112);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(113);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiffContext ------------------------------------------------------------------

GlebParser::DiffContext::DiffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::DiffContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::DiffContext::Minus() {
  return getToken(GlebParser::Minus, 0);
}

tree::TerminalNode* GlebParser::DiffContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::DiffContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::DiffContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::DiffContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::DiffContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::DiffContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::DiffContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::DiffContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::DiffContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}


size_t GlebParser::DiffContext::getRuleIndex() const {
  return GlebParser::RuleDiff;
}


antlrcpp::Any GlebParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::DiffContext* GlebParser::diff() {
  DiffContext *_localctx = _tracker.createInstance<DiffContext>(_ctx, getState());
  enterRule(_localctx, 8, GlebParser::RuleDiff);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(GlebParser::OpenPar);
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(119);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(120);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(121);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(122);
      operation();
      break;
    }

    default:
      break;
    }
    setState(125);
    match(GlebParser::Minus);
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(126);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(127);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(128);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(129);
      operation();
      break;
    }

    default:
      break;
    }
    setState(132);
    match(GlebParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultOperationContext ------------------------------------------------------------------

GlebParser::MultOperationContext::MultOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::MultOperationContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::MultOperationContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::MultOperationContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::MultOperationContext::Star() {
  return getToken(GlebParser::Star, 0);
}

std::vector<tree::TerminalNode *> GlebParser::MultOperationContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::MultOperationContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::MultOperationContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::MultOperationContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::MultOperationContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::MultOperationContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}

tree::TerminalNode* GlebParser::MultOperationContext::StarAss() {
  return getToken(GlebParser::StarAss, 0);
}


size_t GlebParser::MultOperationContext::getRuleIndex() const {
  return GlebParser::RuleMultOperation;
}


antlrcpp::Any GlebParser::MultOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitMultOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::MultOperationContext* GlebParser::multOperation() {
  MultOperationContext *_localctx = _tracker.createInstance<MultOperationContext>(_ctx, getState());
  enterRule(_localctx, 10, GlebParser::RuleMultOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(134);
      match(GlebParser::ID);
      setState(135);
      match(GlebParser::Assign);
      setState(140);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(136);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(137);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(138);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(139);
        operation();
        break;
      }

      default:
        break;
      }
      setState(142);
      match(GlebParser::Star);
      setState(147);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(143);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(144);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(145);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(146);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(GlebParser::ID);
      setState(150);
      match(GlebParser::StarAss);
      setState(155);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(151);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(152);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(153);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(154);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultContext ------------------------------------------------------------------

GlebParser::MultContext::MultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::MultContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::MultContext::Star() {
  return getToken(GlebParser::Star, 0);
}

tree::TerminalNode* GlebParser::MultContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::MultContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::MultContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::MultContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::MultContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::MultContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::MultContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::MultContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::MultContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}


size_t GlebParser::MultContext::getRuleIndex() const {
  return GlebParser::RuleMult;
}


antlrcpp::Any GlebParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::MultContext* GlebParser::mult() {
  MultContext *_localctx = _tracker.createInstance<MultContext>(_ctx, getState());
  enterRule(_localctx, 12, GlebParser::RuleMult);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(GlebParser::OpenPar);
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(160);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(161);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(162);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(163);
      operation();
      break;
    }

    default:
      break;
    }
    setState(166);
    match(GlebParser::Star);
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(167);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(168);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(169);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(170);
      operation();
      break;
    }

    default:
      break;
    }
    setState(173);
    match(GlebParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivOperationContext ------------------------------------------------------------------

GlebParser::DivOperationContext::DivOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::DivOperationContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::DivOperationContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::DivOperationContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::DivOperationContext::Devide() {
  return getToken(GlebParser::Devide, 0);
}

std::vector<tree::TerminalNode *> GlebParser::DivOperationContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::DivOperationContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::DivOperationContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::DivOperationContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::DivOperationContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::DivOperationContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}

tree::TerminalNode* GlebParser::DivOperationContext::DevideAss() {
  return getToken(GlebParser::DevideAss, 0);
}


size_t GlebParser::DivOperationContext::getRuleIndex() const {
  return GlebParser::RuleDivOperation;
}


antlrcpp::Any GlebParser::DivOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitDivOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::DivOperationContext* GlebParser::divOperation() {
  DivOperationContext *_localctx = _tracker.createInstance<DivOperationContext>(_ctx, getState());
  enterRule(_localctx, 14, GlebParser::RuleDivOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      match(GlebParser::ID);
      setState(176);
      match(GlebParser::Assign);
      setState(181);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(177);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(178);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(179);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(180);
        operation();
        break;
      }

      default:
        break;
      }
      setState(183);
      match(GlebParser::Devide);
      setState(188);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(184);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(185);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(186);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(187);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(190);
      match(GlebParser::ID);
      setState(191);
      match(GlebParser::DevideAss);
      setState(196);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(192);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(193);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(194);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(195);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DivContext ------------------------------------------------------------------

GlebParser::DivContext::DivContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::DivContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::DivContext::Devide() {
  return getToken(GlebParser::Devide, 0);
}

tree::TerminalNode* GlebParser::DivContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::DivContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::DivContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::DivContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::DivContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::DivContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::DivContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::DivContext *> GlebParser::DivContext::div() {
  return getRuleContexts<GlebParser::DivContext>();
}

GlebParser::DivContext* GlebParser::DivContext::div(size_t i) {
  return getRuleContext<GlebParser::DivContext>(i);
}


size_t GlebParser::DivContext::getRuleIndex() const {
  return GlebParser::RuleDiv;
}


antlrcpp::Any GlebParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::DivContext* GlebParser::div() {
  DivContext *_localctx = _tracker.createInstance<DivContext>(_ctx, getState());
  enterRule(_localctx, 16, GlebParser::RuleDiv);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(GlebParser::OpenPar);
    setState(205);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GlebParser::ID: {
        setState(201);
        match(GlebParser::ID);
        break;
      }

      case GlebParser::INT: {
        setState(202);
        match(GlebParser::INT);
        break;
      }

      case GlebParser::FLT: {
        setState(203);
        match(GlebParser::FLT);
        break;
      }

      case GlebParser::OpenPar: {
        setState(204);
        div();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(207);
    match(GlebParser::Devide);
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GlebParser::ID: {
        setState(208);
        match(GlebParser::ID);
        break;
      }

      case GlebParser::INT: {
        setState(209);
        match(GlebParser::INT);
        break;
      }

      case GlebParser::FLT: {
        setState(210);
        match(GlebParser::FLT);
        break;
      }

      case GlebParser::OpenPar: {
        setState(211);
        div();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(214);
    match(GlebParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InPowOperationContext ------------------------------------------------------------------

GlebParser::InPowOperationContext::InPowOperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::InPowOperationContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::InPowOperationContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::InPowOperationContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::InPowOperationContext::Pow() {
  return getToken(GlebParser::Pow, 0);
}

std::vector<tree::TerminalNode *> GlebParser::InPowOperationContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::InPowOperationContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::InPowOperationContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::InPowOperationContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::InPowOperationContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::InPowOperationContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}

tree::TerminalNode* GlebParser::InPowOperationContext::PowAss() {
  return getToken(GlebParser::PowAss, 0);
}


size_t GlebParser::InPowOperationContext::getRuleIndex() const {
  return GlebParser::RuleInPowOperation;
}


antlrcpp::Any GlebParser::InPowOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitInPowOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::InPowOperationContext* GlebParser::inPowOperation() {
  InPowOperationContext *_localctx = _tracker.createInstance<InPowOperationContext>(_ctx, getState());
  enterRule(_localctx, 18, GlebParser::RuleInPowOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(216);
      match(GlebParser::ID);
      setState(217);
      match(GlebParser::Assign);
      setState(222);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(218);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(219);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(220);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(221);
        operation();
        break;
      }

      default:
        break;
      }
      setState(224);
      match(GlebParser::Pow);
      setState(229);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(225);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(226);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(227);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(228);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(231);
      match(GlebParser::ID);
      setState(232);
      match(GlebParser::PowAss);
      setState(237);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(233);
        match(GlebParser::ID);
        break;
      }

      case 2: {
        setState(234);
        match(GlebParser::INT);
        break;
      }

      case 3: {
        setState(235);
        match(GlebParser::FLT);
        break;
      }

      case 4: {
        setState(236);
        operation();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InPowContext ------------------------------------------------------------------

GlebParser::InPowContext::InPowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::InPowContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::InPowContext::Pow() {
  return getToken(GlebParser::Pow, 0);
}

tree::TerminalNode* GlebParser::InPowContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::InPowContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::InPowContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::InPowContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::InPowContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::InPowContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::InPowContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::OperationContext *> GlebParser::InPowContext::operation() {
  return getRuleContexts<GlebParser::OperationContext>();
}

GlebParser::OperationContext* GlebParser::InPowContext::operation(size_t i) {
  return getRuleContext<GlebParser::OperationContext>(i);
}


size_t GlebParser::InPowContext::getRuleIndex() const {
  return GlebParser::RuleInPow;
}


antlrcpp::Any GlebParser::InPowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitInPow(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::InPowContext* GlebParser::inPow() {
  InPowContext *_localctx = _tracker.createInstance<InPowContext>(_ctx, getState());
  enterRule(_localctx, 20, GlebParser::RuleInPow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(GlebParser::OpenPar);
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      setState(242);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(243);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(244);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(245);
      operation();
      break;
    }

    default:
      break;
    }
    setState(248);
    match(GlebParser::Pow);
    setState(253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(249);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(250);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(251);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(252);
      operation();
      break;
    }

    default:
      break;
    }
    setState(255);
    match(GlebParser::ClosePar);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InSqrtContext ------------------------------------------------------------------

GlebParser::InSqrtContext::InSqrtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::InSqrtContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::InSqrtContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::InSqrtContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::InSqrtContext::Sqrt() {
  return getToken(GlebParser::Sqrt, 0);
}

tree::TerminalNode* GlebParser::InSqrtContext::INT() {
  return getToken(GlebParser::INT, 0);
}

tree::TerminalNode* GlebParser::InSqrtContext::FLT() {
  return getToken(GlebParser::FLT, 0);
}

GlebParser::OperationContext* GlebParser::InSqrtContext::operation() {
  return getRuleContext<GlebParser::OperationContext>(0);
}


size_t GlebParser::InSqrtContext::getRuleIndex() const {
  return GlebParser::RuleInSqrt;
}


antlrcpp::Any GlebParser::InSqrtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitInSqrt(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::InSqrtContext* GlebParser::inSqrt() {
  InSqrtContext *_localctx = _tracker.createInstance<InSqrtContext>(_ctx, getState());
  enterRule(_localctx, 22, GlebParser::RuleInSqrt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(257);
    match(GlebParser::ID);
    setState(258);
    match(GlebParser::Assign);
    setState(259);
    match(GlebParser::Sqrt);
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(260);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(261);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(262);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(263);
      operation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

GlebParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GlebParser::SummContext* GlebParser::OperationContext::summ() {
  return getRuleContext<GlebParser::SummContext>(0);
}

GlebParser::DiffContext* GlebParser::OperationContext::diff() {
  return getRuleContext<GlebParser::DiffContext>(0);
}

GlebParser::MultContext* GlebParser::OperationContext::mult() {
  return getRuleContext<GlebParser::MultContext>(0);
}

GlebParser::DivContext* GlebParser::OperationContext::div() {
  return getRuleContext<GlebParser::DivContext>(0);
}

GlebParser::InPowContext* GlebParser::OperationContext::inPow() {
  return getRuleContext<GlebParser::InPowContext>(0);
}

GlebParser::InSqrtContext* GlebParser::OperationContext::inSqrt() {
  return getRuleContext<GlebParser::InSqrtContext>(0);
}


size_t GlebParser::OperationContext::getRuleIndex() const {
  return GlebParser::RuleOperation;
}


antlrcpp::Any GlebParser::OperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitOperation(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::OperationContext* GlebParser::operation() {
  OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, getState());
  enterRule(_localctx, 24, GlebParser::RuleOperation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(266);
      summ();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(267);
      diff();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(268);
      mult();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(269);
      div();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(270);
      inPow();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(271);
      inSqrt();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MathContext ------------------------------------------------------------------

GlebParser::MathContext::MathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GlebParser::SummOperationContext* GlebParser::MathContext::summOperation() {
  return getRuleContext<GlebParser::SummOperationContext>(0);
}

GlebParser::DiffOperationContext* GlebParser::MathContext::diffOperation() {
  return getRuleContext<GlebParser::DiffOperationContext>(0);
}

GlebParser::MultOperationContext* GlebParser::MathContext::multOperation() {
  return getRuleContext<GlebParser::MultOperationContext>(0);
}

GlebParser::DivOperationContext* GlebParser::MathContext::divOperation() {
  return getRuleContext<GlebParser::DivOperationContext>(0);
}

GlebParser::InPowOperationContext* GlebParser::MathContext::inPowOperation() {
  return getRuleContext<GlebParser::InPowOperationContext>(0);
}

GlebParser::InSqrtContext* GlebParser::MathContext::inSqrt() {
  return getRuleContext<GlebParser::InSqrtContext>(0);
}

GlebParser::CreateContext* GlebParser::MathContext::create() {
  return getRuleContext<GlebParser::CreateContext>(0);
}

GlebParser::AssContext* GlebParser::MathContext::ass() {
  return getRuleContext<GlebParser::AssContext>(0);
}


size_t GlebParser::MathContext::getRuleIndex() const {
  return GlebParser::RuleMath;
}


antlrcpp::Any GlebParser::MathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitMath(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::MathContext* GlebParser::math() {
  MathContext *_localctx = _tracker.createInstance<MathContext>(_ctx, getState());
  enterRule(_localctx, 26, GlebParser::RuleMath);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      summOperation();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(275);
      diffOperation();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(276);
      multOperation();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(277);
      divOperation();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(278);
      inPowOperation();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(279);
      inSqrt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(280);
      create();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(281);
      ass();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateContext ------------------------------------------------------------------

GlebParser::CreateContext::CreateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::CreateContext::ID() {
  return getToken(GlebParser::ID, 0);
}

tree::TerminalNode* GlebParser::CreateContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::CreateContext::Integer() {
  return getToken(GlebParser::Integer, 0);
}

tree::TerminalNode* GlebParser::CreateContext::Float() {
  return getToken(GlebParser::Float, 0);
}

tree::TerminalNode* GlebParser::CreateContext::INT() {
  return getToken(GlebParser::INT, 0);
}

tree::TerminalNode* GlebParser::CreateContext::FLT() {
  return getToken(GlebParser::FLT, 0);
}


size_t GlebParser::CreateContext::getRuleIndex() const {
  return GlebParser::RuleCreate;
}


antlrcpp::Any GlebParser::CreateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitCreate(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::CreateContext* GlebParser::create() {
  CreateContext *_localctx = _tracker.createInstance<CreateContext>(_ctx, getState());
  enterRule(_localctx, 28, GlebParser::RuleCreate);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    _la = _input->LA(1);
    if (!(_la == GlebParser::Integer

    || _la == GlebParser::Float)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(285);
    match(GlebParser::ID);
    setState(286);
    match(GlebParser::Assign);
    setState(287);
    _la = _input->LA(1);
    if (!(_la == GlebParser::INT

    || _la == GlebParser::FLT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssContext ------------------------------------------------------------------

GlebParser::AssContext::AssContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GlebParser::AssContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::AssContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

tree::TerminalNode* GlebParser::AssContext::Assign() {
  return getToken(GlebParser::Assign, 0);
}

tree::TerminalNode* GlebParser::AssContext::INT() {
  return getToken(GlebParser::INT, 0);
}

tree::TerminalNode* GlebParser::AssContext::FLT() {
  return getToken(GlebParser::FLT, 0);
}

GlebParser::OperationContext* GlebParser::AssContext::operation() {
  return getRuleContext<GlebParser::OperationContext>(0);
}


size_t GlebParser::AssContext::getRuleIndex() const {
  return GlebParser::RuleAss;
}


antlrcpp::Any GlebParser::AssContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitAss(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::AssContext* GlebParser::ass() {
  AssContext *_localctx = _tracker.createInstance<AssContext>(_ctx, getState());
  enterRule(_localctx, 30, GlebParser::RuleAss);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(GlebParser::ID);
    setState(290);
    match(GlebParser::Assign);
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(291);
      match(GlebParser::ID);
      break;
    }

    case 2: {
      setState(292);
      match(GlebParser::INT);
      break;
    }

    case 3: {
      setState(293);
      match(GlebParser::FLT);
      break;
    }

    case 4: {
      setState(294);
      operation();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

GlebParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GlebParser::ForCycleContext* GlebParser::ExprContext::forCycle() {
  return getRuleContext<GlebParser::ForCycleContext>(0);
}

GlebParser::IfExprContext* GlebParser::ExprContext::ifExpr() {
  return getRuleContext<GlebParser::IfExprContext>(0);
}

GlebParser::BlockContext* GlebParser::ExprContext::block() {
  return getRuleContext<GlebParser::BlockContext>(0);
}


size_t GlebParser::ExprContext::getRuleIndex() const {
  return GlebParser::RuleExpr;
}


antlrcpp::Any GlebParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::ExprContext* GlebParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 32, GlebParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GlebParser::For: {
        enterOuterAlt(_localctx, 1);
        setState(297);
        forCycle();
        break;
      }

      case GlebParser::IF: {
        enterOuterAlt(_localctx, 2);
        setState(298);
        ifExpr();
        break;
      }

      case GlebParser::FigureOpen: {
        enterOuterAlt(_localctx, 3);
        setState(299);
        block();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForCycleContext ------------------------------------------------------------------

GlebParser::ForCycleContext::ForCycleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::ForCycleContext::For() {
  return getToken(GlebParser::For, 0);
}

tree::TerminalNode* GlebParser::ForCycleContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

std::vector<tree::TerminalNode *> GlebParser::ForCycleContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::ForCycleContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::ForCycleContext::Comma() {
  return getTokens(GlebParser::Comma);
}

tree::TerminalNode* GlebParser::ForCycleContext::Comma(size_t i) {
  return getToken(GlebParser::Comma, i);
}

tree::TerminalNode* GlebParser::ForCycleContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

tree::TerminalNode* GlebParser::ForCycleContext::FigureOpen() {
  return getToken(GlebParser::FigureOpen, 0);
}

tree::TerminalNode* GlebParser::ForCycleContext::FigureClose() {
  return getToken(GlebParser::FigureClose, 0);
}

std::vector<tree::TerminalNode *> GlebParser::ForCycleContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::ForCycleContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<tree::TerminalNode *> GlebParser::ForCycleContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::ForCycleContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

tree::TerminalNode* GlebParser::ForCycleContext::CompareOperator() {
  return getToken(GlebParser::CompareOperator, 0);
}

std::vector<tree::TerminalNode *> GlebParser::ForCycleContext::Newline() {
  return getTokens(GlebParser::Newline);
}

tree::TerminalNode* GlebParser::ForCycleContext::Newline(size_t i) {
  return getToken(GlebParser::Newline, i);
}

std::vector<GlebParser::MathContext *> GlebParser::ForCycleContext::math() {
  return getRuleContexts<GlebParser::MathContext>();
}

GlebParser::MathContext* GlebParser::ForCycleContext::math(size_t i) {
  return getRuleContext<GlebParser::MathContext>(i);
}

std::vector<GlebParser::ExprContext *> GlebParser::ForCycleContext::expr() {
  return getRuleContexts<GlebParser::ExprContext>();
}

GlebParser::ExprContext* GlebParser::ForCycleContext::expr(size_t i) {
  return getRuleContext<GlebParser::ExprContext>(i);
}


size_t GlebParser::ForCycleContext::getRuleIndex() const {
  return GlebParser::RuleForCycle;
}


antlrcpp::Any GlebParser::ForCycleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitForCycle(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::ForCycleContext* GlebParser::forCycle() {
  ForCycleContext *_localctx = _tracker.createInstance<ForCycleContext>(_ctx, getState());
  enterRule(_localctx, 34, GlebParser::RuleForCycle);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    match(GlebParser::For);
    setState(303);
    match(GlebParser::OpenPar);
    setState(304);
    match(GlebParser::ID);
    setState(305);
    match(GlebParser::Comma);
    setState(306);
    match(GlebParser::ID);

    setState(307);
    match(GlebParser::CompareOperator);
    setState(308);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::INT)
      | (1ULL << GlebParser::FLT)
      | (1ULL << GlebParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(309);
    match(GlebParser::Comma);
    setState(310);
    _la = _input->LA(1);
    if (!(_la == GlebParser::INT

    || _la == GlebParser::FLT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(311);
    match(GlebParser::ClosePar);
    setState(312);
    match(GlebParser::FigureOpen);
    setState(321);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::Integer)
      | (1ULL << GlebParser::Float)
      | (1ULL << GlebParser::For)
      | (1ULL << GlebParser::IF)
      | (1ULL << GlebParser::FigureOpen)
      | (1ULL << GlebParser::ID))) != 0)) {
      setState(315);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GlebParser::Integer:
        case GlebParser::Float:
        case GlebParser::ID: {
          setState(313);
          math();
          break;
        }

        case GlebParser::For:
        case GlebParser::IF:
        case GlebParser::FigureOpen: {
          setState(314);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(317);
      match(GlebParser::Newline);
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(324);
    match(GlebParser::FigureClose);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfExprContext ------------------------------------------------------------------

GlebParser::IfExprContext::IfExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::IfExprContext::IF() {
  return getToken(GlebParser::IF, 0);
}

tree::TerminalNode* GlebParser::IfExprContext::OpenPar() {
  return getToken(GlebParser::OpenPar, 0);
}

tree::TerminalNode* GlebParser::IfExprContext::CompareOperator() {
  return getToken(GlebParser::CompareOperator, 0);
}

tree::TerminalNode* GlebParser::IfExprContext::ClosePar() {
  return getToken(GlebParser::ClosePar, 0);
}

tree::TerminalNode* GlebParser::IfExprContext::FigureOpen() {
  return getToken(GlebParser::FigureOpen, 0);
}

tree::TerminalNode* GlebParser::IfExprContext::FigureClose() {
  return getToken(GlebParser::FigureClose, 0);
}

std::vector<tree::TerminalNode *> GlebParser::IfExprContext::ID() {
  return getTokens(GlebParser::ID);
}

tree::TerminalNode* GlebParser::IfExprContext::ID(size_t i) {
  return getToken(GlebParser::ID, i);
}

std::vector<tree::TerminalNode *> GlebParser::IfExprContext::INT() {
  return getTokens(GlebParser::INT);
}

tree::TerminalNode* GlebParser::IfExprContext::INT(size_t i) {
  return getToken(GlebParser::INT, i);
}

std::vector<tree::TerminalNode *> GlebParser::IfExprContext::FLT() {
  return getTokens(GlebParser::FLT);
}

tree::TerminalNode* GlebParser::IfExprContext::FLT(size_t i) {
  return getToken(GlebParser::FLT, i);
}

std::vector<GlebParser::MathContext *> GlebParser::IfExprContext::math() {
  return getRuleContexts<GlebParser::MathContext>();
}

GlebParser::MathContext* GlebParser::IfExprContext::math(size_t i) {
  return getRuleContext<GlebParser::MathContext>(i);
}

std::vector<GlebParser::ExprContext *> GlebParser::IfExprContext::expr() {
  return getRuleContexts<GlebParser::ExprContext>();
}

GlebParser::ExprContext* GlebParser::IfExprContext::expr(size_t i) {
  return getRuleContext<GlebParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> GlebParser::IfExprContext::Newline() {
  return getTokens(GlebParser::Newline);
}

tree::TerminalNode* GlebParser::IfExprContext::Newline(size_t i) {
  return getToken(GlebParser::Newline, i);
}


size_t GlebParser::IfExprContext::getRuleIndex() const {
  return GlebParser::RuleIfExpr;
}


antlrcpp::Any GlebParser::IfExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitIfExpr(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::IfExprContext* GlebParser::ifExpr() {
  IfExprContext *_localctx = _tracker.createInstance<IfExprContext>(_ctx, getState());
  enterRule(_localctx, 36, GlebParser::RuleIfExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(GlebParser::IF);
    setState(327);
    match(GlebParser::OpenPar);
    setState(328);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::INT)
      | (1ULL << GlebParser::FLT)
      | (1ULL << GlebParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(329);
    match(GlebParser::CompareOperator);
    setState(330);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::INT)
      | (1ULL << GlebParser::FLT)
      | (1ULL << GlebParser::ID))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(331);
    match(GlebParser::ClosePar);
    setState(332);
    match(GlebParser::FigureOpen);
    setState(342);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::Integer)
      | (1ULL << GlebParser::Float)
      | (1ULL << GlebParser::For)
      | (1ULL << GlebParser::IF)
      | (1ULL << GlebParser::FigureOpen)
      | (1ULL << GlebParser::ID))) != 0)) {
      setState(335);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GlebParser::Integer:
        case GlebParser::Float:
        case GlebParser::ID: {
          setState(333);
          math();
          break;
        }

        case GlebParser::For:
        case GlebParser::IF:
        case GlebParser::FigureOpen: {
          setState(334);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(338);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GlebParser::Newline) {
        setState(337);
        match(GlebParser::Newline);
      }
      setState(344);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(345);
    match(GlebParser::FigureClose);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

GlebParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GlebParser::BlockContext::FigureOpen() {
  return getToken(GlebParser::FigureOpen, 0);
}

tree::TerminalNode* GlebParser::BlockContext::FigureClose() {
  return getToken(GlebParser::FigureClose, 0);
}

std::vector<GlebParser::MathContext *> GlebParser::BlockContext::math() {
  return getRuleContexts<GlebParser::MathContext>();
}

GlebParser::MathContext* GlebParser::BlockContext::math(size_t i) {
  return getRuleContext<GlebParser::MathContext>(i);
}

std::vector<GlebParser::ExprContext *> GlebParser::BlockContext::expr() {
  return getRuleContexts<GlebParser::ExprContext>();
}

GlebParser::ExprContext* GlebParser::BlockContext::expr(size_t i) {
  return getRuleContext<GlebParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> GlebParser::BlockContext::Newline() {
  return getTokens(GlebParser::Newline);
}

tree::TerminalNode* GlebParser::BlockContext::Newline(size_t i) {
  return getToken(GlebParser::Newline, i);
}


size_t GlebParser::BlockContext::getRuleIndex() const {
  return GlebParser::RuleBlock;
}


antlrcpp::Any GlebParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GlebParserVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GlebParser::BlockContext* GlebParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 38, GlebParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(GlebParser::FigureOpen);
    setState(357);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GlebParser::Integer)
      | (1ULL << GlebParser::Float)
      | (1ULL << GlebParser::For)
      | (1ULL << GlebParser::IF)
      | (1ULL << GlebParser::FigureOpen)
      | (1ULL << GlebParser::ID))) != 0)) {
      setState(350);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GlebParser::Integer:
        case GlebParser::Float:
        case GlebParser::ID: {
          setState(348);
          math();
          break;
        }

        case GlebParser::For:
        case GlebParser::IF:
        case GlebParser::FigureOpen: {
          setState(349);
          expr();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(353);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GlebParser::Newline) {
        setState(352);
        match(GlebParser::Newline);
      }
      setState(359);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(360);
    match(GlebParser::FigureClose);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> GlebParser::_decisionToDFA;
atn::PredictionContextCache GlebParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GlebParser::_atn;
std::vector<uint16_t> GlebParser::_serializedATN;

std::vector<std::string> GlebParser::_ruleNames = {
  "main", "summOperation", "summ", "diffOperation", "diff", "multOperation", 
  "mult", "divOperation", "div", "inPowOperation", "inPow", "inSqrt", "operation", 
  "math", "create", "ass", "expr", "forCycle", "ifExpr", "block"
};

std::vector<std::string> GlebParser::_literalNames = {
  "", "", "'return'", "'continue'", "'INT'", "'FLT'", "'And'", "'For'", 
  "'If'", "'Then'", "'Else'", "", "", "", "", "'<'", "'<='", "'>'", "'>='", 
  "'=='", "'!='", "'='", "':'", "';'", "'+'", "'+='", "'-'", "'-='", "'*'", 
  "'*='", "'/'", "'/='", "'('", "')'", "'{'", "'}'", "'\u003F'", "','", 
  "'!'", "'^'", "'^='", "'~'", "'~='"
};

std::vector<std::string> GlebParser::_symbolicNames = {
  "", "Tim", "Return", "Continue", "Integer", "Float", "And", "For", "IF", 
  "Then", "Else", "INT", "Digit", "FLT", "CompareOperator", "LessThan", 
  "LessOrEqual", "GreaterThan", "GreaterOrEqual", "Equal", "NotEqual", "Assign", 
  "Colon", "Newline", "Plus", "PlusAss", "Minus", "MinusAss", "Star", "StarAss", 
  "Devide", "DevideAss", "OpenPar", "ClosePar", "FigureOpen", "FigureClose", 
  "QuestionMark", "Comma", "Ant", "Pow", "PowAss", "Sqrt", "SqrtAss", "Foo", 
  "Bar", "ID", "Comment", "WS"
};

dfa::Vocabulary GlebParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GlebParser::_tokenNames;

GlebParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x31, 0x16d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x2d, 0xa, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x30, 0xa, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 
    0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x3d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x5, 0x3, 0x44, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4c, 0xa, 0x3, 0x5, 0x3, 0x4e, 0xa, 0x3, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x55, 0xa, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x5c, 
    0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x66, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x6d, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x75, 0xa, 0x5, 0x5, 
    0x5, 0x77, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x7e, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x85, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x8f, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x96, 0xa, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x9e, 0xa, 0x7, 0x5, 0x7, 0xa0, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xa7, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xae, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0xb8, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xbf, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x5, 0x9, 0xc7, 0xa, 0x9, 0x5, 0x9, 0xc9, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd0, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xd7, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0xe1, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0xe8, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0xf0, 0xa, 0xb, 0x5, 0xb, 0xf2, 
    0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xf9, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x100, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x10b, 0xa, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x113, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x11d, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x12a, 0xa, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x12f, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x13e, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x142, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x145, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x5, 0x14, 0x152, 0xa, 0x14, 0x3, 0x14, 0x5, 0x14, 0x155, 0xa, 
    0x14, 0x7, 0x14, 0x157, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x15a, 0xb, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
    0x161, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x164, 0xa, 0x15, 0x7, 0x15, 
    0x166, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0x169, 0xb, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x2, 0x2, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 
    0x26, 0x28, 0x2, 0x5, 0x3, 0x2, 0x6, 0x7, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 
    0x5, 0x2, 0xd, 0xd, 0xf, 0xf, 0x2f, 0x2f, 0x2, 0x1c7, 0x2, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x76, 0x3, 0x2, 0x2, 0x2, 0xa, 0x78, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x10, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xca, 0x3, 0x2, 0x2, 0x2, 0x14, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x18, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x11c, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x24, 0x130, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x148, 0x3, 0x2, 0x2, 0x2, 0x28, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 
    0x5, 0x1c, 0xf, 0x2, 0x2b, 0x2d, 0x5, 0x22, 0x12, 0x2, 0x2c, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x30, 0x7, 0x19, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 0x2, 0x2, 0x33, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 
    0x2f, 0x2, 0x2, 0x37, 0x3c, 0x7, 0x17, 0x2, 0x2, 0x38, 0x3d, 0x7, 0x2f, 
    0x2, 0x2, 0x39, 0x3d, 0x7, 0xd, 0x2, 0x2, 0x3a, 0x3d, 0x7, 0xf, 0x2, 
    0x2, 0x3b, 0x3d, 0x5, 0x1a, 0xe, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x43, 
    0x7, 0x1a, 0x2, 0x2, 0x3f, 0x44, 0x7, 0x2f, 0x2, 0x2, 0x40, 0x44, 0x7, 
    0xd, 0x2, 0x2, 0x41, 0x44, 0x7, 0xf, 0x2, 0x2, 0x42, 0x44, 0x5, 0x1a, 
    0xe, 0x2, 0x43, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x2f, 0x2, 0x2, 0x46, 
    0x4b, 0x7, 0x1b, 0x2, 0x2, 0x47, 0x4c, 0x7, 0x2f, 0x2, 0x2, 0x48, 0x4c, 
    0x7, 0xd, 0x2, 0x2, 0x49, 0x4c, 0x7, 0xf, 0x2, 0x2, 0x4a, 0x4c, 0x5, 
    0x1a, 0xe, 0x2, 0x4b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x54, 0x7, 0x22, 0x2, 0x2, 0x50, 0x55, 0x7, 0x2f, 0x2, 0x2, 0x51, 0x55, 
    0x7, 0xd, 0x2, 0x2, 0x52, 0x55, 0x7, 0xf, 0x2, 0x2, 0x53, 0x55, 0x5, 
    0x1a, 0xe, 0x2, 0x54, 0x50, 0x3, 0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x5b, 0x7, 0x1a, 0x2, 0x2, 
    0x57, 0x5c, 0x7, 0x2f, 0x2, 0x2, 0x58, 0x5c, 0x7, 0xd, 0x2, 0x2, 0x59, 
    0x5c, 0x7, 0xf, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0x1a, 0xe, 0x2, 0x5b, 0x57, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x5e, 0x7, 0x23, 0x2, 0x2, 0x5e, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x60, 0x7, 0x2f, 0x2, 0x2, 0x60, 0x65, 0x7, 0x17, 0x2, 0x2, 
    0x61, 0x66, 0x7, 0x2f, 0x2, 0x2, 0x62, 0x66, 0x7, 0xd, 0x2, 0x2, 0x63, 
    0x66, 0x7, 0xf, 0x2, 0x2, 0x64, 0x66, 0x5, 0x1a, 0xe, 0x2, 0x65, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x6c, 0x7, 0x1c, 0x2, 0x2, 0x68, 0x6d, 0x7, 0x2f, 0x2, 
    0x2, 0x69, 0x6d, 0x7, 0xd, 0x2, 0x2, 0x6a, 0x6d, 0x7, 0xf, 0x2, 0x2, 
    0x6b, 0x6d, 0x5, 0x1a, 0xe, 0x2, 0x6c, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 
    0x2f, 0x2, 0x2, 0x6f, 0x74, 0x7, 0x1d, 0x2, 0x2, 0x70, 0x75, 0x7, 0x2f, 
    0x2, 0x2, 0x71, 0x75, 0x7, 0xd, 0x2, 0x2, 0x72, 0x75, 0x7, 0xf, 0x2, 
    0x2, 0x73, 0x75, 0x5, 0x1a, 0xe, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x3, 0x2, 0x2, 0x2, 0x76, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x77, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x7d, 0x7, 0x22, 0x2, 0x2, 0x79, 0x7e, 0x7, 0x2f, 
    0x2, 0x2, 0x7a, 0x7e, 0x7, 0xd, 0x2, 0x2, 0x7b, 0x7e, 0x7, 0xf, 0x2, 
    0x2, 0x7c, 0x7e, 0x5, 0x1a, 0xe, 0x2, 0x7d, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x84, 
    0x7, 0x1c, 0x2, 0x2, 0x80, 0x85, 0x7, 0x2f, 0x2, 0x2, 0x81, 0x85, 0x7, 
    0xd, 0x2, 0x2, 0x82, 0x85, 0x7, 0xf, 0x2, 0x2, 0x83, 0x85, 0x5, 0x1a, 
    0xe, 0x2, 0x84, 0x80, 0x3, 0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x23, 0x2, 0x2, 0x87, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x2f, 0x2, 0x2, 0x89, 0x8e, 
    0x7, 0x17, 0x2, 0x2, 0x8a, 0x8f, 0x7, 0x2f, 0x2, 0x2, 0x8b, 0x8f, 0x7, 
    0xd, 0x2, 0x2, 0x8c, 0x8f, 0x7, 0xf, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x1a, 
    0xe, 0x2, 0x8e, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 0x95, 0x7, 0x1e, 0x2, 0x2, 0x91, 
    0x96, 0x7, 0x2f, 0x2, 0x2, 0x92, 0x96, 0x7, 0xd, 0x2, 0x2, 0x93, 0x96, 
    0x7, 0xf, 0x2, 0x2, 0x94, 0x96, 0x5, 0x1a, 0xe, 0x2, 0x95, 0x91, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x92, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 0x96, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x2f, 0x2, 0x2, 0x98, 0x9d, 0x7, 0x1f, 0x2, 0x2, 
    0x99, 0x9e, 0x7, 0x2f, 0x2, 0x2, 0x9a, 0x9e, 0x7, 0xd, 0x2, 0x2, 0x9b, 
    0x9e, 0x7, 0xf, 0x2, 0x2, 0x9c, 0x9e, 0x5, 0x1a, 0xe, 0x2, 0x9d, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0x88, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa6, 0x7, 0x22, 0x2, 0x2, 
    0xa2, 0xa7, 0x7, 0x2f, 0x2, 0x2, 0xa3, 0xa7, 0x7, 0xd, 0x2, 0x2, 0xa4, 
    0xa7, 0x7, 0xf, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x1a, 0xe, 0x2, 0xa6, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xad, 0x7, 0x1e, 0x2, 0x2, 0xa9, 0xae, 0x7, 0x2f, 0x2, 
    0x2, 0xaa, 0xae, 0x7, 0xd, 0x2, 0x2, 0xab, 0xae, 0x7, 0xf, 0x2, 0x2, 
    0xac, 0xae, 0x5, 0x1a, 0xe, 0x2, 0xad, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 
    0x23, 0x2, 0x2, 0xb0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x2f, 
    0x2, 0x2, 0xb2, 0xb7, 0x7, 0x17, 0x2, 0x2, 0xb3, 0xb8, 0x7, 0x2f, 0x2, 
    0x2, 0xb4, 0xb8, 0x7, 0xd, 0x2, 0x2, 0xb5, 0xb8, 0x7, 0xf, 0x2, 0x2, 
    0xb6, 0xb8, 0x5, 0x1a, 0xe, 0x2, 0xb7, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbe, 0x7, 
    0x20, 0x2, 0x2, 0xba, 0xbf, 0x7, 0x2f, 0x2, 0x2, 0xbb, 0xbf, 0x7, 0xd, 
    0x2, 0x2, 0xbc, 0xbf, 0x7, 0xf, 0x2, 0x2, 0xbd, 0xbf, 0x5, 0x1a, 0xe, 
    0x2, 0xbe, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x2f, 0x2, 0x2, 0xc1, 0xc6, 
    0x7, 0x21, 0x2, 0x2, 0xc2, 0xc7, 0x7, 0x2f, 0x2, 0x2, 0xc3, 0xc7, 0x7, 
    0xd, 0x2, 0x2, 0xc4, 0xc7, 0x7, 0xf, 0x2, 0x2, 0xc5, 0xc7, 0x5, 0x1a, 
    0xe, 0x2, 0xc6, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x11, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcf, 
    0x7, 0x22, 0x2, 0x2, 0xcb, 0xd0, 0x7, 0x2f, 0x2, 0x2, 0xcc, 0xd0, 0x7, 
    0xd, 0x2, 0x2, 0xcd, 0xd0, 0x7, 0xf, 0x2, 0x2, 0xce, 0xd0, 0x5, 0x12, 
    0xa, 0x2, 0xcf, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xcc, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd6, 0x7, 0x20, 0x2, 0x2, 0xd2, 
    0xd7, 0x7, 0x2f, 0x2, 0x2, 0xd3, 0xd7, 0x7, 0xd, 0x2, 0x2, 0xd4, 0xd7, 
    0x7, 0xf, 0x2, 0x2, 0xd5, 0xd7, 0x5, 0x12, 0xa, 0x2, 0xd6, 0xd2, 0x3, 
    0x2, 0x2, 0x2, 0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xd9, 0x7, 0x23, 0x2, 0x2, 0xd9, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0xda, 0xdb, 0x7, 0x2f, 0x2, 0x2, 0xdb, 0xe0, 0x7, 0x17, 0x2, 0x2, 0xdc, 
    0xe1, 0x7, 0x2f, 0x2, 0x2, 0xdd, 0xe1, 0x7, 0xd, 0x2, 0x2, 0xde, 0xe1, 
    0x7, 0xf, 0x2, 0x2, 0xdf, 0xe1, 0x5, 0x1a, 0xe, 0x2, 0xe0, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xe7, 0x7, 0x29, 0x2, 0x2, 0xe3, 0xe8, 0x7, 0x2f, 0x2, 0x2, 
    0xe4, 0xe8, 0x7, 0xd, 0x2, 0x2, 0xe5, 0xe8, 0x7, 0xf, 0x2, 0x2, 0xe6, 
    0xe8, 0x5, 0x1a, 0xe, 0x2, 0xe7, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe4, 
    0x3, 0x2, 0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 
    0x2, 0x2, 0x2, 0xe8, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x2f, 
    0x2, 0x2, 0xea, 0xef, 0x7, 0x2a, 0x2, 0x2, 0xeb, 0xf0, 0x7, 0x2f, 0x2, 
    0x2, 0xec, 0xf0, 0x7, 0xd, 0x2, 0x2, 0xed, 0xf0, 0x7, 0xf, 0x2, 0x2, 
    0xee, 0xf0, 0x5, 0x1a, 0xe, 0x2, 0xef, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xee, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xf3, 0xf8, 0x7, 0x22, 0x2, 0x2, 0xf4, 0xf9, 0x7, 0x2f, 0x2, 
    0x2, 0xf5, 0xf9, 0x7, 0xd, 0x2, 0x2, 0xf6, 0xf9, 0x7, 0xf, 0x2, 0x2, 
    0xf7, 0xf9, 0x5, 0x1a, 0xe, 0x2, 0xf8, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf8, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf7, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xff, 0x7, 
    0x29, 0x2, 0x2, 0xfb, 0x100, 0x7, 0x2f, 0x2, 0x2, 0xfc, 0x100, 0x7, 
    0xd, 0x2, 0x2, 0xfd, 0x100, 0x7, 0xf, 0x2, 0x2, 0xfe, 0x100, 0x5, 0x1a, 
    0xe, 0x2, 0xff, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 
    0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x7, 0x23, 0x2, 0x2, 
    0x102, 0x17, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x7, 0x2f, 0x2, 0x2, 
    0x104, 0x105, 0x7, 0x17, 0x2, 0x2, 0x105, 0x10a, 0x7, 0x2b, 0x2, 0x2, 
    0x106, 0x10b, 0x7, 0x2f, 0x2, 0x2, 0x107, 0x10b, 0x7, 0xd, 0x2, 0x2, 
    0x108, 0x10b, 0x7, 0xf, 0x2, 0x2, 0x109, 0x10b, 0x5, 0x1a, 0xe, 0x2, 
    0x10a, 0x106, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x113, 0x5, 0x6, 0x4, 0x2, 0x10d, 
    0x113, 0x5, 0xa, 0x6, 0x2, 0x10e, 0x113, 0x5, 0xe, 0x8, 0x2, 0x10f, 
    0x113, 0x5, 0x12, 0xa, 0x2, 0x110, 0x113, 0x5, 0x16, 0xc, 0x2, 0x111, 
    0x113, 0x5, 0x18, 0xd, 0x2, 0x112, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x112, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x10f, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 
    0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x114, 0x11d, 
    0x5, 0x4, 0x3, 0x2, 0x115, 0x11d, 0x5, 0x8, 0x5, 0x2, 0x116, 0x11d, 
    0x5, 0xc, 0x7, 0x2, 0x117, 0x11d, 0x5, 0x10, 0x9, 0x2, 0x118, 0x11d, 
    0x5, 0x14, 0xb, 0x2, 0x119, 0x11d, 0x5, 0x18, 0xd, 0x2, 0x11a, 0x11d, 
    0x5, 0x1e, 0x10, 0x2, 0x11b, 0x11d, 0x5, 0x20, 0x11, 0x2, 0x11c, 0x114, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x117, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x11f, 0x9, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x7, 
    0x2f, 0x2, 0x2, 0x120, 0x121, 0x7, 0x17, 0x2, 0x2, 0x121, 0x122, 0x9, 
    0x3, 0x2, 0x2, 0x122, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x2f, 
    0x2, 0x2, 0x124, 0x129, 0x7, 0x17, 0x2, 0x2, 0x125, 0x12a, 0x7, 0x2f, 
    0x2, 0x2, 0x126, 0x12a, 0x7, 0xd, 0x2, 0x2, 0x127, 0x12a, 0x7, 0xf, 
    0x2, 0x2, 0x128, 0x12a, 0x5, 0x1a, 0xe, 0x2, 0x129, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x126, 0x3, 0x2, 0x2, 0x2, 0x129, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x129, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x12b, 0x12f, 0x5, 0x24, 0x13, 0x2, 0x12c, 0x12f, 0x5, 0x26, 0x14, 
    0x2, 0x12d, 0x12f, 0x5, 0x28, 0x15, 0x2, 0x12e, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x23, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x9, 0x2, 0x2, 
    0x131, 0x132, 0x7, 0x22, 0x2, 0x2, 0x132, 0x133, 0x7, 0x2f, 0x2, 0x2, 
    0x133, 0x134, 0x7, 0x27, 0x2, 0x2, 0x134, 0x135, 0x7, 0x2f, 0x2, 0x2, 
    0x135, 0x136, 0x7, 0x10, 0x2, 0x2, 0x136, 0x137, 0x9, 0x4, 0x2, 0x2, 
    0x137, 0x138, 0x7, 0x27, 0x2, 0x2, 0x138, 0x139, 0x9, 0x3, 0x2, 0x2, 
    0x139, 0x13a, 0x7, 0x23, 0x2, 0x2, 0x13a, 0x143, 0x7, 0x24, 0x2, 0x2, 
    0x13b, 0x13e, 0x5, 0x1c, 0xf, 0x2, 0x13c, 0x13e, 0x5, 0x22, 0x12, 0x2, 
    0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13c, 0x3, 0x2, 0x2, 0x2, 
    0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x19, 0x2, 0x2, 
    0x140, 0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13d, 0x3, 0x2, 0x2, 0x2, 
    0x142, 0x145, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x143, 0x144, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x25, 0x2, 0x2, 
    0x147, 0x25, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x7, 0xa, 0x2, 0x2, 0x149, 
    0x14a, 0x7, 0x22, 0x2, 0x2, 0x14a, 0x14b, 0x9, 0x4, 0x2, 0x2, 0x14b, 
    0x14c, 0x7, 0x10, 0x2, 0x2, 0x14c, 0x14d, 0x9, 0x4, 0x2, 0x2, 0x14d, 
    0x14e, 0x7, 0x23, 0x2, 0x2, 0x14e, 0x158, 0x7, 0x24, 0x2, 0x2, 0x14f, 
    0x152, 0x5, 0x1c, 0xf, 0x2, 0x150, 0x152, 0x5, 0x22, 0x12, 0x2, 0x151, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x154, 0x3, 0x2, 0x2, 0x2, 0x153, 0x155, 0x7, 0x19, 0x2, 0x2, 0x154, 
    0x153, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 
    0x157, 0x3, 0x2, 0x2, 0x2, 0x156, 0x151, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x15a, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x25, 0x2, 0x2, 0x15c, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x167, 0x7, 0x24, 0x2, 0x2, 0x15e, 
    0x161, 0x5, 0x1c, 0xf, 0x2, 0x15f, 0x161, 0x5, 0x22, 0x12, 0x2, 0x160, 
    0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x7, 0x19, 0x2, 0x2, 0x163, 
    0x162, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x165, 0x160, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x169, 
    0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x25, 0x2, 0x2, 0x16b, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2c, 0x2f, 0x33, 0x3c, 0x43, 0x4b, 
    0x4d, 0x54, 0x5b, 0x65, 0x6c, 0x74, 0x76, 0x7d, 0x84, 0x8e, 0x95, 0x9d, 
    0x9f, 0xa6, 0xad, 0xb7, 0xbe, 0xc6, 0xc8, 0xcf, 0xd6, 0xe0, 0xe7, 0xef, 
    0xf1, 0xf8, 0xff, 0x10a, 0x112, 0x11c, 0x129, 0x12e, 0x13d, 0x143, 0x151, 
    0x154, 0x158, 0x160, 0x163, 0x167, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GlebParser::Initializer GlebParser::_init;
