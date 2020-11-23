
// Generated from Expr.g4 by ANTLR 4.8


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::RootContext* ExprParser::ProgContext::root() {
  return getRuleContext<ExprParser::RootContext>(0);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}


antlrcpp::Any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    root();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RootContext ------------------------------------------------------------------

ExprParser::RootContext::RootContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::Func_declarationContext *> ExprParser::RootContext::func_declaration() {
  return getRuleContexts<ExprParser::Func_declarationContext>();
}

ExprParser::Func_declarationContext* ExprParser::RootContext::func_declaration(size_t i) {
  return getRuleContext<ExprParser::Func_declarationContext>(i);
}

ExprParser::GlobaldeclarationContext* ExprParser::RootContext::globaldeclaration() {
  return getRuleContext<ExprParser::GlobaldeclarationContext>(0);
}

ExprParser::BlankdeclarationContext* ExprParser::RootContext::blankdeclaration() {
  return getRuleContext<ExprParser::BlankdeclarationContext>(0);
}


size_t ExprParser::RootContext::getRuleIndex() const {
  return ExprParser::RuleRoot;
}


antlrcpp::Any ExprParser::RootContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRoot(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RootContext* ExprParser::root() {
  RootContext *_localctx = _tracker.createInstance<RootContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleRoot);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(65); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(64);
          func_declaration();
          setState(67); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ExprParser::T__0);
        break;
      }

      case ExprParser::T__13:
      case ExprParser::T__14:
      case ExprParser::T__15:
      case ExprParser::T__16:
      case ExprParser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        globaldeclaration();
        break;
      }

      case ExprParser::EOF: {
        enterOuterAlt(_localctx, 3);
        setState(70);
        blankdeclaration();
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

//----------------- BlankdeclarationContext ------------------------------------------------------------------

ExprParser::BlankdeclarationContext::BlankdeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::BlankdeclarationContext::getRuleIndex() const {
  return ExprParser::RuleBlankdeclaration;
}


antlrcpp::Any ExprParser::BlankdeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBlankdeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BlankdeclarationContext* ExprParser::blankdeclaration() {
  BlankdeclarationContext *_localctx = _tracker.createInstance<BlankdeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleBlankdeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobaldeclarationContext ------------------------------------------------------------------

ExprParser::GlobaldeclarationContext::GlobaldeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::GlobaldeclarationContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::RootContext* ExprParser::GlobaldeclarationContext::root() {
  return getRuleContext<ExprParser::RootContext>(0);
}

ExprParser::DatatypeContext* ExprParser::GlobaldeclarationContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

std::vector<ExprParser::IndividualDeclarationContext *> ExprParser::GlobaldeclarationContext::individualDeclaration() {
  return getRuleContexts<ExprParser::IndividualDeclarationContext>();
}

ExprParser::IndividualDeclarationContext* ExprParser::GlobaldeclarationContext::individualDeclaration(size_t i) {
  return getRuleContext<ExprParser::IndividualDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::GlobaldeclarationContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::GlobaldeclarationContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::GlobaldeclarationContext::getRuleIndex() const {
  return ExprParser::RuleGlobaldeclaration;
}


antlrcpp::Any ExprParser::GlobaldeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitGlobaldeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::GlobaldeclarationContext* ExprParser::globaldeclaration() {
  GlobaldeclarationContext *_localctx = _tracker.createInstance<GlobaldeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleGlobaldeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    datatype();
    setState(77);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR_NAME) {
      setState(76);
      individualDeclaration();
    }
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::Comma) {
      setState(79);
      match(ExprParser::Comma);
      setState(80);
      individualDeclaration();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(ExprParser::Semi);
    setState(87);
    root();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_declarationContext ------------------------------------------------------------------

ExprParser::Func_declarationContext::Func_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::Func_declarationContext::getRuleIndex() const {
  return ExprParser::RuleFunc_declaration;
}

void ExprParser::Func_declarationContext::copyFrom(Func_declarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ListFuncDecContext ------------------------------------------------------------------

ExprParser::DatatypeContext* ExprParser::ListFuncDecContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

tree::TerminalNode* ExprParser::ListFuncDecContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

ExprParser::List_argsContext* ExprParser::ListFuncDecContext::list_args() {
  return getRuleContext<ExprParser::List_argsContext>(0);
}

ExprParser::BlockContext* ExprParser::ListFuncDecContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

ExprParser::ListFuncDecContext::ListFuncDecContext(Func_declarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ListFuncDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitListFuncDec(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::Func_declarationContext* ExprParser::func_declaration() {
  Func_declarationContext *_localctx = _tracker.createInstance<Func_declarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleFunc_declaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<Func_declarationContext *>(_tracker.createInstance<ExprParser::ListFuncDecContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(ExprParser::T__0);
    setState(90);
    datatype();
    setState(91);
    match(ExprParser::VAR_NAME);
    setState(92);
    list_args();
    setState(93);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- List_argsContext ------------------------------------------------------------------

ExprParser::List_argsContext::List_argsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::List_argsContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

tree::TerminalNode* ExprParser::List_argsContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

std::vector<ExprParser::DatatypeContext *> ExprParser::List_argsContext::datatype() {
  return getRuleContexts<ExprParser::DatatypeContext>();
}

ExprParser::DatatypeContext* ExprParser::List_argsContext::datatype(size_t i) {
  return getRuleContext<ExprParser::DatatypeContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::List_argsContext::VAR_NAME() {
  return getTokens(ExprParser::VAR_NAME);
}

tree::TerminalNode* ExprParser::List_argsContext::VAR_NAME(size_t i) {
  return getToken(ExprParser::VAR_NAME, i);
}

std::vector<tree::TerminalNode *> ExprParser::List_argsContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::List_argsContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::List_argsContext::getRuleIndex() const {
  return ExprParser::RuleList_args;
}


antlrcpp::Any ExprParser::List_argsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitList_args(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::List_argsContext* ExprParser::list_args() {
  List_argsContext *_localctx = _tracker.createInstance<List_argsContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleList_args);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ExprParser::LeftParen);
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__13)
      | (1ULL << ExprParser::T__14)
      | (1ULL << ExprParser::T__15)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__17))) != 0)) {
      setState(96);
      datatype();
      setState(97);
      match(ExprParser::VAR_NAME);
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::Comma) {
        setState(98);
        match(ExprParser::Comma);
        setState(99);
        datatype();
        setState(100);
        match(ExprParser::VAR_NAME);
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(109);
    match(ExprParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ExprParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::BlockContext::LeftCurly() {
  return getToken(ExprParser::LeftCurly, 0);
}

tree::TerminalNode* ExprParser::BlockContext::RightCurly() {
  return getToken(ExprParser::RightCurly, 0);
}

std::vector<ExprParser::StatementContext *> ExprParser::BlockContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::BlockContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::BlockContext::getRuleIndex() const {
  return ExprParser::RuleBlock;
}


antlrcpp::Any ExprParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BlockContext* ExprParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(ExprParser::LeftCurly);
    setState(115);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__1)
      | (1ULL << ExprParser::T__2)
      | (1ULL << ExprParser::T__3)
      | (1ULL << ExprParser::T__4)
      | (1ULL << ExprParser::T__5)
      | (1ULL << ExprParser::T__6)
      | (1ULL << ExprParser::T__7)
      | (1ULL << ExprParser::T__11)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__13)
      | (1ULL << ExprParser::T__14)
      | (1ULL << ExprParser::T__15)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__17)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::RETURN)
      | (1ULL << ExprParser::LeftParen)
      | (1ULL << ExprParser::ADDOP)
      | (1ULL << ExprParser::INC_DEC)
      | (1ULL << ExprParser::INT_CONST)
      | (1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::VAR_NAME))) != 0)) {
      setState(112);
      statement();
      setState(117);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(118);
    match(ExprParser::RightCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}

void ExprParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalStatementContext ------------------------------------------------------------------

ExprParser::If_elseContext* ExprParser::ConditionalStatementContext::if_else() {
  return getRuleContext<ExprParser::If_elseContext>(0);
}

ExprParser::ConditionalStatementContext::ConditionalStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ConditionalStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConditionalStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WriteStatementContext ------------------------------------------------------------------

ExprParser::PrinterContext* ExprParser::WriteStatementContext::printer() {
  return getRuleContext<ExprParser::PrinterContext>(0);
}

ExprParser::WriteStatementContext::WriteStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::WriteStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWriteStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileloopStatementContext ------------------------------------------------------------------

ExprParser::While_loopContext* ExprParser::WhileloopStatementContext::while_loop() {
  return getRuleContext<ExprParser::While_loopContext>(0);
}

ExprParser::WhileloopStatementContext::WhileloopStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::WhileloopStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhileloopStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclareStatementContext ------------------------------------------------------------------

ExprParser::DeclarationContext* ExprParser::DeclareStatementContext::declaration() {
  return getRuleContext<ExprParser::DeclarationContext>(0);
}

ExprParser::DeclareStatementContext::DeclareStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::DeclareStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclareStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForloopStatementContext ------------------------------------------------------------------

ExprParser::For_loopContext* ExprParser::ForloopStatementContext::for_loop() {
  return getRuleContext<ExprParser::For_loopContext>(0);
}

ExprParser::ForloopStatementContext::ForloopStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ForloopStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitForloopStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStatementContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::ExprStatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::ExprStatementContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::ExprStatementContext::ExprStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ExprStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExprStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStatementContext ------------------------------------------------------------------

ExprParser::AssignmentContext* ExprParser::AssignStatementContext::assignment() {
  return getRuleContext<ExprParser::AssignmentContext>(0);
}

ExprParser::AssignStatementContext::AssignStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::AssignStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReadStatementContext ------------------------------------------------------------------

ExprParser::InputContext* ExprParser::ReadStatementContext::input() {
  return getRuleContext<ExprParser::InputContext>(0);
}

ExprParser::ReadStatementContext::ReadStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ReadStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReadStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStatementContext ------------------------------------------------------------------

ExprParser::Break_stmntContext* ExprParser::BreakStatementContext::break_stmnt() {
  return getRuleContext<ExprParser::Break_stmntContext>(0);
}

ExprParser::BreakStatementContext::BreakStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ContinueStatementContext ------------------------------------------------------------------

ExprParser::Cont_stmntContext* ExprParser::ContinueStatementContext::cont_stmnt() {
  return getRuleContext<ExprParser::Cont_stmntContext>(0);
}

ExprParser::ContinueStatementContext::ContinueStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ContinueStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitContinueStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatementContext ------------------------------------------------------------------

ExprParser::RetContext* ExprParser::ReturnStatementContext::ret() {
  return getRuleContext<ExprParser::RetContext>(0);
}

ExprParser::ReturnStatementContext::ReturnStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunccallStatementContext ------------------------------------------------------------------

ExprParser::CallContext* ExprParser::FunccallStatementContext::call() {
  return getRuleContext<ExprParser::CallContext>(0);
}

ExprParser::FunccallStatementContext::FunccallStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::FunccallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunccallStatement(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::FunccallStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(120);
      call();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::AssignStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(121);
      assignment();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::DeclareStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(122);
      declaration();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ReturnStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(123);
      ret();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ExprStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(124);
      expr(0);
      setState(125);
      match(ExprParser::Semi);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::WriteStatementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(127);
      printer();
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ConditionalStatementContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(128);
      if_else();
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::WhileloopStatementContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(129);
      while_loop();
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ForloopStatementContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(130);
      for_loop();
      break;
    }

    case 10: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ReadStatementContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(131);
      input();
      break;
    }

    case 11: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::BreakStatementContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(132);
      break_stmnt();
      break;
    }

    case 12: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<ExprParser::ContinueStatementContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(133);
      cont_stmnt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ExprParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::AssignmentContext::getRuleIndex() const {
  return ExprParser::RuleAssignment;
}

