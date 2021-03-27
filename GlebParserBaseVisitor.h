/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/Gleb/GlebParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "GlebParserVisitor.h"


namespace antlrcpptest {

/**
 * This class provides an empty implementation of GlebParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GlebParserBaseVisitor : public GlebParserVisitor {
public:

  virtual antlrcpp::Any visitMain(GlebParser::MainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSummOperation(GlebParser::SummOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSumm(GlebParser::SummContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiffOperation(GlebParser::DiffOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiff(GlebParser::DiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultOperation(GlebParser::MultOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(GlebParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivOperation(GlebParser::DivOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(GlebParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPowOperation(GlebParser::InPowOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInPow(GlebParser::InPowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInSqrt(GlebParser::InSqrtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperation(GlebParser::OperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMath(GlebParser::MathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCreate(GlebParser::CreateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAss(GlebParser::AssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(GlebParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForCycle(GlebParser::ForCycleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfExpr(GlebParser::IfExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(GlebParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace antlrcpptest
