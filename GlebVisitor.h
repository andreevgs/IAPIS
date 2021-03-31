//
// Created by gleb on 4.03.21.
//

#ifndef LANG_HELLOVISITOR_H
#define LANG_HELLOVISITOR_H
#include "GlebParserBaseVisitor.h"
#include "Tree.h"

using namespace antlrcpptest;

class GlebVisitor : public GlebParserBaseVisitor{
private:
    std::vector<std::string> Tokens;
    Tree* tree;
    int level;
public:
    antlrcpp::Any visitMain(GlebParser::MainContext *ctx) override;

    antlrcpp::Any visitSummOperation(GlebParser::SummOperationContext *ctx) override;

    antlrcpp::Any visitSumm(GlebParser::SummContext *ctx) override;

    antlrcpp::Any visitDiffOperation(GlebParser::DiffOperationContext *ctx) override;

    antlrcpp::Any visitDiff(GlebParser::DiffContext *ctx) override;

    antlrcpp::Any visitMultOperation(GlebParser::MultOperationContext *ctx) override;

    antlrcpp::Any visitMult(GlebParser::MultContext *ctx) override;

    antlrcpp::Any visitDivOperation(GlebParser::DivOperationContext *ctx) override;

    antlrcpp::Any visitDiv(GlebParser::DivContext *ctx) override;

    antlrcpp::Any visitInPowOperation(GlebParser::InPowOperationContext *ctx) override;

    antlrcpp::Any visitInPow(GlebParser::InPowContext *ctx) override;

    antlrcpp::Any visitInSqrt(GlebParser::InSqrtContext *ctx) override;

    antlrcpp::Any visitOperation(GlebParser::OperationContext *ctx) override;

    antlrcpp::Any visitMath(GlebParser::MathContext *ctx) override;

    antlrcpp::Any visitCreate(GlebParser::CreateContext *ctx) override;

    antlrcpp::Any visitAss(GlebParser::AssContext *ctx) override;

    antlrcpp::Any visitExpr(GlebParser::ExprContext *ctx) override;

    antlrcpp::Any visitForCycle(GlebParser::ForCycleContext *ctx) override;

    antlrcpp::Any visitIfExpr(GlebParser::IfExprContext *ctx) override;

    antlrcpp::Any visitBlock(GlebParser::BlockContext *ctx) override;

    void SetTree(Tree&);
};


#endif //LANG_HELLOVISITOR_H
