/*Author : Tsimofei Kinevich, group : 821703*/

// Generated from /home/tima/Gleb/GlebParser.g4 by ANTLR 4.9.1

#pragma once


#include "antlr4-runtime.h"
#include "GlebParser.h"


namespace antlrcpptest {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by GlebParser.
 */
class  GlebParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GlebParser.
   */
    virtual antlrcpp::Any visitMain(GlebParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitSummOperation(GlebParser::SummOperationContext *context) = 0;

    virtual antlrcpp::Any visitSumm(GlebParser::SummContext *context) = 0;

    virtual antlrcpp::Any visitDiffOperation(GlebParser::DiffOperationContext *context) = 0;

    virtual antlrcpp::Any visitDiff(GlebParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitMultOperation(GlebParser::MultOperationContext *context) = 0;

    virtual antlrcpp::Any visitMult(GlebParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitDivOperation(GlebParser::DivOperationContext *context) = 0;

    virtual antlrcpp::Any visitDiv(GlebParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitInPowOperation(GlebParser::InPowOperationContext *context) = 0;

    virtual antlrcpp::Any visitInPow(GlebParser::InPowContext *context) = 0;

    virtual antlrcpp::Any visitInSqrt(GlebParser::InSqrtContext *context) = 0;

    virtual antlrcpp::Any visitOperation(GlebParser::OperationContext *context) = 0;

    virtual antlrcpp::Any visitMath(GlebParser::MathContext *context) = 0;

    virtual antlrcpp::Any visitCreate(GlebParser::CreateContext *context) = 0;

    virtual antlrcpp::Any visitAss(GlebParser::AssContext *context) = 0;

    virtual antlrcpp::Any visitExpr(GlebParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitForCycle(GlebParser::ForCycleContext *context) = 0;

    virtual antlrcpp::Any visitIfExpr(GlebParser::IfExprContext *context) = 0;

    virtual antlrcpp::Any visitBlock(GlebParser::BlockContext *context) = 0;


};

}  // namespace antlrcpptest
