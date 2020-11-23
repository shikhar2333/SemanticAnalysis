
// Generated from Expr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, RETURN = 20, 
    Comma = 21, Semi = 22, LeftParen = 23, RightParen = 24, LeftSqr = 25, 
    RightSqr = 26, LeftCurly = 27, RightCurly = 28, DOUBLEQUOTE = 29, NOT = 30, 
    ADDOP = 31, MULT = 32, MODULO = 33, DIV = 34, INC_DEC = 35, AND_OR = 36, 
    RELOP = 37, EQOP = 38, ASSIGN = 39, BITWISE_OP = 40, SHIFT_OP = 41, 
    STRING = 42, INT_CONST = 43, CHAR = 44, VAR_NAME = 45, COMMENT = 46, 
    SINGLECOMMENT = 47, NS = 48
  };

  enum {
    RuleProg = 0, RuleRoot = 1, RuleBlankdeclaration = 2, RuleGlobaldeclaration = 3, 
    RuleFunc_declaration = 4, RuleList_args = 5, RuleBlock = 6, RuleStatement = 7, 
    RuleAssignment = 8, RuleCall = 9, RulePrinter = 10, RuleInput = 11, 
    RuleInputargs = 12, RuleBreak_stmnt = 13, RuleCont_stmnt = 14, RuleWhile_loop = 15, 
    RuleFor_loop = 16, RuleDeclaration = 17, RuleIf_else = 18, RuleElse_part = 19, 
    RuleBlockOrStatement = 20, RuleIndividualDeclaration = 21, RuleVarassign = 22, 
    RuleCondition = 23, RuleExpr = 24, RuleRet = 25, RuleArray_ref = 26, 
    RuleParams_list = 27, RuleDatatype = 28, RuleCaller = 29
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class RootContext;
  class BlankdeclarationContext;
  class GlobaldeclarationContext;
  class Func_declarationContext;
  class List_argsContext;
  class BlockContext;
  class StatementContext;
  class AssignmentContext;
  class CallContext;
  class PrinterContext;
  class InputContext;
  class InputargsContext;
  class Break_stmntContext;
  class Cont_stmntContext;
  class While_loopContext;
  class For_loopContext;
  class DeclarationContext;
  class If_elseContext;
  class Else_partContext;
  class BlockOrStatementContext;
  class IndividualDeclarationContext;
  class VarassignContext;
  class ConditionContext;
  class ExprContext;
  class RetContext;
  class Array_refContext;
  class Params_listContext;
  class DatatypeContext;
  class CallerContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RootContext *root();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  RootContext : public antlr4::ParserRuleContext {
  public:
    RootContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Func_declarationContext *> func_declaration();
    Func_declarationContext* func_declaration(size_t i);
    GlobaldeclarationContext *globaldeclaration();
    BlankdeclarationContext *blankdeclaration();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RootContext* root();

  class  BlankdeclarationContext : public antlr4::ParserRuleContext {
  public:
    BlankdeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlankdeclarationContext* blankdeclaration();

  class  GlobaldeclarationContext : public antlr4::ParserRuleContext {
  public:
    GlobaldeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    RootContext *root();
    DatatypeContext *datatype();
    std::vector<IndividualDeclarationContext *> individualDeclaration();
    IndividualDeclarationContext* individualDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobaldeclarationContext* globaldeclaration();

  class  Func_declarationContext : public antlr4::ParserRuleContext {
  public:
    Func_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_declarationContext() = default;
    void copyFrom(Func_declarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ListFuncDecContext : public Func_declarationContext {
  public:
    ListFuncDecContext(Func_declarationContext *ctx);

    DatatypeContext *datatype();
    antlr4::tree::TerminalNode *VAR_NAME();
    List_argsContext *list_args();
    BlockContext *block();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_declarationContext* func_declaration();

  class  List_argsContext : public antlr4::ParserRuleContext {
  public:
    List_argsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<DatatypeContext *> datatype();
    DatatypeContext* datatype(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR_NAME();
    antlr4::tree::TerminalNode* VAR_NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  List_argsContext* list_args();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalStatementContext : public StatementContext {
  public:
    ConditionalStatementContext(StatementContext *ctx);

    If_elseContext *if_else();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WriteStatementContext : public StatementContext {
  public:
    WriteStatementContext(StatementContext *ctx);

    PrinterContext *printer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileloopStatementContext : public StatementContext {
  public:
    WhileloopStatementContext(StatementContext *ctx);

    While_loopContext *while_loop();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclareStatementContext : public StatementContext {
  public:
    DeclareStatementContext(StatementContext *ctx);

    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForloopStatementContext : public StatementContext {
  public:
    ForloopStatementContext(StatementContext *ctx);

    For_loopContext *for_loop();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprStatementContext : public StatementContext {
  public:
    ExprStatementContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignStatementContext : public StatementContext {
  public:
    AssignStatementContext(StatementContext *ctx);

    AssignmentContext *assignment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReadStatementContext : public StatementContext {
  public:
    ReadStatementContext(StatementContext *ctx);

    InputContext *input();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakStatementContext : public StatementContext {
  public:
    BreakStatementContext(StatementContext *ctx);

    Break_stmntContext *break_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ContinueStatementContext : public StatementContext {
  public:
    ContinueStatementContext(StatementContext *ctx);

    Cont_stmntContext *cont_stmnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStatementContext : public StatementContext {
  public:
    ReturnStatementContext(StatementContext *ctx);

    RetContext *ret();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunccallStatementContext : public StatementContext {
  public:
    FunccallStatementContext(StatementContext *ctx);

    CallContext *call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignmentContext() = default;
    void copyFrom(AssignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AssignArrayExprContext : public AssignmentContext {
  public:
    AssignArrayExprContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RightSqr();
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarAssignmentContext : public AssignmentContext {
  public:
    VarAssignmentContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Assign2DArrayExprContext : public AssignmentContext {
  public:
    Assign2DArrayExprContext(AssignmentContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *Semi();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignmentContext* assignment();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallerContext *caller();
    antlr4::tree::TerminalNode *VAR_NAME();
    Params_listContext *params_list();
    antlr4::tree::TerminalNode *Semi();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  PrinterContext : public antlr4::ParserRuleContext {
  public:
    PrinterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrinterContext* printer();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    InputargsContext *inputargs();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semi();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  InputargsContext : public antlr4::ParserRuleContext {
  public:
    InputargsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InputargsContext() = default;
    void copyFrom(InputargsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarInputContext : public InputargsContext {
  public:
    VarInputContext(InputargsContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Array2DInputContext : public InputargsContext {
  public:
    Array2DInputContext(InputargsContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayInputContext : public InputargsContext {
  public:
    ArrayInputContext(InputargsContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightSqr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InputargsContext* inputargs();

  class  Break_stmntContext : public antlr4::ParserRuleContext {
  public:
    Break_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Break_stmntContext* break_stmnt();

  class  Cont_stmntContext : public antlr4::ParserRuleContext {
  public:
    Cont_stmntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cont_stmntContext* cont_stmnt();

  class  While_loopContext : public antlr4::ParserRuleContext {
  public:
    While_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    BlockOrStatementContext *blockOrStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  While_loopContext* while_loop();

  class  For_loopContext : public antlr4::ParserRuleContext {
  public:
    For_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    std::vector<VarassignContext *> varassign();
    VarassignContext* varassign(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    BlockOrStatementContext *blockOrStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  For_loopContext* for_loop();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semi();
    DatatypeContext *datatype();
    std::vector<IndividualDeclarationContext *> individualDeclaration();
    IndividualDeclarationContext* individualDeclaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  If_elseContext : public antlr4::ParserRuleContext {
  public:
    If_elseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();
    BlockOrStatementContext *blockOrStatement();
    Else_partContext *else_part();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_elseContext* if_else();

  class  Else_partContext : public antlr4::ParserRuleContext {
  public:
    Else_partContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockOrStatementContext *blockOrStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_partContext* else_part();

  class  BlockOrStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockOrStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockOrStatementContext* blockOrStatement();

  class  IndividualDeclarationContext : public antlr4::ParserRuleContext {
  public:
    IndividualDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IndividualDeclarationContext() = default;
    void copyFrom(IndividualDeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayAssignmentContext : public IndividualDeclarationContext {
  public:
    ArrayAssignmentContext(IndividualDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    Array_refContext *array_ref();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  D2arrayDeclarationContext : public IndividualDeclarationContext {
  public:
    D2arrayDeclarationContext(IndividualDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INT_CONST();
    antlr4::tree::TerminalNode* INT_CONST(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);
    Array_refContext *array_ref();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  D2arrayAssignmentContext : public IndividualDeclarationContext {
  public:
    D2arrayAssignmentContext(IndividualDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    Array_refContext *array_ref();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayDeclarationContext : public IndividualDeclarationContext {
  public:
    ArrayDeclarationContext(IndividualDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    antlr4::tree::TerminalNode *INT_CONST();
    antlr4::tree::TerminalNode *RightSqr();
    Array_refContext *array_ref();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarDeclarationContext : public IndividualDeclarationContext {
  public:
    VarDeclarationContext(IndividualDeclarationContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IndividualDeclarationContext* individualDeclaration();

  class  VarassignContext : public antlr4::ParserRuleContext {
  public:
    VarassignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarassignContext* varassign();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionContext() = default;
    void copyFrom(ConditionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NotCondContext : public ConditionContext {
  public:
    NotCondContext(ConditionContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelopExprContext : public ConditionContext {
  public:
    RelopExprContext(ConditionContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RELOP();
    antlr4::tree::TerminalNode *BITWISE_OP();
    antlr4::tree::TerminalNode *SHIFT_OP();
    antlr4::tree::TerminalNode *EQOP();
    antlr4::tree::TerminalNode *AND_OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndOrCondContext : public ConditionContext {
  public:
    AndOrCondContext(ConditionContext *ctx);

    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    antlr4::tree::TerminalNode *AND_OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParanCondContext : public ConditionContext {
  public:
    ParanCondContext(ConditionContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *RightParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionContext* condition();
  ConditionContext* condition(int precedence);
  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PreIncDec2DArrContext : public ExprContext {
  public:
    PreIncDec2DArrContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INC_DEC();
    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarnameExprContext : public ExprContext {
  public:
    VarnameExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharExprContext : public ExprContext {
  public:
    CharExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIncDecArrContext : public ExprContext {
  public:
    PreIncDecArrContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INC_DEC();
    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightSqr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModExprContext : public ExprContext {
  public:
    ModExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MODULO();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusMinusExprContext : public ExprContext {
  public:
    PlusMinusExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *ADDOP();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrayValExprContext : public ExprContext {
  public:
    ArrayValExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightSqr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultiplyExprContext : public ExprContext {
  public:
    MultiplyExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MULT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncDecArrContext : public ExprContext {
  public:
    PostIncDecArrContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *LeftSqr();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightSqr();
    antlr4::tree::TerminalNode *INC_DEC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Func_callContext : public ExprContext {
  public:
    Func_callContext(ExprContext *ctx);

    CallerContext *caller();
    antlr4::tree::TerminalNode *VAR_NAME();
    Params_listContext *params_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LeftParen();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RightParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncDecExprContext : public ExprContext {
  public:
    PostIncDecExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    antlr4::tree::TerminalNode *INC_DEC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstIntExprContext : public ExprContext {
  public:
    ConstIntExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT_CONST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShiftOpExprContext : public ExprContext {
  public:
    ShiftOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *SHIFT_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddExprContext : public ExprContext {
  public:
    AddExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADDOP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitwiseOpExprContext : public ExprContext {
  public:
    BitwiseOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BITWISE_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PreIncDecExprContext : public ExprContext {
  public:
    PreIncDecExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INC_DEC();
    antlr4::tree::TerminalNode *VAR_NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivExprContext : public ExprContext {
  public:
    DivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DIV();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqaulExprContext : public ExprContext {
  public:
    EqaulExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQOP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolExprContext : public ExprContext {
  public:
    BoolExprContext(ExprContext *ctx);

    antlr4::Token *BOOL = nullptr;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PostIncDec2DArrContext : public ExprContext {
  public:
    PostIncDec2DArrContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);
    antlr4::tree::TerminalNode *INC_DEC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  D2ArrayValExprContext : public ExprContext {
  public:
    D2ArrayValExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *VAR_NAME();
    std::vector<antlr4::tree::TerminalNode *> LeftSqr();
    antlr4::tree::TerminalNode* LeftSqr(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RightSqr();
    antlr4::tree::TerminalNode* RightSqr(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  RetContext : public antlr4::ParserRuleContext {
  public:
    RetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *Semi();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RetContext* ret();

  class  Array_refContext : public antlr4::ParserRuleContext {
  public:
    Array_refContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *LeftCurly();
    antlr4::tree::TerminalNode *RightCurly();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_refContext* array_ref();

  class  Params_listContext : public antlr4::ParserRuleContext {
  public:
    Params_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    antlr4::tree::TerminalNode *RightParen();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Params_listContext* params_list();

  class  DatatypeContext : public antlr4::ParserRuleContext {
  public:
    DatatypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatatypeContext* datatype();

  class  CallerContext : public antlr4::ParserRuleContext {
  public:
    CallerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallerContext* caller();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool conditionSempred(ConditionContext *_localctx, size_t predicateIndex);
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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

