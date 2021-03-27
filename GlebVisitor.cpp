//
// Created by tima on 4.03.21.
//

#include "GlebVisitor.h"
using namespace antlrcpptest;

antlrcpp::Any GlebVisitor::visitMain(GlebParser::MainContext *ctx) {
    level = 0;
    Tokens.emplace_back("main");
    tree->addElement(Tokens,level);
    Tokens.clear();
    return visitChildren(ctx);
}

antlrcpp::Any GlebVisitor::visitSumm(GlebParser::SummContext *ctx) {
    level++;
    Tokens.emplace_back("summ");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
return nullptr;
}

antlrcpp::Any GlebVisitor::visitDiff(GlebParser::DiffContext *ctx) {
    level++;
    Tokens.emplace_back("diff");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitMult(GlebParser::MultContext *ctx) {
    level++;
    Tokens.emplace_back("mult");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitDiv(GlebParser::DivContext *ctx) {
    level++;
    Tokens.emplace_back("devide");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitInPow(GlebParser::InPowContext *ctx){
    level++;
    Tokens.emplace_back("impow");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitInSqrt(GlebParser::InSqrtContext *ctx){
    level++;
    Tokens.emplace_back("insqrt");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitOperation(GlebParser::OperationContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any GlebVisitor::visitCreate(GlebParser::CreateContext *ctx) {
    level++;
    Tokens.emplace_back("create");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitAss(GlebParser::AssContext *ctx) {
    level++;
    Tokens.emplace_back("assign");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitExpr(GlebParser::ExprContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any GlebVisitor::visitForCycle(GlebParser::ForCycleContext *ctx) {
    level++;
    Tokens.emplace_back("for");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
        if(i->toString() == "{"){
            break;
        }
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitIfExpr(GlebParser::IfExprContext *ctx) {
    level++;
    Tokens.emplace_back("if");
    for(auto i : ctx->children){
        Tokens.push_back(i->toString());
        if(i->toString() == "{"){
            break;
        }
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

void GlebVisitor::SetTree(Tree & myTree){
    tree = &myTree;
}

antlrcpp::Any GlebVisitor::visitMath(GlebParser::MathContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any GlebVisitor::visitBlock(GlebParser::BlockContext *ctx) {
    level++;
    Tokens.emplace_back("block");
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitSummOperation(GlebParser::SummOperationContext *ctx) {
    level++;
    Tokens.emplace_back("summOp");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitDiffOperation(GlebParser::DiffOperationContext *ctx) {
    level++;
    Tokens.emplace_back("diffOp");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitMultOperation(GlebParser::MultOperationContext *ctx) {
    level++;
    Tokens.emplace_back("multOp");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitDivOperation(GlebParser::DivOperationContext *ctx) {
    level++;
    Tokens.emplace_back("divOp");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

antlrcpp::Any GlebVisitor::visitInPowOperation(GlebParser::InPowOperationContext *ctx) {
    level++;
    Tokens.emplace_back("powOp");
    for(auto i : ctx->children){
        if(i->toString()[0] == '['){
            Tokens.emplace_back("OP");
            continue;
        }
        Tokens.push_back(i->toString());
    }
    tree->addElement(Tokens,level);
    Tokens.clear();
    visitChildren(ctx);
    level--;
    return nullptr;
}

