
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoot(ExprParser::RootContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlankdeclaration(ExprParser::BlankdeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobaldeclaration(ExprParser::GlobaldeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitListFuncDec(ExprParser::ListFuncDecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitList_args(ExprParser::List_argsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(ExprParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignStatement(ExprParser::AssignStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclareStatement(ExprParser::DeclareStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(ExprParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprStatement(ExprParser::ExprStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteStatement(ExprParser::WriteStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalStatement(ExprParser::ConditionalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileloopStatement(ExprParser::WhileloopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForloopStatement(ExprParser::ForloopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReadStatement(ExprParser::ReadStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(ExprParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitContinueStatement(ExprParser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarAssignment(ExprParser::VarAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign2DArrayExpr(ExprParser::Assign2DArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignArrayExpr(ExprParser::AssignArrayExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrinter(ExprParser::PrinterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInput(ExprParser::InputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarInput(ExprParser::VarInputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray2DInput(ExprParser::Array2DInputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayInput(ExprParser::ArrayInputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak_stmnt(ExprParser::Break_stmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCont_stmnt(ExprParser::Cont_stmntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile_loop(ExprParser::While_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFor_loop(ExprParser::For_loopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_else(ExprParser::If_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElse_part(ExprParser::Else_partContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockOrStatement(ExprParser::BlockOrStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayDeclaration(ExprParser::ArrayDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitD2arrayDeclaration(ExprParser::D2arrayDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayAssignment(ExprParser::ArrayAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitD2arrayAssignment(ExprParser::D2arrayAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarassign(ExprParser::VarassignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotCond(ExprParser::NotCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelopExpr(ExprParser::RelopExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndOrCond(ExprParser::AndOrCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParanCond(ExprParser::ParanCondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIncDec2DArr(ExprParser::PreIncDec2DArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarnameExpr(ExprParser::VarnameExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharExpr(ExprParser::CharExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIncDecArr(ExprParser::PreIncDecArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModExpr(ExprParser::ModExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusMinusExpr(ExprParser::PlusMinusExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayValExpr(ExprParser::ArrayValExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplyExpr(ExprParser::MultiplyExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncDecArr(ExprParser::PostIncDecArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_call(ExprParser::Func_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(ExprParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncDecExpr(ExprParser::PostIncDecExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConstIntExpr(ExprParser::ConstIntExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftOpExpr(ExprParser::ShiftOpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddExpr(ExprParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseOpExpr(ExprParser::BitwiseOpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIncDecExpr(ExprParser::PreIncDecExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivExpr(ExprParser::DivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqaulExpr(ExprParser::EqaulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBoolExpr(ExprParser::BoolExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncDec2DArr(ExprParser::PostIncDec2DArrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitD2ArrayValExpr(ExprParser::D2ArrayValExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(ExprParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_ref(ExprParser::Array_refContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParams_list(ExprParser::Params_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDatatype(ExprParser::DatatypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(ExprParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaller(ExprParser::CallerContext *ctx) override {
    return visitChildren(ctx);
  }


};