void ExprParser::AssignmentContext::copyFrom(AssignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssignArrayExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::AssignArrayExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::AssignArrayExprContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::AssignArrayExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AssignArrayExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::AssignArrayExprContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

tree::TerminalNode* ExprParser::AssignArrayExprContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

tree::TerminalNode* ExprParser::AssignArrayExprContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::AssignArrayExprContext::AssignArrayExprContext(AssignmentContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::AssignArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarAssignmentContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::VarAssignmentContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::VarAssignmentContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExprContext* ExprParser::VarAssignmentContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::VarAssignmentContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::VarAssignmentContext::VarAssignmentContext(AssignmentContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::VarAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Assign2DArrayExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::Assign2DArrayExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Assign2DArrayExprContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::Assign2DArrayExprContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::Assign2DArrayExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Assign2DArrayExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Assign2DArrayExprContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::Assign2DArrayExprContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

tree::TerminalNode* ExprParser::Assign2DArrayExprContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

tree::TerminalNode* ExprParser::Assign2DArrayExprContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::Assign2DArrayExprContext::Assign2DArrayExprContext(AssignmentContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Assign2DArrayExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssign2DArrayExpr(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::AssignmentContext* ExprParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleAssignment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<ExprParser::VarAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(136);
      identifier();
      setState(137);
      match(ExprParser::ASSIGN);
      setState(138);
      expr(0);
      setState(139);
      match(ExprParser::Semi);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<ExprParser::Assign2DArrayExprContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(141);
      identifier();
      setState(142);
      match(ExprParser::LeftSqr);
      setState(143);
      expr(0);
      setState(144);
      match(ExprParser::RightSqr);
      setState(145);
      match(ExprParser::LeftSqr);
      setState(146);
      expr(0);
      setState(147);
      match(ExprParser::RightSqr);
      setState(148);
      match(ExprParser::ASSIGN);
      setState(149);
      expr(0);
      setState(150);
      match(ExprParser::Semi);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AssignmentContext *>(_tracker.createInstance<ExprParser::AssignArrayExprContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(152);
      identifier();
      setState(153);
      match(ExprParser::LeftSqr);
      setState(154);
      expr(0);
      setState(155);
      match(ExprParser::RightSqr);
      setState(156);
      match(ExprParser::ASSIGN);
      setState(157);
      expr(0);
      setState(158);
      match(ExprParser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

ExprParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::CallerContext* ExprParser::CallContext::caller() {
  return getRuleContext<ExprParser::CallerContext>(0);
}

tree::TerminalNode* ExprParser::CallContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

ExprParser::Params_listContext* ExprParser::CallContext::params_list() {
  return getRuleContext<ExprParser::Params_listContext>(0);
}

tree::TerminalNode* ExprParser::CallContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}


size_t ExprParser::CallContext::getRuleIndex() const {
  return ExprParser::RuleCall;
}


antlrcpp::Any ExprParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CallContext* ExprParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    caller();
    setState(163);
    match(ExprParser::VAR_NAME);
    setState(164);
    params_list();
    setState(165);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrinterContext ------------------------------------------------------------------

ExprParser::PrinterContext::PrinterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::PrinterContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

tree::TerminalNode* ExprParser::PrinterContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

tree::TerminalNode* ExprParser::PrinterContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::PrinterContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::PrinterContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::PrinterContext::STRING() {
  return getTokens(ExprParser::STRING);
}

tree::TerminalNode* ExprParser::PrinterContext::STRING(size_t i) {
  return getToken(ExprParser::STRING, i);
}

std::vector<tree::TerminalNode *> ExprParser::PrinterContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::PrinterContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::PrinterContext::getRuleIndex() const {
  return ExprParser::RulePrinter;
}


antlrcpp::Any ExprParser::PrinterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPrinter(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::PrinterContext* ExprParser::printer() {
  PrinterContext *_localctx = _tracker.createInstance<PrinterContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RulePrinter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(ExprParser::T__1);
    setState(168);
    match(ExprParser::LeftParen);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__11)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::LeftParen)
      | (1ULL << ExprParser::ADDOP)
      | (1ULL << ExprParser::INC_DEC)
      | (1ULL << ExprParser::STRING)
      | (1ULL << ExprParser::INT_CONST)
      | (1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::VAR_NAME))) != 0)) {
      setState(171);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ExprParser::T__11:
        case ExprParser::T__12:
        case ExprParser::T__18:
        case ExprParser::LeftParen:
        case ExprParser::ADDOP:
        case ExprParser::INC_DEC:
        case ExprParser::INT_CONST:
        case ExprParser::CHAR:
        case ExprParser::VAR_NAME: {
          setState(169);
          expr(0);
          break;
        }

        case ExprParser::STRING: {
          setState(170);
          match(ExprParser::STRING);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::Comma) {
        setState(173);
        match(ExprParser::Comma);
        setState(176);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case ExprParser::T__11:
          case ExprParser::T__12:
          case ExprParser::T__18:
          case ExprParser::LeftParen:
          case ExprParser::ADDOP:
          case ExprParser::INC_DEC:
          case ExprParser::INT_CONST:
          case ExprParser::CHAR:
          case ExprParser::VAR_NAME: {
            setState(174);
            expr(0);
            break;
          }

          case ExprParser::STRING: {
            setState(175);
            match(ExprParser::STRING);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(182);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(185);
    match(ExprParser::RightParen);
    setState(186);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

ExprParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::InputContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

ExprParser::InputargsContext* ExprParser::InputContext::inputargs() {
  return getRuleContext<ExprParser::InputargsContext>(0);
}

tree::TerminalNode* ExprParser::InputContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

tree::TerminalNode* ExprParser::InputContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}


size_t ExprParser::InputContext::getRuleIndex() const {
  return ExprParser::RuleInput;
}


antlrcpp::Any ExprParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::InputContext* ExprParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(ExprParser::T__2);
    setState(189);
    match(ExprParser::LeftParen);
    setState(190);
    inputargs();
    setState(191);
    match(ExprParser::RightParen);
    setState(192);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputargsContext ------------------------------------------------------------------

ExprParser::InputargsContext::InputargsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::InputargsContext::getRuleIndex() const {
  return ExprParser::RuleInputargs;
}

void ExprParser::InputargsContext::copyFrom(InputargsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarInputContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::VarInputContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

ExprParser::VarInputContext::VarInputContext(InputargsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::VarInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarInput(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Array2DInputContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::Array2DInputContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::Array2DInputContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::Array2DInputContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::Array2DInputContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Array2DInputContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Array2DInputContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::Array2DInputContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

ExprParser::Array2DInputContext::Array2DInputContext(InputargsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Array2DInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray2DInput(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayInputContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::ArrayInputContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::ArrayInputContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

ExprParser::ExprContext* ExprParser::ArrayInputContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::ArrayInputContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

ExprParser::ArrayInputContext::ArrayInputContext(InputargsContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ArrayInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayInput(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::InputargsContext* ExprParser::inputargs() {
  InputargsContext *_localctx = _tracker.createInstance<InputargsContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleInputargs);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InputargsContext *>(_tracker.createInstance<ExprParser::VarInputContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(194);
      identifier();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InputargsContext *>(_tracker.createInstance<ExprParser::Array2DInputContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(195);
      identifier();
      setState(196);
      match(ExprParser::LeftSqr);
      setState(197);
      expr(0);
      setState(198);
      match(ExprParser::RightSqr);
      setState(199);
      match(ExprParser::LeftSqr);
      setState(200);
      expr(0);
      setState(201);
      match(ExprParser::RightSqr);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<InputargsContext *>(_tracker.createInstance<ExprParser::ArrayInputContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(203);
      identifier();
      setState(204);
      match(ExprParser::LeftSqr);
      setState(205);
      expr(0);
      setState(206);
      match(ExprParser::RightSqr);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Break_stmntContext ------------------------------------------------------------------

ExprParser::Break_stmntContext::Break_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Break_stmntContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}


size_t ExprParser::Break_stmntContext::getRuleIndex() const {
  return ExprParser::RuleBreak_stmnt;
}


antlrcpp::Any ExprParser::Break_stmntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBreak_stmnt(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Break_stmntContext* ExprParser::break_stmnt() {
  Break_stmntContext *_localctx = _tracker.createInstance<Break_stmntContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleBreak_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(ExprParser::T__3);
    setState(211);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Cont_stmntContext ------------------------------------------------------------------

ExprParser::Cont_stmntContext::Cont_stmntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Cont_stmntContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}


size_t ExprParser::Cont_stmntContext::getRuleIndex() const {
  return ExprParser::RuleCont_stmnt;
}


antlrcpp::Any ExprParser::Cont_stmntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCont_stmnt(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Cont_stmntContext* ExprParser::cont_stmnt() {
  Cont_stmntContext *_localctx = _tracker.createInstance<Cont_stmntContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleCont_stmnt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(ExprParser::T__4);
    setState(214);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

ExprParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::While_loopContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

ExprParser::ConditionContext* ExprParser::While_loopContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::While_loopContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

ExprParser::BlockOrStatementContext* ExprParser::While_loopContext::blockOrStatement() {
  return getRuleContext<ExprParser::BlockOrStatementContext>(0);
}


size_t ExprParser::While_loopContext::getRuleIndex() const {
  return ExprParser::RuleWhile_loop;
}


antlrcpp::Any ExprParser::While_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhile_loop(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::While_loopContext* ExprParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(ExprParser::T__5);
    setState(217);
    match(ExprParser::LeftParen);
    setState(218);
    condition(0);
    setState(219);
    match(ExprParser::RightParen);
    setState(220);
    blockOrStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_loopContext ------------------------------------------------------------------

ExprParser::For_loopContext::For_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::For_loopContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

std::vector<ExprParser::VarassignContext *> ExprParser::For_loopContext::varassign() {
  return getRuleContexts<ExprParser::VarassignContext>();
}

ExprParser::VarassignContext* ExprParser::For_loopContext::varassign(size_t i) {
  return getRuleContext<ExprParser::VarassignContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::For_loopContext::Semi() {
  return getTokens(ExprParser::Semi);
}

tree::TerminalNode* ExprParser::For_loopContext::Semi(size_t i) {
  return getToken(ExprParser::Semi, i);
}

ExprParser::ConditionContext* ExprParser::For_loopContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::For_loopContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

ExprParser::BlockOrStatementContext* ExprParser::For_loopContext::blockOrStatement() {
  return getRuleContext<ExprParser::BlockOrStatementContext>(0);
}


size_t ExprParser::For_loopContext::getRuleIndex() const {
  return ExprParser::RuleFor_loop;
}


antlrcpp::Any ExprParser::For_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFor_loop(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::For_loopContext* ExprParser::for_loop() {
  For_loopContext *_localctx = _tracker.createInstance<For_loopContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleFor_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    match(ExprParser::T__6);
    setState(223);
    match(ExprParser::LeftParen);
    setState(224);
    varassign();
    setState(225);
    match(ExprParser::Semi);
    setState(226);
    condition(0);
    setState(227);
    match(ExprParser::Semi);
    setState(228);
    varassign();
    setState(229);
    match(ExprParser::RightParen);
    setState(230);
    blockOrStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExprParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::DeclarationContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::DatatypeContext* ExprParser::DeclarationContext::datatype() {
  return getRuleContext<ExprParser::DatatypeContext>(0);
}

std::vector<ExprParser::IndividualDeclarationContext *> ExprParser::DeclarationContext::individualDeclaration() {
  return getRuleContexts<ExprParser::IndividualDeclarationContext>();
}

ExprParser::IndividualDeclarationContext* ExprParser::DeclarationContext::individualDeclaration(size_t i) {
  return getRuleContext<ExprParser::IndividualDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::DeclarationContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::DeclarationContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::DeclarationContext::getRuleIndex() const {
  return ExprParser::RuleDeclaration;
}


antlrcpp::Any ExprParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DeclarationContext* ExprParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 34, ExprParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    datatype();
    setState(234);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::VAR_NAME) {
      setState(233);
      individualDeclaration();
    }
    setState(240);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::Comma) {
      setState(236);
      match(ExprParser::Comma);
      setState(237);
      individualDeclaration();
      setState(242);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(243);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_elseContext ------------------------------------------------------------------

ExprParser::If_elseContext::If_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::If_elseContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

ExprParser::ConditionContext* ExprParser::If_elseContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::If_elseContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

ExprParser::BlockOrStatementContext* ExprParser::If_elseContext::blockOrStatement() {
  return getRuleContext<ExprParser::BlockOrStatementContext>(0);
}

ExprParser::Else_partContext* ExprParser::If_elseContext::else_part() {
  return getRuleContext<ExprParser::Else_partContext>(0);
}


size_t ExprParser::If_elseContext::getRuleIndex() const {
  return ExprParser::RuleIf_else;
}


antlrcpp::Any ExprParser::If_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIf_else(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::If_elseContext* ExprParser::if_else() {
  If_elseContext *_localctx = _tracker.createInstance<If_elseContext>(_ctx, getState());
  enterRule(_localctx, 36, ExprParser::RuleIf_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(ExprParser::T__7);
    setState(246);
    match(ExprParser::LeftParen);
    setState(247);
    condition(0);
    setState(248);
    match(ExprParser::RightParen);
    setState(249);
    blockOrStatement();
    setState(251);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(250);
      else_part();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_partContext ------------------------------------------------------------------

ExprParser::Else_partContext::Else_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::BlockOrStatementContext* ExprParser::Else_partContext::blockOrStatement() {
  return getRuleContext<ExprParser::BlockOrStatementContext>(0);
}


size_t ExprParser::Else_partContext::getRuleIndex() const {
  return ExprParser::RuleElse_part;
}


antlrcpp::Any ExprParser::Else_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitElse_part(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Else_partContext* ExprParser::else_part() {
  Else_partContext *_localctx = _tracker.createInstance<Else_partContext>(_ctx, getState());
  enterRule(_localctx, 38, ExprParser::RuleElse_part);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(ExprParser::T__8);
    setState(254);
    blockOrStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockOrStatementContext ------------------------------------------------------------------

ExprParser::BlockOrStatementContext::BlockOrStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::BlockContext* ExprParser::BlockOrStatementContext::block() {
  return getRuleContext<ExprParser::BlockContext>(0);
}

ExprParser::StatementContext* ExprParser::BlockOrStatementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::BlockOrStatementContext::getRuleIndex() const {
  return ExprParser::RuleBlockOrStatement;
}


antlrcpp::Any ExprParser::BlockOrStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBlockOrStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::BlockOrStatementContext* ExprParser::blockOrStatement() {
  BlockOrStatementContext *_localctx = _tracker.createInstance<BlockOrStatementContext>(_ctx, getState());
  enterRule(_localctx, 40, ExprParser::RuleBlockOrStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::LeftCurly: {
        enterOuterAlt(_localctx, 1);
        setState(256);
        block();
        break;
      }

      case ExprParser::T__1:
      case ExprParser::T__2:
      case ExprParser::T__3:
      case ExprParser::T__4:
      case ExprParser::T__5:
      case ExprParser::T__6:
      case ExprParser::T__7:
      case ExprParser::T__11:
      case ExprParser::T__12:
      case ExprParser::T__13:
      case ExprParser::T__14:
      case ExprParser::T__15:
      case ExprParser::T__16:
      case ExprParser::T__17:
      case ExprParser::T__18:
      case ExprParser::RETURN:
      case ExprParser::LeftParen:
      case ExprParser::ADDOP:
      case ExprParser::INC_DEC:
      case ExprParser::INT_CONST:
      case ExprParser::CHAR:
      case ExprParser::VAR_NAME: {
        enterOuterAlt(_localctx, 2);
        setState(257);
        statement();
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

//----------------- IndividualDeclarationContext ------------------------------------------------------------------

ExprParser::IndividualDeclarationContext::IndividualDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::IndividualDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleIndividualDeclaration;
}

void ExprParser::IndividualDeclarationContext::copyFrom(IndividualDeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayAssignmentContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ArrayAssignmentContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

ExprParser::Array_refContext* ExprParser::ArrayAssignmentContext::array_ref() {
  return getRuleContext<ExprParser::Array_refContext>(0);
}

ExprParser::ArrayAssignmentContext::ArrayAssignmentContext(IndividualDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ArrayAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- D2arrayDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::D2arrayDeclarationContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

std::vector<tree::TerminalNode *> ExprParser::D2arrayDeclarationContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::D2arrayDeclarationContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<tree::TerminalNode *> ExprParser::D2arrayDeclarationContext::INT_CONST() {
  return getTokens(ExprParser::INT_CONST);
}

tree::TerminalNode* ExprParser::D2arrayDeclarationContext::INT_CONST(size_t i) {
  return getToken(ExprParser::INT_CONST, i);
}

std::vector<tree::TerminalNode *> ExprParser::D2arrayDeclarationContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::D2arrayDeclarationContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

ExprParser::Array_refContext* ExprParser::D2arrayDeclarationContext::array_ref() {
  return getRuleContext<ExprParser::Array_refContext>(0);
}

ExprParser::D2arrayDeclarationContext::D2arrayDeclarationContext(IndividualDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::D2arrayDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitD2arrayDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- D2arrayAssignmentContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::D2arrayAssignmentContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

ExprParser::Array_refContext* ExprParser::D2arrayAssignmentContext::array_ref() {
  return getRuleContext<ExprParser::Array_refContext>(0);
}

ExprParser::D2arrayAssignmentContext::D2arrayAssignmentContext(IndividualDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::D2arrayAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitD2arrayAssignment(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ArrayDeclarationContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

tree::TerminalNode* ExprParser::ArrayDeclarationContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

tree::TerminalNode* ExprParser::ArrayDeclarationContext::INT_CONST() {
  return getToken(ExprParser::INT_CONST, 0);
}

tree::TerminalNode* ExprParser::ArrayDeclarationContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

ExprParser::Array_refContext* ExprParser::ArrayDeclarationContext::array_ref() {
  return getRuleContext<ExprParser::Array_refContext>(0);
}

ExprParser::ArrayDeclarationContext::ArrayDeclarationContext(IndividualDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ArrayDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarDeclarationContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::VarDeclarationContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

tree::TerminalNode* ExprParser::VarDeclarationContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExprContext* ExprParser::VarDeclarationContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::VarDeclarationContext::VarDeclarationContext(IndividualDeclarationContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::VarDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarDeclaration(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::IndividualDeclarationContext* ExprParser::individualDeclaration() {
  IndividualDeclarationContext *_localctx = _tracker.createInstance<IndividualDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 42, ExprParser::RuleIndividualDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<IndividualDeclarationContext *>(_tracker.createInstance<ExprParser::VarDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(260);
      match(ExprParser::VAR_NAME);
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::ASSIGN) {
        setState(261);
        match(ExprParser::ASSIGN);
        setState(262);
        expr(0);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<IndividualDeclarationContext *>(_tracker.createInstance<ExprParser::ArrayDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(265);
      match(ExprParser::VAR_NAME);
      setState(266);
      match(ExprParser::LeftSqr);
      setState(267);
      match(ExprParser::INT_CONST);
      setState(268);
      match(ExprParser::RightSqr);
      setState(270);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::ASSIGN) {
        setState(269);
        array_ref();
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<IndividualDeclarationContext *>(_tracker.createInstance<ExprParser::D2arrayDeclarationContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(272);
      match(ExprParser::VAR_NAME);
      setState(273);
      match(ExprParser::LeftSqr);
      setState(274);
      match(ExprParser::INT_CONST);
      setState(275);
      match(ExprParser::RightSqr);
      setState(276);
      match(ExprParser::LeftSqr);
      setState(277);
      match(ExprParser::INT_CONST);
      setState(278);
      match(ExprParser::RightSqr);
      setState(280);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::ASSIGN) {
        setState(279);
        array_ref();
      }
      break;
    }

    case 4: {
      _localctx = dynamic_cast<IndividualDeclarationContext *>(_tracker.createInstance<ExprParser::ArrayAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(282);
      match(ExprParser::VAR_NAME);
      setState(283);
      match(ExprParser::T__9);
      setState(284);
      array_ref();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<IndividualDeclarationContext *>(_tracker.createInstance<ExprParser::D2arrayAssignmentContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(285);
      match(ExprParser::VAR_NAME);
      setState(286);
      match(ExprParser::T__10);
      setState(287);
      array_ref();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarassignContext ------------------------------------------------------------------

ExprParser::VarassignContext::VarassignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::IdentifierContext* ExprParser::VarassignContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::VarassignContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExprContext* ExprParser::VarassignContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::VarassignContext::getRuleIndex() const {
  return ExprParser::RuleVarassign;
}


antlrcpp::Any ExprParser::VarassignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarassign(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarassignContext* ExprParser::varassign() {
  VarassignContext *_localctx = _tracker.createInstance<VarassignContext>(_ctx, getState());
  enterRule(_localctx, 44, ExprParser::RuleVarassign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    identifier();
    setState(291);
    match(ExprParser::ASSIGN);
    setState(292);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

ExprParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ConditionContext::getRuleIndex() const {
  return ExprParser::RuleCondition;
}

void ExprParser::ConditionContext::copyFrom(ConditionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NotCondContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::NotCondContext::NOT() {
  return getToken(ExprParser::NOT, 0);
}

ExprParser::ConditionContext* ExprParser::NotCondContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

ExprParser::NotCondContext::NotCondContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::NotCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNotCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelopExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::RelopExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::RelopExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::RelopExprContext::RELOP() {
  return getToken(ExprParser::RELOP, 0);
}

tree::TerminalNode* ExprParser::RelopExprContext::BITWISE_OP() {
  return getToken(ExprParser::BITWISE_OP, 0);
}

tree::TerminalNode* ExprParser::RelopExprContext::SHIFT_OP() {
  return getToken(ExprParser::SHIFT_OP, 0);
}

tree::TerminalNode* ExprParser::RelopExprContext::EQOP() {
  return getToken(ExprParser::EQOP, 0);
}

tree::TerminalNode* ExprParser::RelopExprContext::AND_OR() {
  return getToken(ExprParser::AND_OR, 0);
}

ExprParser::RelopExprContext::RelopExprContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::RelopExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRelopExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndOrCondContext ------------------------------------------------------------------

std::vector<ExprParser::ConditionContext *> ExprParser::AndOrCondContext::condition() {
  return getRuleContexts<ExprParser::ConditionContext>();
}

ExprParser::ConditionContext* ExprParser::AndOrCondContext::condition(size_t i) {
  return getRuleContext<ExprParser::ConditionContext>(i);
}

tree::TerminalNode* ExprParser::AndOrCondContext::AND_OR() {
  return getToken(ExprParser::AND_OR, 0);
}

ExprParser::AndOrCondContext::AndOrCondContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::AndOrCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAndOrCond(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParanCondContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ParanCondContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

ExprParser::ConditionContext* ExprParser::ParanCondContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

tree::TerminalNode* ExprParser::ParanCondContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

ExprParser::ParanCondContext::ParanCondContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ParanCondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParanCond(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ConditionContext* ExprParser::condition() {
   return condition(0);
}

ExprParser::ConditionContext* ExprParser::condition(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, parentState);
  ExprParser::ConditionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 46;
  enterRecursionRule(_localctx, 46, ExprParser::RuleCondition, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParanCondContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(295);
      match(ExprParser::LeftParen);
      setState(296);
      condition(0);
      setState(297);
      match(ExprParser::RightParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotCondContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(299);
      match(ExprParser::NOT);
      setState(300);
      condition(3);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<RelopExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(301);
      expr(0);
      setState(302);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ExprParser::AND_OR)
        | (1ULL << ExprParser::RELOP)
        | (1ULL << ExprParser::EQOP)
        | (1ULL << ExprParser::BITWISE_OP)
        | (1ULL << ExprParser::SHIFT_OP))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(303);
      expr(0);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(312);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AndOrCondContext>(_tracker.createInstance<ConditionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleCondition);
        setState(307);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(308);
        match(ExprParser::AND_OR);
        setState(309);
        condition(3); 
      }
      setState(314);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PreIncDec2DArrContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PreIncDec2DArrContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::IdentifierContext* ExprParser::PreIncDec2DArrContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::PreIncDec2DArrContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::PreIncDec2DArrContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::PreIncDec2DArrContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::PreIncDec2DArrContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::PreIncDec2DArrContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::PreIncDec2DArrContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

ExprParser::PreIncDec2DArrContext::PreIncDec2DArrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PreIncDec2DArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreIncDec2DArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarnameExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::VarnameExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

ExprParser::VarnameExprContext::VarnameExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::VarnameExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarnameExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::CharExprContext::CHAR() {
  return getToken(ExprParser::CHAR, 0);
}

ExprParser::CharExprContext::CharExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::CharExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncDecArrContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PreIncDecArrContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::IdentifierContext* ExprParser::PreIncDecArrContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::PreIncDecArrContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

ExprParser::ExprContext* ExprParser::PreIncDecArrContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::PreIncDecArrContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

ExprParser::PreIncDecArrContext::PreIncDecArrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PreIncDecArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreIncDecArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::ModExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ModExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ModExprContext::MODULO() {
  return getToken(ExprParser::MODULO, 0);
}

ExprParser::ModExprContext::ModExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ModExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitModExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusMinusExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PlusMinusExprContext::ADDOP() {
  return getToken(ExprParser::ADDOP, 0);
}

ExprParser::ExprContext* ExprParser::PlusMinusExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::PlusMinusExprContext::PlusMinusExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PlusMinusExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPlusMinusExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayValExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::ArrayValExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::ArrayValExprContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

ExprParser::ExprContext* ExprParser::ArrayValExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::ArrayValExprContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

ExprParser::ArrayValExprContext::ArrayValExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ArrayValExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArrayValExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MultiplyExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MultiplyExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::MultiplyExprContext::MULT() {
  return getToken(ExprParser::MULT, 0);
}

ExprParser::MultiplyExprContext::MultiplyExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::MultiplyExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMultiplyExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncDecArrContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::PostIncDecArrContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::PostIncDecArrContext::LeftSqr() {
  return getToken(ExprParser::LeftSqr, 0);
}

ExprParser::ExprContext* ExprParser::PostIncDecArrContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::PostIncDecArrContext::RightSqr() {
  return getToken(ExprParser::RightSqr, 0);
}

tree::TerminalNode* ExprParser::PostIncDecArrContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::PostIncDecArrContext::PostIncDecArrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PostIncDecArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostIncDecArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Func_callContext ------------------------------------------------------------------

ExprParser::CallerContext* ExprParser::Func_callContext::caller() {
  return getRuleContext<ExprParser::CallerContext>(0);
}

tree::TerminalNode* ExprParser::Func_callContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}

ExprParser::Params_listContext* ExprParser::Func_callContext::params_list() {
  return getRuleContext<ExprParser::Params_listContext>(0);
}

ExprParser::Func_callContext::Func_callContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::Func_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFunc_call(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ParenExprContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

ExprParser::ExprContext* ExprParser::ParenExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::ParenExprContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

ExprParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncDecExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::PostIncDecExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

tree::TerminalNode* ExprParser::PostIncDecExprContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::PostIncDecExprContext::PostIncDecExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PostIncDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostIncDecExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstIntExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ConstIntExprContext::INT_CONST() {
  return getToken(ExprParser::INT_CONST, 0);
}

ExprParser::ConstIntExprContext::ConstIntExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ConstIntExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitConstIntExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ShiftOpExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::ShiftOpExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ShiftOpExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ShiftOpExprContext::SHIFT_OP() {
  return getToken(ExprParser::SHIFT_OP, 0);
}

ExprParser::ShiftOpExprContext::ShiftOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::ShiftOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitShiftOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::AddExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AddExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::AddExprContext::ADDOP() {
  return getToken(ExprParser::ADDOP, 0);
}

ExprParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseOpExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::BitwiseOpExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::BitwiseOpExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::BitwiseOpExprContext::BITWISE_OP() {
  return getToken(ExprParser::BITWISE_OP, 0);
}

ExprParser::BitwiseOpExprContext::BitwiseOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::BitwiseOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBitwiseOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncDecExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PreIncDecExprContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::IdentifierContext* ExprParser::PreIncDecExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

ExprParser::PreIncDecExprContext::PreIncDecExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PreIncDecExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreIncDecExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::DivExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DivExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::DivExprContext::DIV() {
  return getToken(ExprParser::DIV, 0);
}

ExprParser::DivExprContext::DivExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::DivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqaulExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::EqaulExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::EqaulExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::EqaulExprContext::EQOP() {
  return getToken(ExprParser::EQOP, 0);
}

ExprParser::EqaulExprContext::EqaulExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::EqaulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEqaulExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExprContext ------------------------------------------------------------------

ExprParser::BoolExprContext::BoolExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncDec2DArrContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::PostIncDec2DArrContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::PostIncDec2DArrContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::PostIncDec2DArrContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::PostIncDec2DArrContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::PostIncDec2DArrContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::PostIncDec2DArrContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::PostIncDec2DArrContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

tree::TerminalNode* ExprParser::PostIncDec2DArrContext::INC_DEC() {
  return getToken(ExprParser::INC_DEC, 0);
}

ExprParser::PostIncDec2DArrContext::PostIncDec2DArrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::PostIncDec2DArrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostIncDec2DArr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- D2ArrayValExprContext ------------------------------------------------------------------

ExprParser::IdentifierContext* ExprParser::D2ArrayValExprContext::identifier() {
  return getRuleContext<ExprParser::IdentifierContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::D2ArrayValExprContext::LeftSqr() {
  return getTokens(ExprParser::LeftSqr);
}

tree::TerminalNode* ExprParser::D2ArrayValExprContext::LeftSqr(size_t i) {
  return getToken(ExprParser::LeftSqr, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::D2ArrayValExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::D2ArrayValExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::D2ArrayValExprContext::RightSqr() {
  return getTokens(ExprParser::RightSqr);
}

tree::TerminalNode* ExprParser::D2ArrayValExprContext::RightSqr(size_t i) {
  return getToken(ExprParser::RightSqr, i);
}

ExprParser::D2ArrayValExprContext::D2ArrayValExprContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ExprParser::D2ArrayValExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitD2ArrayValExpr(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<PostIncDecExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(316);
      identifier();
      setState(317);
      match(ExprParser::INC_DEC);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<PostIncDec2DArrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(319);
      identifier();
      setState(320);
      match(ExprParser::LeftSqr);
      setState(321);
      expr(0);
      setState(322);
      match(ExprParser::RightSqr);
      setState(323);
      match(ExprParser::LeftSqr);
      setState(324);
      expr(0);
      setState(325);
      match(ExprParser::RightSqr);
      setState(326);
      match(ExprParser::INC_DEC);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<PreIncDec2DArrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(328);
      match(ExprParser::INC_DEC);
      setState(329);
      identifier();
      setState(330);
      match(ExprParser::LeftSqr);
      setState(331);
      expr(0);
      setState(332);
      match(ExprParser::RightSqr);
      setState(333);
      match(ExprParser::LeftSqr);
      setState(334);
      expr(0);
      setState(335);
      match(ExprParser::RightSqr);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PostIncDecArrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(337);
      identifier();
      setState(338);
      match(ExprParser::LeftSqr);
      setState(339);
      expr(0);
      setState(340);
      match(ExprParser::RightSqr);
      setState(341);
      match(ExprParser::INC_DEC);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<PreIncDecArrContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(343);
      match(ExprParser::INC_DEC);
      setState(344);
      identifier();
      setState(345);
      match(ExprParser::LeftSqr);
      setState(346);
      expr(0);
      setState(347);
      match(ExprParser::RightSqr);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Func_callContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(349);
      caller();
      setState(350);
      match(ExprParser::VAR_NAME);
      setState(351);
      params_list();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PlusMinusExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(353);
      match(ExprParser::ADDOP);
      setState(354);
      expr(16);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PreIncDecExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(355);
      match(ExprParser::INC_DEC);
      setState(356);
      identifier();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(357);
      match(ExprParser::LeftParen);
      setState(358);
      expr(0);
      setState(359);
      match(ExprParser::RightParen);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<VarnameExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(361);
      identifier();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<ConstIntExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(362);
      match(ExprParser::INT_CONST);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<BoolExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(363);
      dynamic_cast<BoolExprContext *>(_localctx)->BOOL = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ExprParser::T__11

      || _la == ExprParser::T__12)) {
        dynamic_cast<BoolExprContext *>(_localctx)->BOOL = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<ArrayValExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(364);
      identifier();
      setState(365);
      match(ExprParser::LeftSqr);
      setState(366);
      expr(0);
      setState(367);
      match(ExprParser::RightSqr);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<D2ArrayValExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(369);
      identifier();
      setState(370);
      match(ExprParser::LeftSqr);
      setState(371);
      expr(0);
      setState(372);
      match(ExprParser::RightSqr);
      setState(373);
      match(ExprParser::LeftSqr);
      setState(374);
      expr(0);
      setState(375);
      match(ExprParser::RightSqr);
      break;
    }

    case 15: {
      _localctx = _tracker.createInstance<CharExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(377);
      match(ExprParser::CHAR);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(403);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(401);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ModExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(380);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(381);
          match(ExprParser::MODULO);
          setState(382);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(383);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(384);
          match(ExprParser::DIV);
          setState(385);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MultiplyExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(386);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(387);
          match(ExprParser::MULT);
          setState(388);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(389);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(390);
          match(ExprParser::ADDOP);
          setState(391);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqaulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(392);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(393);
          match(ExprParser::EQOP);
          setState(394);
          expr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ShiftOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(395);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(396);
          match(ExprParser::SHIFT_OP);
          setState(397);
          expr(10);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<BitwiseOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(398);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(399);
          match(ExprParser::BITWISE_OP);
          setState(400);
          expr(9);
          break;
        }

        } 
      }
      setState(405);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

ExprParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::RetContext::RETURN() {
  return getToken(ExprParser::RETURN, 0);
}

tree::TerminalNode* ExprParser::RetContext::Semi() {
  return getToken(ExprParser::Semi, 0);
}

ExprParser::ExprContext* ExprParser::RetContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::RetContext::getRuleIndex() const {
  return ExprParser::RuleRet;
}


antlrcpp::Any ExprParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RetContext* ExprParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 50, ExprParser::RuleRet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(ExprParser::RETURN);
    setState(408);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__11)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::LeftParen)
      | (1ULL << ExprParser::ADDOP)
      | (1ULL << ExprParser::INC_DEC)
      | (1ULL << ExprParser::INT_CONST)
      | (1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::VAR_NAME))) != 0)) {
      setState(407);
      expr(0);
    }
    setState(410);
    match(ExprParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_refContext ------------------------------------------------------------------

ExprParser::Array_refContext::Array_refContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Array_refContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

tree::TerminalNode* ExprParser::Array_refContext::LeftCurly() {
  return getToken(ExprParser::LeftCurly, 0);
}

tree::TerminalNode* ExprParser::Array_refContext::RightCurly() {
  return getToken(ExprParser::RightCurly, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::Array_refContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Array_refContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Array_refContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::Array_refContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::Array_refContext::getRuleIndex() const {
  return ExprParser::RuleArray_ref;
}


antlrcpp::Any ExprParser::Array_refContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitArray_ref(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Array_refContext* ExprParser::array_ref() {
  Array_refContext *_localctx = _tracker.createInstance<Array_refContext>(_ctx, getState());
  enterRule(_localctx, 52, ExprParser::RuleArray_ref);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(ExprParser::ASSIGN);
    setState(413);
    match(ExprParser::LeftCurly);
    setState(422);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__11)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::LeftParen)
      | (1ULL << ExprParser::ADDOP)
      | (1ULL << ExprParser::INC_DEC)
      | (1ULL << ExprParser::INT_CONST)
      | (1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::VAR_NAME))) != 0)) {
      setState(414);
      expr(0);
      setState(419);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::Comma) {
        setState(415);
        match(ExprParser::Comma);
        setState(416);
        expr(0);
        setState(421);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(424);
    match(ExprParser::RightCurly);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Params_listContext ------------------------------------------------------------------

ExprParser::Params_listContext::Params_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Params_listContext::LeftParen() {
  return getToken(ExprParser::LeftParen, 0);
}

tree::TerminalNode* ExprParser::Params_listContext::RightParen() {
  return getToken(ExprParser::RightParen, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::Params_listContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::Params_listContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::Params_listContext::Comma() {
  return getTokens(ExprParser::Comma);
}

tree::TerminalNode* ExprParser::Params_listContext::Comma(size_t i) {
  return getToken(ExprParser::Comma, i);
}


size_t ExprParser::Params_listContext::getRuleIndex() const {
  return ExprParser::RuleParams_list;
}


antlrcpp::Any ExprParser::Params_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParams_list(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Params_listContext* ExprParser::params_list() {
  Params_listContext *_localctx = _tracker.createInstance<Params_listContext>(_ctx, getState());
  enterRule(_localctx, 54, ExprParser::RuleParams_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(426);
    match(ExprParser::LeftParen);
    setState(435);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__11)
      | (1ULL << ExprParser::T__12)
      | (1ULL << ExprParser::T__18)
      | (1ULL << ExprParser::LeftParen)
      | (1ULL << ExprParser::ADDOP)
      | (1ULL << ExprParser::INC_DEC)
      | (1ULL << ExprParser::INT_CONST)
      | (1ULL << ExprParser::CHAR)
      | (1ULL << ExprParser::VAR_NAME))) != 0)) {
      setState(427);
      expr(0);
      setState(432);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::Comma) {
        setState(428);
        match(ExprParser::Comma);
        setState(429);
        expr(0);
        setState(434);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(437);
    match(ExprParser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatatypeContext ------------------------------------------------------------------

ExprParser::DatatypeContext::DatatypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DatatypeContext::getRuleIndex() const {
  return ExprParser::RuleDatatype;
}


antlrcpp::Any ExprParser::DatatypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDatatype(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::DatatypeContext* ExprParser::datatype() {
  DatatypeContext *_localctx = _tracker.createInstance<DatatypeContext>(_ctx, getState());
  enterRule(_localctx, 56, ExprParser::RuleDatatype);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__13)
      | (1ULL << ExprParser::T__14)
      | (1ULL << ExprParser::T__15)
      | (1ULL << ExprParser::T__16)
      | (1ULL << ExprParser::T__17))) != 0))) {
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

//----------------- IdentifierContext ------------------------------------------------------------------

ExprParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IdentifierContext::VAR_NAME() {
  return getToken(ExprParser::VAR_NAME, 0);
}


size_t ExprParser::IdentifierContext::getRuleIndex() const {
  return ExprParser::RuleIdentifier;
}


antlrcpp::Any ExprParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IdentifierContext* ExprParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 58, ExprParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(ExprParser::VAR_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallerContext ------------------------------------------------------------------

ExprParser::CallerContext::CallerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::CallerContext::getRuleIndex() const {
  return ExprParser::RuleCaller;
}


antlrcpp::Any ExprParser::CallerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCaller(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CallerContext* ExprParser::caller() {
  CallerContext *_localctx = _tracker.createInstance<CallerContext>(_ctx, getState());
  enterRule(_localctx, 60, ExprParser::RuleCaller);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(ExprParser::T__18);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 23: return conditionSempred(dynamic_cast<ConditionContext *>(context), predicateIndex);
    case 24: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::conditionSempred(ConditionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 13);
    case 3: return precpred(_ctx, 12);
    case 4: return precpred(_ctx, 11);
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "root", "blankdeclaration", "globaldeclaration", "func_declaration", 
  "list_args", "block", "statement", "assignment", "call", "printer", "input", 
  "inputargs", "break_stmnt", "cont_stmnt", "while_loop", "for_loop", "declaration", 
  "if_else", "else_part", "blockOrStatement", "individualDeclaration", "varassign", 
  "condition", "expr", "ret", "array_ref", "params_list", "datatype", "identifier", 
  "caller"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'function'", "'print'", "'input'", "'break'", "'continue'", "'while'", 
  "'for'", "'if'", "'else'", "'[]'", "'[][]'", "'true'", "'false'", "'int'", 
  "'uint'", "'bool'", "'char'", "'void'", "'callout'", "'return'", "','", 
  "';'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'\"'", "", "", "'*'", 
  "'%'", "'/'", "", "", "", "", "'='"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "RETURN", "Comma", "Semi", "LeftParen", "RightParen", "LeftSqr", 
  "RightSqr", "LeftCurly", "RightCurly", "DOUBLEQUOTE", "NOT", "ADDOP", 
  "MULT", "MODULO", "DIV", "INC_DEC", "AND_OR", "RELOP", "EQOP", "ASSIGN", 
  "BITWISE_OP", "SHIFT_OP", "STRING", "INT_CONST", "CHAR", "VAR_NAME", "COMMENT", 
  "SINGLECOMMENT", "NS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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
    0x3, 0x32, 0x1c0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x6, 0x3, 0x44, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x45, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x4a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x50, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x54, 0xa, 0x5, 0xc, 
    0x5, 0xe, 0x5, 0x57, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x69, 0xa, 
    0x7, 0xc, 0x7, 0xe, 0x7, 0x6c, 0xb, 0x7, 0x5, 0x7, 0x6e, 0xa, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x74, 0xa, 0x8, 0xc, 0x8, 
    0xe, 0x8, 0x77, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x89, 0xa, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0xa3, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x5, 0xc, 0xae, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0xb3, 0xa, 0xc, 0x7, 0xc, 0xb5, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xb8, 
    0xb, 0xc, 0x5, 0xc, 0xba, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd3, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xed, 
    0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xf1, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0xf4, 0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xfe, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x105, 
    0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x10a, 0xa, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x111, 
    0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x11b, 0xa, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x123, 
    0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x134, 0xa, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0x139, 0xa, 0x19, 0xc, 0x19, 0xe, 0x19, 
    0x13c, 0xb, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
    0x1a, 0x17d, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x194, 0xa, 0x1a, 
    0xc, 0x1a, 0xe, 0x1a, 0x197, 0xb, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
    0x19b, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x1a4, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x1a7, 0xb, 0x1c, 0x5, 0x1c, 0x1a9, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0x1b1, 0xa, 0x1d, 
    0xc, 0x1d, 0xe, 0x1d, 0x1b4, 0xb, 0x1d, 0x5, 0x1d, 0x1b6, 0xa, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x2, 0x4, 0x30, 0x32, 0x21, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x2, 0x5, 0x4, 0x2, 0x26, 0x28, 0x2a, 0x2b, 
    0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x10, 0x14, 0x2, 0x1e3, 0x2, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x49, 0x3, 0x2, 0x2, 0x2, 0x6, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0xe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x10, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x14, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x18, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x20, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xea, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0x28, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x122, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x133, 0x3, 0x2, 0x2, 0x2, 0x32, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x198, 0x3, 0x2, 0x2, 0x2, 0x36, 0x19e, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1b9, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x41, 0x5, 0x4, 0x3, 0x2, 0x41, 0x3, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 
    0x5, 0xa, 0x6, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x5, 0x8, 0x5, 
    0x2, 0x48, 0x4a, 0x5, 0x6, 0x4, 0x2, 0x49, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x3a, 0x1e, 0x2, 0x4e, 0x50, 0x5, 
    0x2c, 0x17, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x55, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x17, 0x2, 
    0x2, 0x52, 0x54, 0x5, 0x2c, 0x17, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x18, 0x2, 0x2, 0x59, 0x5a, 0x5, 
    0x4, 0x3, 0x2, 0x5a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x3, 
    0x2, 0x2, 0x5c, 0x5d, 0x5, 0x3a, 0x1e, 0x2, 0x5d, 0x5e, 0x7, 0x2f, 0x2, 
    0x2, 0x5e, 0x5f, 0x5, 0xc, 0x7, 0x2, 0x5f, 0x60, 0x5, 0xe, 0x8, 0x2, 
    0x60, 0xb, 0x3, 0x2, 0x2, 0x2, 0x61, 0x6d, 0x7, 0x19, 0x2, 0x2, 0x62, 
    0x63, 0x5, 0x3a, 0x1e, 0x2, 0x63, 0x6a, 0x7, 0x2f, 0x2, 0x2, 0x64, 0x65, 
    0x7, 0x17, 0x2, 0x2, 0x65, 0x66, 0x5, 0x3a, 0x1e, 0x2, 0x66, 0x67, 0x7, 
    0x2f, 0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x64, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x7, 0x1a, 0x2, 0x2, 0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x75, 0x7, 
    0x1d, 0x2, 0x2, 0x72, 0x74, 0x5, 0x10, 0x9, 0x2, 0x73, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x1e, 0x2, 0x2, 0x79, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x89, 0x5, 0x14, 0xb, 0x2, 0x7b, 0x89, 
    0x5, 0x12, 0xa, 0x2, 0x7c, 0x89, 0x5, 0x24, 0x13, 0x2, 0x7d, 0x89, 0x5, 
    0x34, 0x1b, 0x2, 0x7e, 0x7f, 0x5, 0x32, 0x1a, 0x2, 0x7f, 0x80, 0x7, 
    0x18, 0x2, 0x2, 0x80, 0x89, 0x3, 0x2, 0x2, 0x2, 0x81, 0x89, 0x5, 0x16, 
    0xc, 0x2, 0x82, 0x89, 0x5, 0x26, 0x14, 0x2, 0x83, 0x89, 0x5, 0x20, 0x11, 
    0x2, 0x84, 0x89, 0x5, 0x22, 0x12, 0x2, 0x85, 0x89, 0x5, 0x18, 0xd, 0x2, 
    0x86, 0x89, 0x5, 0x1c, 0xf, 0x2, 0x87, 0x89, 0x5, 0x1e, 0x10, 0x2, 0x88, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x88, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x88, 0x7e, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x81, 0x3, 0x2, 0x2, 0x2, 0x88, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x83, 0x3, 0x2, 0x2, 0x2, 0x88, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x85, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x87, 0x3, 0x2, 0x2, 0x2, 0x89, 0x11, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x8b, 0x5, 0x3c, 0x1f, 0x2, 0x8b, 0x8c, 0x7, 0x29, 0x2, 0x2, 0x8c, 0x8d, 
    0x5, 0x32, 0x1a, 0x2, 0x8d, 0x8e, 0x7, 0x18, 0x2, 0x2, 0x8e, 0xa3, 0x3, 
    0x2, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x3c, 0x1f, 0x2, 0x90, 0x91, 0x7, 0x1b, 
    0x2, 0x2, 0x91, 0x92, 0x5, 0x32, 0x1a, 0x2, 0x92, 0x93, 0x7, 0x1c, 0x2, 
    0x2, 0x93, 0x94, 0x7, 0x1b, 0x2, 0x2, 0x94, 0x95, 0x5, 0x32, 0x1a, 0x2, 
    0x95, 0x96, 0x7, 0x1c, 0x2, 0x2, 0x96, 0x97, 0x7, 0x29, 0x2, 0x2, 0x97, 
    0x98, 0x5, 0x32, 0x1a, 0x2, 0x98, 0x99, 0x7, 0x18, 0x2, 0x2, 0x99, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x3c, 0x1f, 0x2, 0x9b, 0x9c, 0x7, 
    0x1b, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x32, 0x1a, 0x2, 0x9d, 0x9e, 0x7, 0x1c, 
    0x2, 0x2, 0x9e, 0x9f, 0x7, 0x29, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x32, 0x1a, 
    0x2, 0xa0, 0xa1, 0x7, 0x18, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x8f, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x9a, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 
    0x5, 0x3e, 0x20, 0x2, 0xa5, 0xa6, 0x7, 0x2f, 0x2, 0x2, 0xa6, 0xa7, 0x5, 
    0x38, 0x1d, 0x2, 0xa7, 0xa8, 0x7, 0x18, 0x2, 0x2, 0xa8, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x7, 0x4, 0x2, 0x2, 0xaa, 0xb9, 0x7, 0x19, 0x2, 
    0x2, 0xab, 0xae, 0x5, 0x32, 0x1a, 0x2, 0xac, 0xae, 0x7, 0x2c, 0x2, 0x2, 
    0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x7, 0x17, 0x2, 0x2, 0xb0, 0xb3, 
    0x5, 0x32, 0x1a, 0x2, 0xb1, 0xb3, 0x7, 0x2c, 0x2, 0x2, 0xb2, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x1a, 0x2, 0x2, 0xbc, 0xbd, 0x7, 
    0x18, 0x2, 0x2, 0xbd, 0x17, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x5, 
    0x2, 0x2, 0xbf, 0xc0, 0x7, 0x19, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x1a, 0xe, 
    0x2, 0xc1, 0xc2, 0x7, 0x1a, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x18, 0x2, 0x2, 
    0xc3, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xd3, 0x5, 0x3c, 0x1f, 0x2, 0xc5, 
    0xc6, 0x5, 0x3c, 0x1f, 0x2, 0xc6, 0xc7, 0x7, 0x1b, 0x2, 0x2, 0xc7, 0xc8, 
    0x5, 0x32, 0x1a, 0x2, 0xc8, 0xc9, 0x7, 0x1c, 0x2, 0x2, 0xc9, 0xca, 0x7, 
    0x1b, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x32, 0x1a, 0x2, 0xcb, 0xcc, 0x7, 0x1c, 
    0x2, 0x2, 0xcc, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x3c, 0x1f, 
    0x2, 0xce, 0xcf, 0x7, 0x1b, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x32, 0x1a, 0x2, 
    0xd0, 0xd1, 0x7, 0x1c, 0x2, 0x2, 0xd1, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 
    0x6, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x18, 0x2, 0x2, 0xd6, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0xd8, 0x7, 0x7, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x18, 0x2, 
    0x2, 0xd9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x8, 0x2, 0x2, 
    0xdb, 0xdc, 0x7, 0x19, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x30, 0x19, 0x2, 0xdd, 
    0xde, 0x7, 0x1a, 0x2, 0x2, 0xde, 0xdf, 0x5, 0x2a, 0x16, 0x2, 0xdf, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x7, 0x9, 0x2, 0x2, 0xe1, 0xe2, 0x7, 
    0x19, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x2e, 0x18, 0x2, 0xe3, 0xe4, 0x7, 0x18, 
    0x2, 0x2, 0xe4, 0xe5, 0x5, 0x30, 0x19, 0x2, 0xe5, 0xe6, 0x7, 0x18, 0x2, 
    0x2, 0xe6, 0xe7, 0x5, 0x2e, 0x18, 0x2, 0xe7, 0xe8, 0x7, 0x1a, 0x2, 0x2, 
    0xe8, 0xe9, 0x5, 0x2a, 0x16, 0x2, 0xe9, 0x23, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xec, 0x5, 0x3a, 0x1e, 0x2, 0xeb, 0xed, 0x5, 0x2c, 0x17, 0x2, 0xec, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x7, 0x17, 0x2, 0x2, 0xef, 0xf1, 0x5, 
    0x2c, 0x17, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 
    0x2, 0xf3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf6, 0x7, 0x18, 0x2, 0x2, 0xf6, 0x25, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xf8, 0x7, 0xa, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x19, 0x2, 0x2, 0xf9, 0xfa, 
    0x5, 0x30, 0x19, 0x2, 0xfa, 0xfb, 0x7, 0x1a, 0x2, 0x2, 0xfb, 0xfd, 0x5, 
    0x2a, 0x16, 0x2, 0xfc, 0xfe, 0x5, 0x28, 0x15, 0x2, 0xfd, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0x100, 0x7, 0xb, 0x2, 0x2, 0x100, 0x101, 0x5, 0x2a, 
    0x16, 0x2, 0x101, 0x29, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x5, 0xe, 
    0x8, 0x2, 0x103, 0x105, 0x5, 0x10, 0x9, 0x2, 0x104, 0x102, 0x3, 0x2, 
    0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x109, 0x7, 0x2f, 0x2, 0x2, 0x107, 0x108, 0x7, 0x29, 0x2, 
    0x2, 0x108, 0x10a, 0x5, 0x32, 0x1a, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x123, 0x3, 0x2, 0x2, 
    0x2, 0x10b, 0x10c, 0x7, 0x2f, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x1b, 0x2, 
    0x2, 0x10d, 0x10e, 0x7, 0x2d, 0x2, 0x2, 0x10e, 0x110, 0x7, 0x1c, 0x2, 
    0x2, 0x10f, 0x111, 0x5, 0x36, 0x1c, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x123, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x113, 0x7, 0x2f, 0x2, 0x2, 0x113, 0x114, 0x7, 0x1b, 0x2, 
    0x2, 0x114, 0x115, 0x7, 0x2d, 0x2, 0x2, 0x115, 0x116, 0x7, 0x1c, 0x2, 
    0x2, 0x116, 0x117, 0x7, 0x1b, 0x2, 0x2, 0x117, 0x118, 0x7, 0x2d, 0x2, 
    0x2, 0x118, 0x11a, 0x7, 0x1c, 0x2, 0x2, 0x119, 0x11b, 0x5, 0x36, 0x1c, 
    0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 
    0x2, 0x11b, 0x123, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x2f, 0x2, 
    0x2, 0x11d, 0x11e, 0x7, 0xc, 0x2, 0x2, 0x11e, 0x123, 0x5, 0x36, 0x1c, 
    0x2, 0x11f, 0x120, 0x7, 0x2f, 0x2, 0x2, 0x120, 0x121, 0x7, 0xd, 0x2, 
    0x2, 0x121, 0x123, 0x5, 0x36, 0x1c, 0x2, 0x122, 0x106, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x122, 0x112, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x122, 0x11f, 0x3, 0x2, 0x2, 
    0x2, 0x123, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x3c, 0x1f, 
    0x2, 0x125, 0x126, 0x7, 0x29, 0x2, 0x2, 0x126, 0x127, 0x5, 0x32, 0x1a, 
    0x2, 0x127, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x8, 0x19, 0x1, 
    0x2, 0x129, 0x12a, 0x7, 0x19, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x30, 0x19, 
    0x2, 0x12b, 0x12c, 0x7, 0x1a, 0x2, 0x2, 0x12c, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x12d, 0x12e, 0x7, 0x20, 0x2, 0x2, 0x12e, 0x134, 0x5, 0x30, 0x19, 
    0x5, 0x12f, 0x130, 0x5, 0x32, 0x1a, 0x2, 0x130, 0x131, 0x9, 0x2, 0x2, 
    0x2, 0x131, 0x132, 0x5, 0x32, 0x1a, 0x2, 0x132, 0x134, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x128, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x133, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x134, 0x13a, 0x3, 0x2, 0x2, 
    0x2, 0x135, 0x136, 0xc, 0x4, 0x2, 0x2, 0x136, 0x137, 0x7, 0x26, 0x2, 
    0x2, 0x137, 0x139, 0x5, 0x30, 0x19, 0x5, 0x138, 0x135, 0x3, 0x2, 0x2, 
    0x2, 0x139, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x8, 0x1a, 0x1, 0x2, 
    0x13e, 0x13f, 0x5, 0x3c, 0x1f, 0x2, 0x13f, 0x140, 0x7, 0x25, 0x2, 0x2, 
    0x140, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x5, 0x3c, 0x1f, 0x2, 
    0x142, 0x143, 0x7, 0x1b, 0x2, 0x2, 0x143, 0x144, 0x5, 0x32, 0x1a, 0x2, 
    0x144, 0x145, 0x7, 0x1c, 0x2, 0x2, 0x145, 0x146, 0x7, 0x1b, 0x2, 0x2, 
    0x146, 0x147, 0x5, 0x32, 0x1a, 0x2, 0x147, 0x148, 0x7, 0x1c, 0x2, 0x2, 
    0x148, 0x149, 0x7, 0x25, 0x2, 0x2, 0x149, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x14a, 0x14b, 0x7, 0x25, 0x2, 0x2, 0x14b, 0x14c, 0x5, 0x3c, 0x1f, 0x2, 
    0x14c, 0x14d, 0x7, 0x1b, 0x2, 0x2, 0x14d, 0x14e, 0x5, 0x32, 0x1a, 0x2, 
    0x14e, 0x14f, 0x7, 0x1c, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x1b, 0x2, 0x2, 
    0x150, 0x151, 0x5, 0x32, 0x1a, 0x2, 0x151, 0x152, 0x7, 0x1c, 0x2, 0x2, 
    0x152, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x5, 0x3c, 0x1f, 0x2, 
    0x154, 0x155, 0x7, 0x1b, 0x2, 0x2, 0x155, 0x156, 0x5, 0x32, 0x1a, 0x2, 
    0x156, 0x157, 0x7, 0x1c, 0x2, 0x2, 0x157, 0x158, 0x7, 0x25, 0x2, 0x2, 
    0x158, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x25, 0x2, 0x2, 
    0x15a, 0x15b, 0x5, 0x3c, 0x1f, 0x2, 0x15b, 0x15c, 0x7, 0x1b, 0x2, 0x2, 
    0x15c, 0x15d, 0x5, 0x32, 0x1a, 0x2, 0x15d, 0x15e, 0x7, 0x1c, 0x2, 0x2, 
    0x15e, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x160, 0x5, 0x3e, 0x20, 0x2, 
    0x160, 0x161, 0x7, 0x2f, 0x2, 0x2, 0x161, 0x162, 0x5, 0x38, 0x1d, 0x2, 
    0x162, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x7, 0x21, 0x2, 0x2, 
    0x164, 0x17d, 0x5, 0x32, 0x1a, 0x12, 0x165, 0x166, 0x7, 0x25, 0x2, 0x2, 
    0x166, 0x17d, 0x5, 0x3c, 0x1f, 0x2, 0x167, 0x168, 0x7, 0x19, 0x2, 0x2, 
    0x168, 0x169, 0x5, 0x32, 0x1a, 0x2, 0x169, 0x16a, 0x7, 0x1a, 0x2, 0x2, 
    0x16a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x17d, 0x5, 0x3c, 0x1f, 0x2, 
    0x16c, 0x17d, 0x7, 0x2d, 0x2, 0x2, 0x16d, 0x17d, 0x9, 0x3, 0x2, 0x2, 
    0x16e, 0x16f, 0x5, 0x3c, 0x1f, 0x2, 0x16f, 0x170, 0x7, 0x1b, 0x2, 0x2, 
    0x170, 0x171, 0x5, 0x32, 0x1a, 0x2, 0x171, 0x172, 0x7, 0x1c, 0x2, 0x2, 
    0x172, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x5, 0x3c, 0x1f, 0x2, 
    0x174, 0x175, 0x7, 0x1b, 0x2, 0x2, 0x175, 0x176, 0x5, 0x32, 0x1a, 0x2, 
    0x176, 0x177, 0x7, 0x1c, 0x2, 0x2, 0x177, 0x178, 0x7, 0x1b, 0x2, 0x2, 
    0x178, 0x179, 0x5, 0x32, 0x1a, 0x2, 0x179, 0x17a, 0x7, 0x1c, 0x2, 0x2, 
    0x17a, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 0x7, 0x2e, 0x2, 0x2, 
    0x17c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x153, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x159, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x163, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x167, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x16b, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x16d, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x173, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x195, 0x3, 0x2, 0x2, 0x2, 
    0x17e, 0x17f, 0xc, 0x10, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x23, 0x2, 0x2, 
    0x180, 0x194, 0x5, 0x32, 0x1a, 0x11, 0x181, 0x182, 0xc, 0xf, 0x2, 0x2, 
    0x182, 0x183, 0x7, 0x24, 0x2, 0x2, 0x183, 0x194, 0x5, 0x32, 0x1a, 0x10, 
    0x184, 0x185, 0xc, 0xe, 0x2, 0x2, 0x185, 0x186, 0x7, 0x22, 0x2, 0x2, 
    0x186, 0x194, 0x5, 0x32, 0x1a, 0xf, 0x187, 0x188, 0xc, 0xd, 0x2, 0x2, 
    0x188, 0x189, 0x7, 0x21, 0x2, 0x2, 0x189, 0x194, 0x5, 0x32, 0x1a, 0xe, 
    0x18a, 0x18b, 0xc, 0xc, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x28, 0x2, 0x2, 
    0x18c, 0x194, 0x5, 0x32, 0x1a, 0xd, 0x18d, 0x18e, 0xc, 0xb, 0x2, 0x2, 
    0x18e, 0x18f, 0x7, 0x2b, 0x2, 0x2, 0x18f, 0x194, 0x5, 0x32, 0x1a, 0xc, 
    0x190, 0x191, 0xc, 0xa, 0x2, 0x2, 0x191, 0x192, 0x7, 0x2a, 0x2, 0x2, 
    0x192, 0x194, 0x5, 0x32, 0x1a, 0xb, 0x193, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x181, 0x3, 0x2, 0x2, 0x2, 0x193, 0x184, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x187, 0x3, 0x2, 0x2, 0x2, 0x193, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x193, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x197, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x33, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19a, 0x7, 0x16, 0x2, 0x2, 0x199, 
    0x19b, 0x5, 0x32, 0x1a, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19a, 
    0x19b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19d, 0x7, 0x18, 0x2, 0x2, 0x19d, 0x35, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x19f, 0x7, 0x29, 0x2, 0x2, 0x19f, 0x1a8, 0x7, 0x1d, 0x2, 0x2, 0x1a0, 
    0x1a5, 0x5, 0x32, 0x1a, 0x2, 0x1a1, 0x1a2, 0x7, 0x17, 0x2, 0x2, 0x1a2, 
    0x1a4, 0x5, 0x32, 0x1a, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 
    0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a7, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a8, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 
    0x1ab, 0x7, 0x1e, 0x2, 0x2, 0x1ab, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x1b5, 0x7, 0x19, 0x2, 0x2, 0x1ad, 0x1b2, 0x5, 0x32, 0x1a, 0x2, 0x1ae, 
    0x1af, 0x7, 0x17, 0x2, 0x2, 0x1af, 0x1b1, 0x5, 0x32, 0x1a, 0x2, 0x1b0, 
    0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b5, 
    0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
    0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x7, 0x1a, 0x2, 0x2, 0x1b8, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x9, 0x4, 0x2, 0x2, 0x1ba, 0x3b, 
    0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x2f, 0x2, 0x2, 0x1bc, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x7, 0x15, 0x2, 0x2, 0x1be, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x45, 0x49, 0x4f, 0x55, 0x6a, 0x6d, 0x75, 
    0x88, 0xa2, 0xad, 0xb2, 0xb6, 0xb9, 0xd2, 0xec, 0xf2, 0xfd, 0x104, 0x109, 
    0x110, 0x11a, 0x122, 0x133, 0x13a, 0x17c, 0x193, 0x195, 0x19a, 0x1a5, 
    0x1a8, 0x1b2, 0x1b5, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
