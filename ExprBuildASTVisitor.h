#include <iostream>
#include "ast.h"
#include <vector>
#include "ExprVisitor.h"

using namespace std;

class ExprBuildASTVisitor : public ExprVisitor
{
public:
  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override
  {
      cout << "In visitProg" << endl;
      ASTProg *node = new ASTProg();
      node->root = visit(ctx->root());
      //cout<<"Exit visitProg"<<'\n';
      // if(!pro)
      //     cout<<"Seg Fault"<<'\n';
      // if(dynamic_cast<ASTGlobalDecl*>(pro) )
      //     cout<<"Global Decl"<<'\n';
      // if(dynamic_cast<ASTFuncDec*>(pro) )
      //     cout<<"Func Decl"<<'\n';
      // if(dynamic_cast<ASTBlank*>(pro) )
      //     cout<<"Blank Decl"<<'\n';
      return node;
  }

  virtual antlrcpp::Any visitRoot(ExprParser::RootContext *ctx) override
  {
      cout<<"In visitRoot"<<'\n';
      if(!ctx->func_declaration().empty())
      {
        //cout<<"In FuncDec"<<'\n';
        ASTFuncDec* node = new ASTFuncDec();
        ASTListFuncDec *funcNode;
        for (auto func : ctx->func_declaration())
        {
            funcNode = visit(func);
            if (funcNode != nullptr)
            {
                node->FuncDecList.push_back(funcNode);
            }
        }
        //cout<<"Exit FuncDec"<<'\n';
        return (ASTRoot*)node;
      }
      if(ctx->globaldeclaration())
      {
        //cout<<"In GlobalDeclaration"<<'\n';
        ASTGlobalDecl* node = visit(ctx->globaldeclaration());
        //cout<<"Exit globaldeclration"<<'\n';
        return (ASTRoot*)node;
      }
      if(ctx->blankdeclaration())
      {
        //cout<<"In blankdeclaration"<<'\n';
        ASTBlank* node = visit(ctx->blankdeclaration());
        return (ASTRoot*)node;
      }
      // for(auto f: node->FuncDecList)
      // {
      //   cout<<f->funcname<<'\n';
      // }
      assert(0 && "Error in visitRoot");
      return nullptr;
  }
   
  virtual antlrcpp::Any visitGlobaldeclaration(ExprParser::GlobaldeclarationContext *ctx) override
  {
    cout<<"In visitGlobaldeclaration"<<'\n';
    ASTGlobalDecl *node = new ASTGlobalDecl();
    node->datatype = ctx->datatype()->getText();
    ASTIndividualDecl * individualNode;
    for(auto child: ctx->individualDeclaration())
    {
        individualNode = visit(child);
        if(individualNode != nullptr)
        {
          node->DeclStatementList.push_back(individualNode);
        }
    }
    if(ctx->root())
      node->root = visit(ctx->root());
    //cout<<"Exit visitGlobalDeclaration"<<'\n';
    return node;
  }
  virtual antlrcpp::Any visitBlankdeclaration(ExprParser::BlankdeclarationContext *ctx) override 
  {
    cout<<"In visitBlankdeclaration"<<'\n';
    ASTBlank *node = new ASTBlank();
    return node;
  }
  virtual antlrcpp::Any visitListFuncDec(ExprParser::ListFuncDecContext *ctx) override 
  {
    cout<<"In visitListFuncDec"<<'\n';
    ASTListFuncDec* node = new ASTListFuncDec();
    node->datatype = ctx->datatype()->getText();
    node->funcname = ctx->VAR_NAME()->getText();
    node->params_list = visit(ctx->list_args());
    node->block = visit(ctx->block());
    //cout<<"Exit visitListFuncDec"<<'\n';
    return node;
  }

  virtual antlrcpp::Any visitList_args(ExprParser::List_argsContext *ctx) override
  {
    cout<<"In visitList_args"<<'\n';
    ASTListArgs *node = new ASTListArgs();
    for (int i=0; i < ctx->datatype().size(); i++)
    {
        ASTParams *params_node = new ASTParams();
        params_node->datatype.assign(ctx->datatype()[i]->getText());
        params_node->varname.assign(ctx->VAR_NAME()[i]->getText());
        node->params_list.push_back(params_node);
    }
    //cout<<"Exit visitList_args"<<'\n';
    return node;
  }

