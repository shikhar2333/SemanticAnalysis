
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitRoot(ExprParser::RootContext *context) = 0;

    virtual antlrcpp::Any visitBlankdeclaration(ExprParser::BlankdeclarationContext *context) = 0;

    virtual antlrcpp::Any visitGlobaldeclaration(ExprParser::GlobaldeclarationContext *context) = 0;

    virtual antlrcpp::Any visitListFuncDec(ExprParser::ListFuncDecContext *context) = 0;

    virtual antlrcpp::Any visitList_args(ExprParser::List_argsContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ExprParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitAssignStatement(ExprParser::AssignStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclareStatement(ExprParser::DeclareStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(ExprParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitExprStatement(ExprParser::ExprStatementContext *context) = 0;

    virtual antlrcpp::Any visitWriteStatement(ExprParser::WriteStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalStatement(ExprParser::ConditionalStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileloopStatement(ExprParser::WhileloopStatementContext *context) = 0;

    virtual antlrcpp::Any visitForloopStatement(ExprParser::ForloopStatementContext *context) = 0;

    virtual antlrcpp::Any visitReadStatement(ExprParser::ReadStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(ExprParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitContinueStatement(ExprParser::ContinueStatementContext *context) = 0;

    virtual antlrcpp::Any visitVarAssignment(ExprParser::VarAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitAssign2DArrayExpr(ExprParser::Assign2DArrayExprContext *context) = 0;

    virtual antlrcpp::Any visitAssignArrayExpr(ExprParser::AssignArrayExprContext *context) = 0;

    virtual antlrcpp::Any visitPrinter(ExprParser::PrinterContext *context) = 0;

    virtual antlrcpp::Any visitInput(ExprParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitVarInput(ExprParser::VarInputContext *context) = 0;

    virtual antlrcpp::Any visitArray2DInput(ExprParser::Array2DInputContext *context) = 0;

    virtual antlrcpp::Any visitArrayInput(ExprParser::ArrayInputContext *context) = 0;

    virtual antlrcpp::Any visitBreak_stmnt(ExprParser::Break_stmntContext *context) = 0;

    virtual antlrcpp::Any visitCont_stmnt(ExprParser::Cont_stmntContext *context) = 0;

    virtual antlrcpp::Any visitWhile_loop(ExprParser::While_loopContext *context) = 0;

    virtual antlrcpp::Any visitFor_loop(ExprParser::For_loopContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitIf_else(ExprParser::If_elseContext *context) = 0;

    virtual antlrcpp::Any visitElse_part(ExprParser::Else_partContext *context) = 0;

    virtual antlrcpp::Any visitBlockOrStatement(ExprParser::BlockOrStatementContext *context) = 0;

    virtual antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitArrayDeclaration(ExprParser::ArrayDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitD2arrayDeclaration(ExprParser::D2arrayDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitArrayAssignment(ExprParser::ArrayAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitD2arrayAssignment(ExprParser::D2arrayAssignmentContext *context) = 0;

    virtual antlrcpp::Any visitVarassign(ExprParser::VarassignContext *context) = 0;

    virtual antlrcpp::Any visitNotCond(ExprParser::NotCondContext *context) = 0;

    virtual antlrcpp::Any visitRelopExpr(ExprParser::RelopExprContext *context) = 0;

    virtual antlrcpp::Any visitAndOrCond(ExprParser::AndOrCondContext *context) = 0;

    virtual antlrcpp::Any visitParanCond(ExprParser::ParanCondContext *context) = 0;

    virtual antlrcpp::Any visitPreIncDec2DArr(ExprParser::PreIncDec2DArrContext *context) = 0;

    virtual antlrcpp::Any visitVarnameExpr(ExprParser::VarnameExprContext *context) = 0;

    virtual antlrcpp::Any visitCharExpr(ExprParser::CharExprContext *context) = 0;

    virtual antlrcpp::Any visitPreIncDecArr(ExprParser::PreIncDecArrContext *context) = 0;

    virtual antlrcpp::Any visitModExpr(ExprParser::ModExprContext *context) = 0;

    virtual antlrcpp::Any visitPlusMinusExpr(ExprParser::PlusMinusExprContext *context) = 0;

    virtual antlrcpp::Any visitArrayValExpr(ExprParser::ArrayValExprContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyExpr(ExprParser::MultiplyExprContext *context) = 0;

    virtual antlrcpp::Any visitPostIncDecArr(ExprParser::PostIncDecArrContext *context) = 0;

    virtual antlrcpp::Any visitFunc_call(ExprParser::Func_callContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(ExprParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitPostIncDecExpr(ExprParser::PostIncDecExprContext *context) = 0;

    virtual antlrcpp::Any visitConstIntExpr(ExprParser::ConstIntExprContext *context) = 0;

    virtual antlrcpp::Any visitShiftOpExpr(ExprParser::ShiftOpExprContext *context) = 0;

    virtual antlrcpp::Any visitAddExpr(ExprParser::AddExprContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOpExpr(ExprParser::BitwiseOpExprContext *context) = 0;

    virtual antlrcpp::Any visitPreIncDecExpr(ExprParser::PreIncDecExprContext *context) = 0;

    virtual antlrcpp::Any visitDivExpr(ExprParser::DivExprContext *context) = 0;

    virtual antlrcpp::Any visitEqaulExpr(ExprParser::EqaulExprContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpr(ExprParser::BoolExprContext *context) = 0;

    virtual antlrcpp::Any visitPostIncDec2DArr(ExprParser::PostIncDec2DArrContext *context) = 0;

    virtual antlrcpp::Any visitD2ArrayValExpr(ExprParser::D2ArrayValExprContext *context) = 0;

    virtual antlrcpp::Any visitRet(ExprParser::RetContext *context) = 0;

    virtual antlrcpp::Any visitArray_ref(ExprParser::Array_refContext *context) = 0;

    virtual antlrcpp::Any visitParams_list(ExprParser::Params_listContext *context) = 0;

    virtual antlrcpp::Any visitDatatype(ExprParser::DatatypeContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(ExprParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitCaller(ExprParser::CallerContext *context) = 0;


};