  virtual antlrcpp::Any visitBlock(ExprParser::BlockContext *ctx) override
  {
    cout<<"In visitBlock"<<'\n';
    ASTBlock *node = new ASTBlock();
    ASTStat * statnode;
    for(auto stat: ctx->statement())
    {
        statnode = visit(stat);
        if (statnode != nullptr)
        {
            node->statementList.push_back(statnode);
        }
    }
    //cout<<"Exit Block"<<'\n';
    return node;
  }

  // virtual antlrcpp::Any visitFunccallStatement(ExprParser::FunccallStatementContext *ctx) override
  // {
  //   return visit(ctx->call());
  // }

  virtual antlrcpp::Any visitAssignStatement(ExprParser::AssignStatementContext *ctx) override
  {
    cout<<"In visitAssignStatement"<<'\n';
    ASTAssignStatement *node = new ASTAssignStatement();
    node->assignment = visit(ctx->assignment());
    return (ASTStat *) node;
  }

  virtual antlrcpp::Any visitDeclareStatement(ExprParser::DeclareStatementContext *ctx) override
  {
    cout<<"Statment Declaration List"<<'\n';
    return visit(ctx->declaration());
  }
  virtual antlrcpp::Any visitReturnStatement(ExprParser::ReturnStatementContext *ctx) override
  {
    cout<<"In visitReturnStatement"<<'\n';
    return visit(ctx->ret());
  }

  virtual antlrcpp::Any visitExprStatement(ExprParser::ExprStatementContext *ctx) override
  {
    cout<<"In visitExprStatement "<<'\n';
    ASTExprStat* node = new ASTExprStat();
    node->node = visit(ctx->expr());
    // cout<<"Expression"<<'\n';
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitWriteStatement(ExprParser::WriteStatementContext *ctx) override
  {
    cout<<"In visitWriteStatement"<<'\n';
    return visit(ctx->printer());
  }

  virtual antlrcpp::Any visitConditionalStatement(ExprParser::ConditionalStatementContext *ctx) override
  {
    cout<<"In visitConditionalStatement"<<'\n';
    return (ASTStat*) visit(ctx->if_else());
  }

  virtual antlrcpp::Any visitWhileloopStatement(ExprParser::WhileloopStatementContext *ctx) override 
  {
    cout<<"In visitWhileloopStatement"<<'\n';
    return visit(ctx->while_loop());
  }

  virtual antlrcpp::Any visitForloopStatement(ExprParser::ForloopStatementContext *ctx) override
  {
    cout<<"In visitForloopStatement"<<'\n';
    return visit(ctx->for_loop());
  }

  virtual antlrcpp::Any visitReadStatement(ExprParser::ReadStatementContext *ctx) override
  {
    cout<<"In visitReadStatement"<<'\n';
    return visit(ctx->input());
  }

  virtual antlrcpp::Any visitVarInput(ExprParser::VarInputContext *ctx) override 
  {
    cout<<"In visitVarInput"<<'\n';
    ASTVarInput *node = new ASTVarInput();
    node->varname = visit(ctx->identifier());    
    return (ASTInputArgs *)node;
  }

  virtual antlrcpp::Any visitArray2DInput(ExprParser::Array2DInputContext *ctx) override 
  {
    cout<<"In visitArray2DInput"<<'\n';
    ASTArray2DInput *node = new ASTArray2DInput();
    node->varname = visit(ctx->identifier());
    node->expr1 = visit(ctx->expr(0));
    node->expr2 = visit(ctx->expr(1));
    return (ASTInputArgs *)node;
  }

  virtual antlrcpp::Any visitArrayInput(ExprParser::ArrayInputContext *ctx) override 
  {
    cout<<"In visitArrayInput"<<'\n';
    ASTArrayInput *node = new ASTArrayInput();
    node->varname = visit(ctx->identifier());
    node->expr = visit(ctx->expr());
    return (ASTInputArgs *)node;
  }

  virtual antlrcpp::Any visitBreakStatement(ExprParser::BreakStatementContext *ctx) override
  {
    cout<<"In visitBreakStatement"<<'\n';
    return visit(ctx->break_stmnt());
  }

  virtual antlrcpp::Any visitContinueStatement(ExprParser::ContinueStatementContext *ctx) override
  {
    cout<<"In visitContinueStatement"<<'\n';
    return visit(ctx->cont_stmnt());
  }

  // virtual antlrcpp::Any visitCall(ExprParser::CallContext *ctx) override
  // {
  //   cout<<"In visitCall"<<'\n';
  //   ASTFuncCallStatement *node = new ASTFuncCallStatement();
  //   node->funcname = ctx->VAR_NAME()->getText();
  //   node->params_list = visit(ctx->params_list());
  //   return (ASTStat *)node;
  // }

  virtual antlrcpp::Any visitPrinter(ExprParser::PrinterContext *ctx) override
  {
    //cout<<"In visitPrinter"<<'\n';
    ASTWriteStatement *node = new ASTWriteStatement();
    for(auto str: ctx->STRING())
    {
      node->string_expr.push_back(str->getText());
    }
    ASTExpr *exprnode;
    for(auto expr: ctx->expr())
    {
      exprnode = visit(expr);
      node->ExprList.push_back(exprnode);
    }
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitInput(ExprParser::InputContext *ctx) override
  {
    cout<<"In visitInput"<<'\n';
    ASTReadStatement *node = new ASTReadStatement();
    node->InputArgs = visit(ctx->inputargs());
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitBreak_stmnt(ExprParser::Break_stmntContext *ctx) override 
  {
    cout<<"In visitBreak_stmnt"<<'\n';
    ASTBreak* node = new ASTBreak();
    return (ASTStat *) node;
  }

  virtual antlrcpp::Any visitCont_stmnt(ExprParser::Cont_stmntContext *ctx) override 
  {
    cout<<"In visitCont_stmnt"<<'\n';
    ASTContinue* node = new ASTContinue();
    return (ASTStat *) node;
  }

  virtual antlrcpp::Any visitWhile_loop(ExprParser::While_loopContext *ctx) override
  {
    cout<<"In visitWhile_loop"<<'\n';
    ASTWhile* node = new ASTWhile();
    node->cond = visit(ctx->condition());
    node->blockOrStatement = visit(ctx->blockOrStatement());
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitFor_loop(ExprParser::For_loopContext *ctx) override
  {
    cout<<"In visitFor_loop"<<'\n';
    ASTFor* node = new ASTFor();
    node->var1 = visit(ctx->varassign(0));
    node->cond = visit(ctx->condition());
    node->var2 = visit(ctx->varassign(1));
    node->blockOrStatement = visit(ctx->blockOrStatement());
    return (ASTStat *)node;
  }
  virtual antlrcpp::Any visitVarassign(ExprParser::VarassignContext *ctx) override
  {
    cout<<"In visitVarassign"<<'\n';
    ASTVarAssign* node = new ASTVarAssign();
    node->varname = visit(ctx->identifier());
    // cout<<node->varname<<'\n';
    node->expr = visit(ctx->expr());
    // cout<<"exit"<<'\n';
    return node;
  }
  virtual antlrcpp::Any visitVarAssignment(ExprParser::VarAssignmentContext *ctx) override
  {
    cout<<"In visitVarAssignment"<<'\n';
    ASTVarAssignment* node = new ASTVarAssignment();
    node->varname = visit(ctx->identifier());
    node->expr = visit(ctx->expr());
    return (ASTAssignment *) node;
  }
  virtual antlrcpp::Any visitDeclaration(ExprParser::DeclarationContext *ctx) override
  {
    cout<<"In visitDeclaration"<<'\n';
    ASTDeclStatement * node = new ASTDeclStatement();
    node->datatype = ctx->datatype()->getText();
    ASTIndividualDecl * individualNode;
    for(auto child: ctx->individualDeclaration())
    {
        individualNode = visit(child);
        if(individualNode != nullptr)
        {
          node->DeclStatementList.push_back(individualNode);
        }
    }
    // cout<<"return"<<'\n';
    return ( ASTStat*)node;
    // return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_else(ExprParser::If_elseContext *ctx) override
  {
    cout<<"In visitIf_else"<<'\n';
    ASTIf* node = new ASTIf();
    node->cond = visit(ctx->condition());
    //cout<<"EXIT IF"<<'\n';
    node->blockOrStatement = visit(ctx->blockOrStatement());
    if(ctx->else_part() != nullptr)
    {
      node->ElsePart = visit(ctx->else_part());
    }
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitElse_part(ExprParser::Else_partContext *ctx) override
  {
    cout<<"In visitElse_part"<<'\n';
    ASTElse * node = new ASTElse();
    node->blockOrStatement = visit(ctx->blockOrStatement());
    return node;
  }

  virtual antlrcpp::Any visitBlockOrStatement(ExprParser::BlockOrStatementContext *ctx) override
  {
    cout<<"In visitBlockOrStatement"<<'\n';
    ASTBlockOrStatement* node = new ASTBlockOrStatement();
    if(ctx->block() != nullptr)
    {
      node->block =  visit(ctx->block());  
    }
    if(ctx->statement() != nullptr)
    {
      node->statement = visit(ctx->statement());
    }
    return node;
  }

  virtual antlrcpp::Any visitVarDeclaration(ExprParser::VarDeclarationContext *ctx) override
  {
    cout<<"In visitVarDeclaration"<<'\n';
    ASTVarDecl* node = new ASTVarDecl();
    node->varname = ctx->VAR_NAME()->getText();
    // cout<<"badcast"<<'\n';
    if(ctx->expr() != nullptr)
      node->expr = visit(ctx->expr());
    // cout<<"badcast"<<'\n';
    return (ASTIndividualDecl* ) node;
  }

  virtual antlrcpp::Any visitArray_ref(ExprParser::Array_refContext *ctx) override
  {
    cout<<"In visitArray_ref"<<'\n';
    ASTArrayRef *node = new ASTArrayRef();
    node->assign = ctx->ASSIGN()->getText();
    ASTExpr *exprnode;
    for(auto expr : ctx->expr())
    {
        exprnode = visit(expr);
        if(exprnode != nullptr)
        {
          node->expr.push_back(exprnode);
        }
    }
    return node;
  }

  virtual antlrcpp::Any visitArrayDeclaration(ExprParser::ArrayDeclarationContext *ctx) override
  {
    cout<<"In visitArrayDeclaration"<<'\n';
    ASTArrayDeclaration *node = new ASTArrayDeclaration();
    node->varname = ctx->VAR_NAME()->getText();
    cout<<"Array name: "<<node->varname<<'\n';
    node->int_const = stoi(ctx->INT_CONST()->getText());
    auto ptr = ctx->array_ref();
    if(ptr != nullptr)
      node->array_ref = visit(ptr);
    return (ASTIndividualDecl *)node;
  }

  virtual antlrcpp::Any visitD2arrayDeclaration(ExprParser::D2arrayDeclarationContext *ctx) override
  {
    cout<<"In visitD2ArrayDeclaration"<<'\n';
    ASTD2ArrayDeclaration *node = new ASTD2ArrayDeclaration();
    node->varname = ctx->VAR_NAME()->getText();
    cout<<"Array name: "<<node->varname<<'\n';
    node->int_const1 = stoi(ctx->INT_CONST(0)->getText());
    node->int_const2 = stoi(ctx->INT_CONST(1)->getText());
    auto ptr = ctx->array_ref();
    if(ptr != nullptr)
      node->array_ref = visit(ptr);
    return (ASTIndividualDecl *)node;
  }

  virtual antlrcpp::Any visitArrayAssignment(ExprParser::ArrayAssignmentContext *ctx) override
  {
    cout<<"In visitArrayAssignment"<<'\n';
    ASTArrayAssignment *node = new ASTArrayAssignment();
    node->varname = ctx->VAR_NAME()->getText();
    cout<<"Array name: "<<node->varname<<'\n';
    auto ptr = ctx->array_ref();
    node->array_ref = visit(ptr);
    return (ASTIndividualDecl *)node;
  }

  virtual antlrcpp::Any visitD2arrayAssignment(ExprParser::D2arrayAssignmentContext *ctx) override
  {
    cout<<"In visitD2arrayAssignment"<<'\n';
    ASTD2ArrayAssignment *node = new ASTD2ArrayAssignment();
    node->varname = ctx->VAR_NAME()->getText();
    cout<<"Array name: "<<node->varname<<'\n';
    auto ptr = ctx->array_ref();
    node->array_ref = visit(ptr);
    return (ASTIndividualDecl *)node;
  }

  virtual antlrcpp::Any visitPreIncDecArr(ExprParser::PreIncDecArrContext *ctx) override
  {
    cout<<"In visitPreIncDecArr"<<'\n';
    ASTPreIncDecArr *node = new ASTPreIncDecArr();
    node->varname = visit(ctx->identifier());
    node->expr = visit(ctx->expr());
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitPreIncDec2DArr(ExprParser::PreIncDec2DArrContext *ctx) override 
  {
    cout<<"In visitPreIncDec2DArr"<<'\n';
    ASTPreIncDec2DArr *node = new ASTPreIncDec2DArr();
    node->varname = visit(ctx->identifier());
    node->expr1 = visit(ctx->expr(0));
    node->expr2 = visit(ctx->expr(1));
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }
  virtual antlrcpp::Any visitModExpr(ExprParser::ModExprContext *ctx) override
  {
      ASTExpr *left;
      ASTExpr *right;
      ASTExprBinary *node;
      left = visit(ctx->expr(0));
      cout << "In visitModExpr" << endl;
      right = visit(ctx->expr(1));
      string op = ctx->MODULO()->getText();
      node = new ASTExprBinary(op, left, right);
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitParanCond(ExprParser::ParanCondContext *ctx) override
  {
    cout<<"In visitParanCond"<<'\n';  
    ASTParanCond* node = new ASTParanCond();
    node->cond = visit(ctx->condition());
    return (ASTCond *)node;
  }

  virtual antlrcpp::Any visitNotCond(ExprParser::NotCondContext *ctx) override
  {
    cout<<"In visitNotCond"<<'\n';
    ASTNotCond *node = new ASTNotCond();
    node->cond = visit(ctx->condition());
    return (ASTCond *)node;
  }

  virtual antlrcpp::Any visitAndOrCond(ExprParser::AndOrCondContext *ctx) override
  {
    cout<<"In visitAndOrCond"<<'\n';
    ASTAndOrCond *node = new ASTAndOrCond();
    node->cond1 = visit(ctx->condition(0));
    node->cond2 = visit(ctx->condition(1));
    return (ASTCond *)node;
  }

  virtual antlrcpp::Any visitRelopExpr(ExprParser::RelopExprContext *ctx) override
  {
      cout<<"In visitRelopExpr"<<'\n';
      ASTRelopExpr* node = new ASTRelopExpr();
      node->expr1 = visit(ctx->expr(0));
      //cout<<"Rel exit"<<'\n';
      node->expr2 = visit(ctx->expr(1));
      //cout<<"Rel exit"<<'\n';
      return (ASTCond *) node;
  }

  virtual antlrcpp::Any visitPlusMinusExpr(ExprParser::PlusMinusExprContext *ctx) override
  {
    ASTPlusMinusExpr* node = new ASTPlusMinusExpr();
    cout<<"In visitPlusMinusExpr"<<'\n';
    cout<<"Operator: "<<ctx->ADDOP()->getText()<<'\n';
    node->op = ctx->ADDOP()->getText();
    node->expr = visit(ctx->expr());
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitArrayValExpr(ExprParser::ArrayValExprContext *ctx) override
  {
    cout<<"In visitArrayValExpr"<<'\n';
    ASTArrayValExpr* node = new ASTArrayValExpr();
    node->varname = visit(ctx->identifier());
    node->expr = visit(ctx->expr());
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitPostIncDecArr(ExprParser::PostIncDecArrContext *ctx) override
  {
    cout<<"In visitPostIncDecArr"<<'\n';
    ASTPostIncDecArr *node = new ASTPostIncDecArr();
    node->varname = visit(ctx->identifier());
    node->expr = visit(ctx->expr());
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }
  virtual antlrcpp::Any visitPostIncDec2DArr(ExprParser::PostIncDec2DArrContext *ctx) override
  {
    cout<<"In visitPostIncDec2DArr"<<'\n';
    ASTPostIncDec2DArr *node = new ASTPostIncDec2DArr();
    node->varname = visit(ctx->identifier());
    node->expr1 = visit(ctx->expr(0));
    node->expr2 = visit(ctx->expr(1));
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }
  virtual antlrcpp::Any visitFunc_call(ExprParser::Func_callContext *ctx) override
  {
    cout<<"In visitFunc_call"<<'\n';
    ASTFuncCallExpr *node = new ASTFuncCallExpr();
    node->varname = visit(ctx->identifier());
    cout<<"Function name: "<<node->varname<<'\n';
    node->params_list = visit(ctx->params_list());
    return (ASTExpr*)node;
  }

  virtual antlrcpp::Any visitParenExpr(ExprParser::ParenExprContext *ctx) override
  {
    cout<<"In visitParenExpr"<<'\n';
    ASTParenExpr* node = new ASTParenExpr();
    node->expr = visit(ctx->expr());
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitAssign2DArrayExpr(ExprParser::Assign2DArrayExprContext *ctx) override
  {
    cout<<"In visitAssign2DArrayExpr"<<'\n';
    ASTAssign2DArrayExpr* node = new ASTAssign2DArrayExpr();
    node->varname = visit(ctx->identifier());
    node->expr1 = visit(ctx->expr(0));
    node->expr2 = visit(ctx->expr(1));
    node->expr3 = visit(ctx->expr(2));
    return (ASTAssignment *)node;
  }
  
  virtual antlrcpp::Any visitPostIncDecExpr(ExprParser::PostIncDecExprContext *ctx) override
  {
    cout<<"In visitPostIncDecExpr"<<'\n';
    ASTPostIncDecExpr * node = new ASTPostIncDecExpr();
    node->varname = visit(ctx->identifier());
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitShiftOpExpr(ExprParser::ShiftOpExprContext *ctx) override
  {
    ASTExpr *left, *right;
    ASTExprBinary *node;
    left = visit(ctx->expr(0));
    cout<<"In visitShiftOpExpr"<<'\n';
    right = visit(ctx->expr(1));
    string op = ctx->SHIFT_OP()->getText();
    node = new ASTExprBinary(op, left, right);
    return (ASTExpr *)node; 
  }

  virtual antlrcpp::Any visitDivExpr(ExprParser::DivExprContext *ctx) override
  {
      ASTExpr *left;
      ASTExpr *right;
      ASTExprBinary *node;
      left = visit(ctx->expr(0));
      cout << "In visitDivExpr" << endl;
      right = visit(ctx->expr(1));
      string op = ctx->DIV()->getText();
      node = new ASTExprBinary(op, left, right);
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitD2ArrayValExpr(ExprParser::D2ArrayValExprContext *ctx) override 
  {
    cout<<"In visitD2ArrayValExpr"<<'\n';
    ASTD2ArrayValExpr* node = new ASTD2ArrayValExpr();
    node->varname = visit(ctx->identifier());
    node->expr1 = visit(ctx->expr(0));
    node->expr2 = visit(ctx->expr(1));
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitVarnameExpr(ExprParser::VarnameExprContext *ctx) override 
  {
      ASTVarnameExpr* node = new ASTVarnameExpr();
      cout<<"In visitVarnameExpr"<<'\n';
      node->varname = visit(ctx->identifier());
      //cout<<"Exiter varname"<<'\n';
      return (ASTExpr*) node;
  }

  virtual antlrcpp::Any visitCharExpr(ExprParser::CharExprContext *ctx) override
  {
      cout<<"In visitCharExpr"<<'\n';
      ASTCharExpr* node = new ASTCharExpr();
      node->literal = ctx->CHAR()->getText();
      cout<<"Char literal: "<<node->literal<<'\n';
      cout<<"Exit  visitCharExpr"<<'\n';
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitMultiplyExpr(ExprParser::MultiplyExprContext *ctx) override
  {
      ASTExpr *left;
      ASTExpr *right;
      ASTExprBinary *node;
      left = visit(ctx->expr(0));
      cout << "In visitMultiplyExpr" << endl;
      right = visit(ctx->expr(1));
      string op = ctx->MULT()->getText();
      node = new ASTExprBinary(op, left, right);
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitConstIntExpr(ExprParser::ConstIntExprContext *ctx) override
  {
      cout<<"In visitConstIntExpr"<<'\n';
      ASTExprINT *node;
      node = new ASTExprINT(stoi(ctx->INT_CONST()->getText()));
      //cout<<"Exit"<<'\n';
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitAssignArrayExpr(ExprParser::AssignArrayExprContext *ctx) override 
  {
      cout<<"In visitAssignArrayExpr"<<'\n';
      ASTAssignArrayExpr* node = new ASTAssignArrayExpr();
      node->varname = visit(ctx->identifier());
      node->expr1 = visit(ctx->expr(0));
      node->expr2 = visit(ctx->expr(1));
      return (ASTAssignment *)node;
  }

  virtual antlrcpp::Any visitAddExpr(ExprParser::AddExprContext *ctx) override
  {
      ASTExpr *left, *right;
      ASTExprBinary *node;
      left = visit(ctx->expr(0));
      cout << "In visitAddExpr" << endl;
      right = visit(ctx->expr(1));
      string op = ctx->ADDOP()->getText();
      node = new ASTExprBinary(op, left, right);
      // cout << "addition" << endl;
      return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitBitwiseOpExpr(ExprParser::BitwiseOpExprContext *ctx) override
  {
    ASTExpr *left, *right;
    ASTExprBinary *node;
    left = visit(ctx->expr(0));
    cout<<"In visitBitwiseOpExpr"<<'\n';
    right = visit(ctx->expr(1));
    string op = ctx->BITWISE_OP()->getText();
    node = new ASTExprBinary(op, left, right);
    //cout<<"Exit Bitwise"<<'\n';
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitPreIncDecExpr(ExprParser::PreIncDecExprContext *ctx) override
  {
    cout<<"In visitPreIncDecExpr"<<'\n';
    ASTPreIncDecExpr *node = new ASTPreIncDecExpr();
    node->varname = visit(ctx->identifier());
    node->op = ctx->INC_DEC()->getText();
    return (ASTExpr *)node;
  }

  virtual antlrcpp::Any visitEqaulExpr(ExprParser::EqaulExprContext *ctx) override
  {
    ASTExpr *left, *right;
    ASTExprBinary *node;
    left = visit(ctx->expr(0));
    cout<<"In visitEqaulExpr"<<'\n';
    right = visit(ctx->expr(1));
    string op = ctx->EQOP()->getText();
    node = new ASTExprBinary(op, left, right);
    return (ASTExpr *)node;
  }
  virtual antlrcpp::Any visitBoolExpr(ExprParser::BoolExprContext *ctx) override
  {
    cout<<"In visitBoolExpr"<<'\n';
    ASTBoolExpr* node = new ASTBoolExpr();
    string op = ctx->BOOL->getText();
    cout<<"Boolean value: " + op<<'\n';
    node->value = op;
    return (ASTExpr *)node;
  }
  virtual antlrcpp::Any visitRet(ExprParser::RetContext *ctx) override
  {
    cout<<"In visitRet"<<'\n';
    ASTReturn* node = new ASTReturn();
    if(ctx->expr() != nullptr)
    {
      ASTExpr* expr = visit(ctx->expr());
    }
    return (ASTStat *)node;
  }

  virtual antlrcpp::Any visitParams_list(ExprParser::Params_listContext *ctx) override
  {
    ASTParamsList *node = new ASTParamsList();
    ASTExpr * exprnode;
    for(auto expr: ctx->expr())
    {
        exprnode = visit(expr);
        if (exprnode != nullptr)
        {
            node->ExprList.push_back(exprnode);
        }
    }
    return node;
  }

  virtual antlrcpp::Any visitDatatype(ExprParser::DatatypeContext *ctx) override
  {
    return visitChildren(ctx);
  }
  virtual antlrcpp::Any visitIdentifier(ExprParser::IdentifierContext *ctx) override 
  {
    cout<<"In visitIdentifier"<<'\n';
    ASTExprID* node = new ASTExprID(ctx->VAR_NAME()->getText());
    return node;
  }
  virtual antlrcpp::Any visitCaller(ExprParser::CallerContext *ctx) override
  {
    return visitChildren(ctx);
  }

};