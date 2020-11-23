// Generated from /home/aizensosuke/Documents/SEM7/Compilers/AST/phase2/expr-ast-antlr/Expr.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ExprParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, RETURN=20, Comma=21, Semi=22, LeftParen=23, RightParen=24, 
		LeftSqr=25, RightSqr=26, LeftCurly=27, RightCurly=28, DOUBLEQUOTE=29, 
		NOT=30, ADDOP=31, MULT=32, MODULO=33, DIV=34, INC_DEC=35, AND_OR=36, RELOP=37, 
		EQOP=38, ASSIGN=39, BITWISE_OP=40, SHIFT_OP=41, STRING=42, INT_CONST=43, 
		CHAR=44, VAR_NAME=45, COMMENT=46, SINGLECOMMENT=47, NS=48;
	public static final int
		RULE_prog = 0, RULE_root = 1, RULE_blankdeclaration = 2, RULE_globaldeclaration = 3, 
		RULE_func_declaration = 4, RULE_list_args = 5, RULE_block = 6, RULE_statement = 7, 
		RULE_assignment = 8, RULE_call = 9, RULE_printer = 10, RULE_input = 11, 
		RULE_inputargs = 12, RULE_break_stmnt = 13, RULE_cont_stmnt = 14, RULE_while_loop = 15, 
		RULE_for_loop = 16, RULE_declaration = 17, RULE_if_else = 18, RULE_else_part = 19, 
		RULE_blockOrStatement = 20, RULE_individualDeclaration = 21, RULE_varassign = 22, 
		RULE_condition = 23, RULE_expr = 24, RULE_ret = 25, RULE_array_ref = 26, 
		RULE_params_list = 27, RULE_datatype = 28, RULE_identifier = 29, RULE_caller = 30;
	public static final String[] ruleNames = {
		"prog", "root", "blankdeclaration", "globaldeclaration", "func_declaration", 
		"list_args", "block", "statement", "assignment", "call", "printer", "input", 
		"inputargs", "break_stmnt", "cont_stmnt", "while_loop", "for_loop", "declaration", 
		"if_else", "else_part", "blockOrStatement", "individualDeclaration", "varassign", 
		"condition", "expr", "ret", "array_ref", "params_list", "datatype", "identifier", 
		"caller"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'function'", "'print'", "'input'", "'break'", "'continue'", "'while'", 
		"'for'", "'if'", "'else'", "'[]'", "'[][]'", "'true'", "'false'", "'int'", 
		"'uint'", "'bool'", "'char'", "'void'", "'callout'", "'return'", "','", 
		"';'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'\"'", null, null, "'*'", 
		"'%'", "'/'", null, null, null, null, "'='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, null, 
		null, null, null, null, null, null, null, null, "RETURN", "Comma", "Semi", 
		"LeftParen", "RightParen", "LeftSqr", "RightSqr", "LeftCurly", "RightCurly", 
		"DOUBLEQUOTE", "NOT", "ADDOP", "MULT", "MODULO", "DIV", "INC_DEC", "AND_OR", 
		"RELOP", "EQOP", "ASSIGN", "BITWISE_OP", "SHIFT_OP", "STRING", "INT_CONST", 
		"CHAR", "VAR_NAME", "COMMENT", "SINGLECOMMENT", "NS"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Expr.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ExprParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class ProgContext extends ParserRuleContext {
		public RootContext root() {
			return getRuleContext(RootContext.class,0);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(62);
			root();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RootContext extends ParserRuleContext {
		public List<Func_declarationContext> func_declaration() {
			return getRuleContexts(Func_declarationContext.class);
		}
		public Func_declarationContext func_declaration(int i) {
			return getRuleContext(Func_declarationContext.class,i);
		}
		public GlobaldeclarationContext globaldeclaration() {
			return getRuleContext(GlobaldeclarationContext.class,0);
		}
		public BlankdeclarationContext blankdeclaration() {
			return getRuleContext(BlankdeclarationContext.class,0);
		}
		public RootContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_root; }
	}

	public final RootContext root() throws RecognitionException {
		RootContext _localctx = new RootContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_root);
		int _la;
		try {
			setState(71);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(65); 
				_errHandler.sync(this);
				_la = _input.LA(1);
				do {
					{
					{
					setState(64);
					func_declaration();
					}
					}
					setState(67); 
					_errHandler.sync(this);
					_la = _input.LA(1);
				} while ( _la==T__0 );
				}
				break;
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
				enterOuterAlt(_localctx, 2);
				{
				setState(69);
				globaldeclaration();
				}
				break;
			case EOF:
				enterOuterAlt(_localctx, 3);
				{
				setState(70);
				blankdeclaration();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlankdeclarationContext extends ParserRuleContext {
		public BlankdeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blankdeclaration; }
	}

	public final BlankdeclarationContext blankdeclaration() throws RecognitionException {
		BlankdeclarationContext _localctx = new BlankdeclarationContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_blankdeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GlobaldeclarationContext extends ParserRuleContext {
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public RootContext root() {
			return getRuleContext(RootContext.class,0);
		}
		public DatatypeContext datatype() {
			return getRuleContext(DatatypeContext.class,0);
		}
		public List<IndividualDeclarationContext> individualDeclaration() {
			return getRuleContexts(IndividualDeclarationContext.class);
		}
		public IndividualDeclarationContext individualDeclaration(int i) {
			return getRuleContext(IndividualDeclarationContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public GlobaldeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_globaldeclaration; }
	}

	public final GlobaldeclarationContext globaldeclaration() throws RecognitionException {
		GlobaldeclarationContext _localctx = new GlobaldeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_globaldeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(75);
			datatype();
			}
			setState(77);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR_NAME) {
				{
				setState(76);
				individualDeclaration();
				}
			}

			setState(83);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(79);
				match(Comma);
				setState(80);
				individualDeclaration();
				}
				}
				setState(85);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(86);
			match(Semi);
			setState(87);
			root();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Func_declarationContext extends ParserRuleContext {
		public Func_declarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_declaration; }
	 
		public Func_declarationContext() { }
		public void copyFrom(Func_declarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ListFuncDecContext extends Func_declarationContext {
		public DatatypeContext datatype() {
			return getRuleContext(DatatypeContext.class,0);
		}
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public List_argsContext list_args() {
			return getRuleContext(List_argsContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ListFuncDecContext(Func_declarationContext ctx) { copyFrom(ctx); }
	}

	public final Func_declarationContext func_declaration() throws RecognitionException {
		Func_declarationContext _localctx = new Func_declarationContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_func_declaration);
		try {
			_localctx = new ListFuncDecContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(T__0);
			setState(90);
			datatype();
			setState(91);
			match(VAR_NAME);
			setState(92);
			list_args();
			setState(93);
			block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class List_argsContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public List<DatatypeContext> datatype() {
			return getRuleContexts(DatatypeContext.class);
		}
		public DatatypeContext datatype(int i) {
			return getRuleContext(DatatypeContext.class,i);
		}
		public List<TerminalNode> VAR_NAME() { return getTokens(ExprParser.VAR_NAME); }
		public TerminalNode VAR_NAME(int i) {
			return getToken(ExprParser.VAR_NAME, i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public List_argsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_list_args; }
	}

	public final List_argsContext list_args() throws RecognitionException {
		List_argsContext _localctx = new List_argsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_list_args);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(95);
			match(LeftParen);
			setState(107);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) {
				{
				setState(96);
				datatype();
				setState(97);
				match(VAR_NAME);
				setState(104);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(98);
					match(Comma);
					setState(99);
					datatype();
					setState(100);
					match(VAR_NAME);
					}
					}
					setState(106);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(109);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public TerminalNode LeftCurly() { return getToken(ExprParser.LeftCurly, 0); }
		public TerminalNode RightCurly() { return getToken(ExprParser.RightCurly, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(111);
			match(LeftCurly);
			setState(115);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__2) | (1L << T__3) | (1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17) | (1L << T__18) | (1L << RETURN) | (1L << LeftParen) | (1L << ADDOP) | (1L << INC_DEC) | (1L << INT_CONST) | (1L << CHAR) | (1L << VAR_NAME))) != 0)) {
				{
				{
				setState(112);
				statement();
				}
				}
				setState(117);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(118);
			match(RightCurly);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ConditionalStatementContext extends StatementContext {
		public If_elseContext if_else() {
			return getRuleContext(If_elseContext.class,0);
		}
		public ConditionalStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WriteStatementContext extends StatementContext {
		public PrinterContext printer() {
			return getRuleContext(PrinterContext.class,0);
		}
		public WriteStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class WhileloopStatementContext extends StatementContext {
		public While_loopContext while_loop() {
			return getRuleContext(While_loopContext.class,0);
		}
		public WhileloopStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class DeclareStatementContext extends StatementContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclareStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ForloopStatementContext extends StatementContext {
		public For_loopContext for_loop() {
			return getRuleContext(For_loopContext.class,0);
		}
		public ForloopStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ExprStatementContext extends StatementContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public ExprStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class AssignStatementContext extends StatementContext {
		public AssignmentContext assignment() {
			return getRuleContext(AssignmentContext.class,0);
		}
		public AssignStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReadStatementContext extends StatementContext {
		public InputContext input() {
			return getRuleContext(InputContext.class,0);
		}
		public ReadStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class BreakStatementContext extends StatementContext {
		public Break_stmntContext break_stmnt() {
			return getRuleContext(Break_stmntContext.class,0);
		}
		public BreakStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ContinueStatementContext extends StatementContext {
		public Cont_stmntContext cont_stmnt() {
			return getRuleContext(Cont_stmntContext.class,0);
		}
		public ContinueStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class ReturnStatementContext extends StatementContext {
		public RetContext ret() {
			return getRuleContext(RetContext.class,0);
		}
		public ReturnStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}
	public static class FunccallStatementContext extends StatementContext {
		public CallContext call() {
			return getRuleContext(CallContext.class,0);
		}
		public FunccallStatementContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_statement);
		try {
			setState(134);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new FunccallStatementContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(120);
				call();
				}
				break;
			case 2:
				_localctx = new AssignStatementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(121);
				assignment();
				}
				break;
			case 3:
				_localctx = new DeclareStatementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(122);
				declaration();
				}
				break;
			case 4:
				_localctx = new ReturnStatementContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(123);
				ret();
				}
				break;
			case 5:
				_localctx = new ExprStatementContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(124);
				expr(0);
				setState(125);
				match(Semi);
				}
				break;
			case 6:
				_localctx = new WriteStatementContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(127);
				printer();
				}
				break;
			case 7:
				_localctx = new ConditionalStatementContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(128);
				if_else();
				}
				break;
			case 8:
				_localctx = new WhileloopStatementContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(129);
				while_loop();
				}
				break;
			case 9:
				_localctx = new ForloopStatementContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(130);
				for_loop();
				}
				break;
			case 10:
				_localctx = new ReadStatementContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(131);
				input();
				}
				break;
			case 11:
				_localctx = new BreakStatementContext(_localctx);
				enterOuterAlt(_localctx, 11);
				{
				setState(132);
				break_stmnt();
				}
				break;
			case 12:
				_localctx = new ContinueStatementContext(_localctx);
				enterOuterAlt(_localctx, 12);
				{
				setState(133);
				cont_stmnt();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AssignmentContext extends ParserRuleContext {
		public AssignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignment; }
	 
		public AssignmentContext() { }
		public void copyFrom(AssignmentContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class AssignArrayExprContext extends AssignmentContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LeftSqr() { return getToken(ExprParser.LeftSqr, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode RightSqr() { return getToken(ExprParser.RightSqr, 0); }
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public AssignArrayExprContext(AssignmentContext ctx) { copyFrom(ctx); }
	}
	public static class VarAssignmentContext extends AssignmentContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public VarAssignmentContext(AssignmentContext ctx) { copyFrom(ctx); }
	}
	public static class Assign2DArrayExprContext extends AssignmentContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> LeftSqr() { return getTokens(ExprParser.LeftSqr); }
		public TerminalNode LeftSqr(int i) {
			return getToken(ExprParser.LeftSqr, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightSqr() { return getTokens(ExprParser.RightSqr); }
		public TerminalNode RightSqr(int i) {
			return getToken(ExprParser.RightSqr, i);
		}
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public Assign2DArrayExprContext(AssignmentContext ctx) { copyFrom(ctx); }
	}

	public final AssignmentContext assignment() throws RecognitionException {
		AssignmentContext _localctx = new AssignmentContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_assignment);
		try {
			setState(160);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new VarAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(136);
				identifier();
				setState(137);
				match(ASSIGN);
				setState(138);
				expr(0);
				setState(139);
				match(Semi);
				}
				break;
			case 2:
				_localctx = new Assign2DArrayExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(141);
				identifier();
				setState(142);
				match(LeftSqr);
				setState(143);
				expr(0);
				setState(144);
				match(RightSqr);
				setState(145);
				match(LeftSqr);
				setState(146);
				expr(0);
				setState(147);
				match(RightSqr);
				setState(148);
				match(ASSIGN);
				setState(149);
				expr(0);
				setState(150);
				match(Semi);
				}
				break;
			case 3:
				_localctx = new AssignArrayExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(152);
				identifier();
				setState(153);
				match(LeftSqr);
				setState(154);
				expr(0);
				setState(155);
				match(RightSqr);
				setState(156);
				match(ASSIGN);
				setState(157);
				expr(0);
				setState(158);
				match(Semi);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallContext extends ParserRuleContext {
		public CallerContext caller() {
			return getRuleContext(CallerContext.class,0);
		}
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public Params_listContext params_list() {
			return getRuleContext(Params_listContext.class,0);
		}
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public CallContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_call; }
	}

	public final CallContext call() throws RecognitionException {
		CallContext _localctx = new CallContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_call);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			caller();
			setState(163);
			match(VAR_NAME);
			setState(164);
			params_list();
			setState(165);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrinterContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> STRING() { return getTokens(ExprParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(ExprParser.STRING, i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public PrinterContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printer; }
	}

	public final PrinterContext printer() throws RecognitionException {
		PrinterContext _localctx = new PrinterContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_printer);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(167);
			match(T__1);
			setState(168);
			match(LeftParen);
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__18) | (1L << LeftParen) | (1L << ADDOP) | (1L << INC_DEC) | (1L << STRING) | (1L << INT_CONST) | (1L << CHAR) | (1L << VAR_NAME))) != 0)) {
				{
				setState(171);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__11:
				case T__12:
				case T__18:
				case LeftParen:
				case ADDOP:
				case INC_DEC:
				case INT_CONST:
				case CHAR:
				case VAR_NAME:
					{
					setState(169);
					expr(0);
					}
					break;
				case STRING:
					{
					setState(170);
					match(STRING);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(180);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(173);
					match(Comma);
					setState(176);
					_errHandler.sync(this);
					switch (_input.LA(1)) {
					case T__11:
					case T__12:
					case T__18:
					case LeftParen:
					case ADDOP:
					case INC_DEC:
					case INT_CONST:
					case CHAR:
					case VAR_NAME:
						{
						setState(174);
						expr(0);
						}
						break;
					case STRING:
						{
						setState(175);
						match(STRING);
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					}
					setState(182);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(185);
			match(RightParen);
			setState(186);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InputContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public InputargsContext inputargs() {
			return getRuleContext(InputargsContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public InputContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_input; }
	}

	public final InputContext input() throws RecognitionException {
		InputContext _localctx = new InputContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_input);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(188);
			match(T__2);
			setState(189);
			match(LeftParen);
			setState(190);
			inputargs();
			setState(191);
			match(RightParen);
			setState(192);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InputargsContext extends ParserRuleContext {
		public InputargsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inputargs; }
	 
		public InputargsContext() { }
		public void copyFrom(InputargsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class VarInputContext extends InputargsContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public VarInputContext(InputargsContext ctx) { copyFrom(ctx); }
	}
	public static class Array2DInputContext extends InputargsContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> LeftSqr() { return getTokens(ExprParser.LeftSqr); }
		public TerminalNode LeftSqr(int i) {
			return getToken(ExprParser.LeftSqr, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightSqr() { return getTokens(ExprParser.RightSqr); }
		public TerminalNode RightSqr(int i) {
			return getToken(ExprParser.RightSqr, i);
		}
		public Array2DInputContext(InputargsContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayInputContext extends InputargsContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LeftSqr() { return getToken(ExprParser.LeftSqr, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightSqr() { return getToken(ExprParser.RightSqr, 0); }
		public ArrayInputContext(InputargsContext ctx) { copyFrom(ctx); }
	}

	public final InputargsContext inputargs() throws RecognitionException {
		InputargsContext _localctx = new InputargsContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_inputargs);
		try {
			setState(208);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				_localctx = new VarInputContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(194);
				identifier();
				}
				break;
			case 2:
				_localctx = new Array2DInputContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(195);
				identifier();
				setState(196);
				match(LeftSqr);
				setState(197);
				expr(0);
				setState(198);
				match(RightSqr);
				setState(199);
				match(LeftSqr);
				setState(200);
				expr(0);
				setState(201);
				match(RightSqr);
				}
				break;
			case 3:
				_localctx = new ArrayInputContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(203);
				identifier();
				setState(204);
				match(LeftSqr);
				setState(205);
				expr(0);
				setState(206);
				match(RightSqr);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Break_stmntContext extends ParserRuleContext {
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public Break_stmntContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_break_stmnt; }
	}

	public final Break_stmntContext break_stmnt() throws RecognitionException {
		Break_stmntContext _localctx = new Break_stmntContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_break_stmnt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(210);
			match(T__3);
			setState(211);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Cont_stmntContext extends ParserRuleContext {
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public Cont_stmntContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_cont_stmnt; }
	}

	public final Cont_stmntContext cont_stmnt() throws RecognitionException {
		Cont_stmntContext _localctx = new Cont_stmntContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_cont_stmnt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(213);
			match(T__4);
			setState(214);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class While_loopContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public BlockOrStatementContext blockOrStatement() {
			return getRuleContext(BlockOrStatementContext.class,0);
		}
		public While_loopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_while_loop; }
	}

	public final While_loopContext while_loop() throws RecognitionException {
		While_loopContext _localctx = new While_loopContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_while_loop);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			match(T__5);
			setState(217);
			match(LeftParen);
			setState(218);
			condition(0);
			setState(219);
			match(RightParen);
			setState(220);
			blockOrStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class For_loopContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public List<VarassignContext> varassign() {
			return getRuleContexts(VarassignContext.class);
		}
		public VarassignContext varassign(int i) {
			return getRuleContext(VarassignContext.class,i);
		}
		public List<TerminalNode> Semi() { return getTokens(ExprParser.Semi); }
		public TerminalNode Semi(int i) {
			return getToken(ExprParser.Semi, i);
		}
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public BlockOrStatementContext blockOrStatement() {
			return getRuleContext(BlockOrStatementContext.class,0);
		}
		public For_loopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_for_loop; }
	}

	public final For_loopContext for_loop() throws RecognitionException {
		For_loopContext _localctx = new For_loopContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_for_loop);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(222);
			match(T__6);
			setState(223);
			match(LeftParen);
			setState(224);
			varassign();
			setState(225);
			match(Semi);
			setState(226);
			condition(0);
			setState(227);
			match(Semi);
			setState(228);
			varassign();
			setState(229);
			match(RightParen);
			setState(230);
			blockOrStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public DatatypeContext datatype() {
			return getRuleContext(DatatypeContext.class,0);
		}
		public List<IndividualDeclarationContext> individualDeclaration() {
			return getRuleContexts(IndividualDeclarationContext.class);
		}
		public IndividualDeclarationContext individualDeclaration(int i) {
			return getRuleContext(IndividualDeclarationContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_declaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			{
			setState(232);
			datatype();
			}
			setState(234);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VAR_NAME) {
				{
				setState(233);
				individualDeclaration();
				}
			}

			setState(240);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(236);
				match(Comma);
				setState(237);
				individualDeclaration();
				}
				}
				setState(242);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(243);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class If_elseContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public BlockOrStatementContext blockOrStatement() {
			return getRuleContext(BlockOrStatementContext.class,0);
		}
		public Else_partContext else_part() {
			return getRuleContext(Else_partContext.class,0);
		}
		public If_elseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_else; }
	}

	public final If_elseContext if_else() throws RecognitionException {
		If_elseContext _localctx = new If_elseContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_if_else);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(245);
			match(T__7);
			setState(246);
			match(LeftParen);
			setState(247);
			condition(0);
			setState(248);
			match(RightParen);
			setState(249);
			blockOrStatement();
			setState(251);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				{
				setState(250);
				else_part();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Else_partContext extends ParserRuleContext {
		public BlockOrStatementContext blockOrStatement() {
			return getRuleContext(BlockOrStatementContext.class,0);
		}
		public Else_partContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_else_part; }
	}

	public final Else_partContext else_part() throws RecognitionException {
		Else_partContext _localctx = new Else_partContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_else_part);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(253);
			match(T__8);
			setState(254);
			blockOrStatement();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockOrStatementContext extends ParserRuleContext {
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public BlockOrStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blockOrStatement; }
	}

	public final BlockOrStatementContext blockOrStatement() throws RecognitionException {
		BlockOrStatementContext _localctx = new BlockOrStatementContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_blockOrStatement);
		try {
			setState(258);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LeftCurly:
				enterOuterAlt(_localctx, 1);
				{
				setState(256);
				block();
				}
				break;
			case T__1:
			case T__2:
			case T__3:
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__11:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__16:
			case T__17:
			case T__18:
			case RETURN:
			case LeftParen:
			case ADDOP:
			case INC_DEC:
			case INT_CONST:
			case CHAR:
			case VAR_NAME:
				enterOuterAlt(_localctx, 2);
				{
				setState(257);
				statement();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IndividualDeclarationContext extends ParserRuleContext {
		public IndividualDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_individualDeclaration; }
	 
		public IndividualDeclarationContext() { }
		public void copyFrom(IndividualDeclarationContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ArrayAssignmentContext extends IndividualDeclarationContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public Array_refContext array_ref() {
			return getRuleContext(Array_refContext.class,0);
		}
		public ArrayAssignmentContext(IndividualDeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class D2arrayDeclarationContext extends IndividualDeclarationContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public List<TerminalNode> INT_CONST() { return getTokens(ExprParser.INT_CONST); }
		public TerminalNode INT_CONST(int i) {
			return getToken(ExprParser.INT_CONST, i);
		}
		public Array_refContext array_ref() {
			return getRuleContext(Array_refContext.class,0);
		}
		public D2arrayDeclarationContext(IndividualDeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class D2arrayAssignmentContext extends IndividualDeclarationContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public Array_refContext array_ref() {
			return getRuleContext(Array_refContext.class,0);
		}
		public D2arrayAssignmentContext(IndividualDeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayDeclarationContext extends IndividualDeclarationContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public TerminalNode INT_CONST() { return getToken(ExprParser.INT_CONST, 0); }
		public Array_refContext array_ref() {
			return getRuleContext(Array_refContext.class,0);
		}
		public ArrayDeclarationContext(IndividualDeclarationContext ctx) { copyFrom(ctx); }
	}
	public static class VarDeclarationContext extends IndividualDeclarationContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public VarDeclarationContext(IndividualDeclarationContext ctx) { copyFrom(ctx); }
	}

	public final IndividualDeclarationContext individualDeclaration() throws RecognitionException {
		IndividualDeclarationContext _localctx = new IndividualDeclarationContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_individualDeclaration);
		int _la;
		try {
			setState(288);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				_localctx = new VarDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(260);
				match(VAR_NAME);
				setState(263);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(261);
					match(ASSIGN);
					setState(262);
					expr(0);
					}
				}

				}
				break;
			case 2:
				_localctx = new ArrayDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(265);
				match(VAR_NAME);
				setState(266);
				match(LeftSqr);
				setState(267);
				match(INT_CONST);
				setState(268);
				match(RightSqr);
				setState(270);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(269);
					array_ref();
					}
				}

				}
				break;
			case 3:
				_localctx = new D2arrayDeclarationContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(272);
				match(VAR_NAME);
				setState(273);
				match(LeftSqr);
				setState(274);
				match(INT_CONST);
				setState(275);
				match(RightSqr);
				setState(276);
				match(LeftSqr);
				setState(277);
				match(INT_CONST);
				setState(278);
				match(RightSqr);
				setState(280);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ASSIGN) {
					{
					setState(279);
					array_ref();
					}
				}

				}
				break;
			case 4:
				_localctx = new ArrayAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(282);
				match(VAR_NAME);
				setState(283);
				match(T__9);
				setState(284);
				array_ref();
				}
				break;
			case 5:
				_localctx = new D2arrayAssignmentContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(285);
				match(VAR_NAME);
				setState(286);
				match(T__10);
				setState(287);
				array_ref();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarassignContext extends ParserRuleContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public VarassignContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varassign; }
	}

	public final VarassignContext varassign() throws RecognitionException {
		VarassignContext _localctx = new VarassignContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_varassign);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(290);
			identifier();
			setState(291);
			match(ASSIGN);
			setState(292);
			expr(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	 
		public ConditionContext() { }
		public void copyFrom(ConditionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class NotCondContext extends ConditionContext {
		public TerminalNode NOT() { return getToken(ExprParser.NOT, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public NotCondContext(ConditionContext ctx) { copyFrom(ctx); }
	}
	public static class RelopExprContext extends ConditionContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode RELOP() { return getToken(ExprParser.RELOP, 0); }
		public TerminalNode BITWISE_OP() { return getToken(ExprParser.BITWISE_OP, 0); }
		public TerminalNode SHIFT_OP() { return getToken(ExprParser.SHIFT_OP, 0); }
		public TerminalNode EQOP() { return getToken(ExprParser.EQOP, 0); }
		public TerminalNode AND_OR() { return getToken(ExprParser.AND_OR, 0); }
		public RelopExprContext(ConditionContext ctx) { copyFrom(ctx); }
	}
	public static class AndOrCondContext extends ConditionContext {
		public List<ConditionContext> condition() {
			return getRuleContexts(ConditionContext.class);
		}
		public ConditionContext condition(int i) {
			return getRuleContext(ConditionContext.class,i);
		}
		public TerminalNode AND_OR() { return getToken(ExprParser.AND_OR, 0); }
		public AndOrCondContext(ConditionContext ctx) { copyFrom(ctx); }
	}
	public static class ParanCondContext extends ConditionContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public ParanCondContext(ConditionContext ctx) { copyFrom(ctx); }
	}

	public final ConditionContext condition() throws RecognitionException {
		return condition(0);
	}

	private ConditionContext condition(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ConditionContext _localctx = new ConditionContext(_ctx, _parentState);
		ConditionContext _prevctx = _localctx;
		int _startState = 46;
		enterRecursionRule(_localctx, 46, RULE_condition, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(305);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
			case 1:
				{
				_localctx = new ParanCondContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(295);
				match(LeftParen);
				setState(296);
				condition(0);
				setState(297);
				match(RightParen);
				}
				break;
			case 2:
				{
				_localctx = new NotCondContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(299);
				match(NOT);
				setState(300);
				condition(3);
				}
				break;
			case 3:
				{
				_localctx = new RelopExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(301);
				expr(0);
				setState(302);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AND_OR) | (1L << RELOP) | (1L << EQOP) | (1L << BITWISE_OP) | (1L << SHIFT_OP))) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(303);
				expr(0);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(312);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AndOrCondContext(new ConditionContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_condition);
					setState(307);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(308);
					match(AND_OR);
					setState(309);
					condition(3);
					}
					} 
				}
				setState(314);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,23,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class PreIncDec2DArrContext extends ExprContext {
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> LeftSqr() { return getTokens(ExprParser.LeftSqr); }
		public TerminalNode LeftSqr(int i) {
			return getToken(ExprParser.LeftSqr, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightSqr() { return getTokens(ExprParser.RightSqr); }
		public TerminalNode RightSqr(int i) {
			return getToken(ExprParser.RightSqr, i);
		}
		public PreIncDec2DArrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class VarnameExprContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public VarnameExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class CharExprContext extends ExprContext {
		public TerminalNode CHAR() { return getToken(ExprParser.CHAR, 0); }
		public CharExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PreIncDecArrContext extends ExprContext {
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LeftSqr() { return getToken(ExprParser.LeftSqr, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightSqr() { return getToken(ExprParser.RightSqr, 0); }
		public PreIncDecArrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ModExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MODULO() { return getToken(ExprParser.MODULO, 0); }
		public ModExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PlusMinusExprContext extends ExprContext {
		public TerminalNode ADDOP() { return getToken(ExprParser.ADDOP, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public PlusMinusExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ArrayValExprContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LeftSqr() { return getToken(ExprParser.LeftSqr, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightSqr() { return getToken(ExprParser.RightSqr, 0); }
		public ArrayValExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class MultiplyExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode MULT() { return getToken(ExprParser.MULT, 0); }
		public MultiplyExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PostIncDecArrContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode LeftSqr() { return getToken(ExprParser.LeftSqr, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightSqr() { return getToken(ExprParser.RightSqr, 0); }
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public PostIncDecArrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class Func_callContext extends ExprContext {
		public CallerContext caller() {
			return getRuleContext(CallerContext.class,0);
		}
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public Params_listContext params_list() {
			return getRuleContext(Params_listContext.class,0);
		}
		public Func_callContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ParenExprContext extends ExprContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public ParenExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PostIncDecExprContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public PostIncDecExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ConstIntExprContext extends ExprContext {
		public TerminalNode INT_CONST() { return getToken(ExprParser.INT_CONST, 0); }
		public ConstIntExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class ShiftOpExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode SHIFT_OP() { return getToken(ExprParser.SHIFT_OP, 0); }
		public ShiftOpExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class AddExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode ADDOP() { return getToken(ExprParser.ADDOP, 0); }
		public AddExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BitwiseOpExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode BITWISE_OP() { return getToken(ExprParser.BITWISE_OP, 0); }
		public BitwiseOpExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PreIncDecExprContext extends ExprContext {
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public PreIncDecExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class DivExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode DIV() { return getToken(ExprParser.DIV, 0); }
		public DivExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class EqaulExprContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public TerminalNode EQOP() { return getToken(ExprParser.EQOP, 0); }
		public EqaulExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class BoolExprContext extends ExprContext {
		public Token BOOL;
		public BoolExprContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class PostIncDec2DArrContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> LeftSqr() { return getTokens(ExprParser.LeftSqr); }
		public TerminalNode LeftSqr(int i) {
			return getToken(ExprParser.LeftSqr, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightSqr() { return getTokens(ExprParser.RightSqr); }
		public TerminalNode RightSqr(int i) {
			return getToken(ExprParser.RightSqr, i);
		}
		public TerminalNode INC_DEC() { return getToken(ExprParser.INC_DEC, 0); }
		public PostIncDec2DArrContext(ExprContext ctx) { copyFrom(ctx); }
	}
	public static class D2ArrayValExprContext extends ExprContext {
		public IdentifierContext identifier() {
			return getRuleContext(IdentifierContext.class,0);
		}
		public List<TerminalNode> LeftSqr() { return getTokens(ExprParser.LeftSqr); }
		public TerminalNode LeftSqr(int i) {
			return getToken(ExprParser.LeftSqr, i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> RightSqr() { return getTokens(ExprParser.RightSqr); }
		public TerminalNode RightSqr(int i) {
			return getToken(ExprParser.RightSqr, i);
		}
		public D2ArrayValExprContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 48;
		enterRecursionRule(_localctx, 48, RULE_expr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(378);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				{
				_localctx = new PostIncDecExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(316);
				identifier();
				setState(317);
				match(INC_DEC);
				}
				break;
			case 2:
				{
				_localctx = new PostIncDec2DArrContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(319);
				identifier();
				setState(320);
				match(LeftSqr);
				setState(321);
				expr(0);
				setState(322);
				match(RightSqr);
				setState(323);
				match(LeftSqr);
				setState(324);
				expr(0);
				setState(325);
				match(RightSqr);
				setState(326);
				match(INC_DEC);
				}
				break;
			case 3:
				{
				_localctx = new PreIncDec2DArrContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(328);
				match(INC_DEC);
				setState(329);
				identifier();
				setState(330);
				match(LeftSqr);
				setState(331);
				expr(0);
				setState(332);
				match(RightSqr);
				setState(333);
				match(LeftSqr);
				setState(334);
				expr(0);
				setState(335);
				match(RightSqr);
				}
				break;
			case 4:
				{
				_localctx = new PostIncDecArrContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(337);
				identifier();
				setState(338);
				match(LeftSqr);
				setState(339);
				expr(0);
				setState(340);
				match(RightSqr);
				setState(341);
				match(INC_DEC);
				}
				break;
			case 5:
				{
				_localctx = new PreIncDecArrContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(343);
				match(INC_DEC);
				setState(344);
				identifier();
				setState(345);
				match(LeftSqr);
				setState(346);
				expr(0);
				setState(347);
				match(RightSqr);
				}
				break;
			case 6:
				{
				_localctx = new Func_callContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(349);
				caller();
				setState(350);
				match(VAR_NAME);
				setState(351);
				params_list();
				}
				break;
			case 7:
				{
				_localctx = new PlusMinusExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(353);
				match(ADDOP);
				setState(354);
				expr(16);
				}
				break;
			case 8:
				{
				_localctx = new PreIncDecExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(355);
				match(INC_DEC);
				setState(356);
				identifier();
				}
				break;
			case 9:
				{
				_localctx = new ParenExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(357);
				match(LeftParen);
				setState(358);
				expr(0);
				setState(359);
				match(RightParen);
				}
				break;
			case 10:
				{
				_localctx = new VarnameExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(361);
				identifier();
				}
				break;
			case 11:
				{
				_localctx = new ConstIntExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(362);
				match(INT_CONST);
				}
				break;
			case 12:
				{
				_localctx = new BoolExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(363);
				((BoolExprContext)_localctx).BOOL = _input.LT(1);
				_la = _input.LA(1);
				if ( !(_la==T__11 || _la==T__12) ) {
					((BoolExprContext)_localctx).BOOL = (Token)_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				}
				break;
			case 13:
				{
				_localctx = new ArrayValExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(364);
				identifier();
				setState(365);
				match(LeftSqr);
				setState(366);
				expr(0);
				setState(367);
				match(RightSqr);
				}
				break;
			case 14:
				{
				_localctx = new D2ArrayValExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(369);
				identifier();
				setState(370);
				match(LeftSqr);
				setState(371);
				expr(0);
				setState(372);
				match(RightSqr);
				setState(373);
				match(LeftSqr);
				setState(374);
				expr(0);
				setState(375);
				match(RightSqr);
				}
				break;
			case 15:
				{
				_localctx = new CharExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(377);
				match(CHAR);
				}
				break;
			}
			_ctx.stop = _input.LT(-1);
			setState(403);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(401);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
					case 1:
						{
						_localctx = new ModExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(380);
						if (!(precpred(_ctx, 14))) throw new FailedPredicateException(this, "precpred(_ctx, 14)");
						setState(381);
						match(MODULO);
						setState(382);
						expr(15);
						}
						break;
					case 2:
						{
						_localctx = new DivExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(383);
						if (!(precpred(_ctx, 13))) throw new FailedPredicateException(this, "precpred(_ctx, 13)");
						setState(384);
						match(DIV);
						setState(385);
						expr(14);
						}
						break;
					case 3:
						{
						_localctx = new MultiplyExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(386);
						if (!(precpred(_ctx, 12))) throw new FailedPredicateException(this, "precpred(_ctx, 12)");
						setState(387);
						match(MULT);
						setState(388);
						expr(13);
						}
						break;
					case 4:
						{
						_localctx = new AddExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(389);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(390);
						match(ADDOP);
						setState(391);
						expr(12);
						}
						break;
					case 5:
						{
						_localctx = new EqaulExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(392);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(393);
						match(EQOP);
						setState(394);
						expr(11);
						}
						break;
					case 6:
						{
						_localctx = new ShiftOpExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(395);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(396);
						match(SHIFT_OP);
						setState(397);
						expr(10);
						}
						break;
					case 7:
						{
						_localctx = new BitwiseOpExprContext(new ExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expr);
						setState(398);
						if (!(precpred(_ctx, 8))) throw new FailedPredicateException(this, "precpred(_ctx, 8)");
						setState(399);
						match(BITWISE_OP);
						setState(400);
						expr(9);
						}
						break;
					}
					} 
				}
				setState(405);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,26,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class RetContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(ExprParser.RETURN, 0); }
		public TerminalNode Semi() { return getToken(ExprParser.Semi, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public RetContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ret; }
	}

	public final RetContext ret() throws RecognitionException {
		RetContext _localctx = new RetContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_ret);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(406);
			match(RETURN);
			setState(408);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__18) | (1L << LeftParen) | (1L << ADDOP) | (1L << INC_DEC) | (1L << INT_CONST) | (1L << CHAR) | (1L << VAR_NAME))) != 0)) {
				{
				setState(407);
				expr(0);
				}
			}

			setState(410);
			match(Semi);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Array_refContext extends ParserRuleContext {
		public TerminalNode ASSIGN() { return getToken(ExprParser.ASSIGN, 0); }
		public TerminalNode LeftCurly() { return getToken(ExprParser.LeftCurly, 0); }
		public TerminalNode RightCurly() { return getToken(ExprParser.RightCurly, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public Array_refContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_array_ref; }
	}

	public final Array_refContext array_ref() throws RecognitionException {
		Array_refContext _localctx = new Array_refContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_array_ref);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(412);
			match(ASSIGN);
			setState(413);
			match(LeftCurly);
			setState(422);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__18) | (1L << LeftParen) | (1L << ADDOP) | (1L << INC_DEC) | (1L << INT_CONST) | (1L << CHAR) | (1L << VAR_NAME))) != 0)) {
				{
				setState(414);
				expr(0);
				setState(419);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(415);
					match(Comma);
					setState(416);
					expr(0);
					}
					}
					setState(421);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(424);
			match(RightCurly);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Params_listContext extends ParserRuleContext {
		public TerminalNode LeftParen() { return getToken(ExprParser.LeftParen, 0); }
		public TerminalNode RightParen() { return getToken(ExprParser.RightParen, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(ExprParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(ExprParser.Comma, i);
		}
		public Params_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_params_list; }
	}

	public final Params_listContext params_list() throws RecognitionException {
		Params_listContext _localctx = new Params_listContext(_ctx, getState());
		enterRule(_localctx, 54, RULE_params_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(426);
			match(LeftParen);
			setState(435);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__11) | (1L << T__12) | (1L << T__18) | (1L << LeftParen) | (1L << ADDOP) | (1L << INC_DEC) | (1L << INT_CONST) | (1L << CHAR) | (1L << VAR_NAME))) != 0)) {
				{
				setState(427);
				expr(0);
				setState(432);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==Comma) {
					{
					{
					setState(428);
					match(Comma);
					setState(429);
					expr(0);
					}
					}
					setState(434);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(437);
			match(RightParen);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DatatypeContext extends ParserRuleContext {
		public DatatypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_datatype; }
	}

	public final DatatypeContext datatype() throws RecognitionException {
		DatatypeContext _localctx = new DatatypeContext(_ctx, getState());
		enterRule(_localctx, 56, RULE_datatype);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(439);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__13) | (1L << T__14) | (1L << T__15) | (1L << T__16) | (1L << T__17))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IdentifierContext extends ParserRuleContext {
		public TerminalNode VAR_NAME() { return getToken(ExprParser.VAR_NAME, 0); }
		public IdentifierContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_identifier; }
	}

	public final IdentifierContext identifier() throws RecognitionException {
		IdentifierContext _localctx = new IdentifierContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_identifier);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(441);
			match(VAR_NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CallerContext extends ParserRuleContext {
		public CallerContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_caller; }
	}

	public final CallerContext caller() throws RecognitionException {
		CallerContext _localctx = new CallerContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_caller);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(443);
			match(T__18);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 23:
			return condition_sempred((ConditionContext)_localctx, predIndex);
		case 24:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean condition_sempred(ConditionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 1:
			return precpred(_ctx, 14);
		case 2:
			return precpred(_ctx, 13);
		case 3:
			return precpred(_ctx, 12);
		case 4:
			return precpred(_ctx, 11);
		case 5:
			return precpred(_ctx, 10);
		case 6:
			return precpred(_ctx, 9);
		case 7:
			return precpred(_ctx, 8);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\62\u01c0\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \3\2"+
		"\3\2\3\3\6\3D\n\3\r\3\16\3E\3\3\3\3\5\3J\n\3\3\4\3\4\3\5\3\5\5\5P\n\5"+
		"\3\5\3\5\7\5T\n\5\f\5\16\5W\13\5\3\5\3\5\3\5\3\6\3\6\3\6\3\6\3\6\3\6\3"+
		"\7\3\7\3\7\3\7\3\7\3\7\3\7\7\7i\n\7\f\7\16\7l\13\7\5\7n\n\7\3\7\3\7\3"+
		"\b\3\b\7\bt\n\b\f\b\16\bw\13\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t"+
		"\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u0089\n\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n"+
		"\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\5\n\u00a3"+
		"\n\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\5\f\u00ae\n\f\3\f\3\f\3"+
		"\f\5\f\u00b3\n\f\7\f\u00b5\n\f\f\f\16\f\u00b8\13\f\5\f\u00ba\n\f\3\f\3"+
		"\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u00d3\n\16\3\17\3\17\3\17\3\20\3\20"+
		"\3\20\3\21\3\21\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22\3\22\3\22"+
		"\3\22\3\22\3\22\3\23\3\23\5\23\u00ed\n\23\3\23\3\23\7\23\u00f1\n\23\f"+
		"\23\16\23\u00f4\13\23\3\23\3\23\3\24\3\24\3\24\3\24\3\24\3\24\5\24\u00fe"+
		"\n\24\3\25\3\25\3\25\3\26\3\26\5\26\u0105\n\26\3\27\3\27\3\27\5\27\u010a"+
		"\n\27\3\27\3\27\3\27\3\27\3\27\5\27\u0111\n\27\3\27\3\27\3\27\3\27\3\27"+
		"\3\27\3\27\3\27\5\27\u011b\n\27\3\27\3\27\3\27\3\27\3\27\3\27\5\27\u0123"+
		"\n\27\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31\3\31"+
		"\3\31\3\31\5\31\u0134\n\31\3\31\3\31\3\31\7\31\u0139\n\31\f\31\16\31\u013c"+
		"\13\31\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\5\32\u017d\n\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32\3\32"+
		"\3\32\3\32\3\32\3\32\7\32\u0194\n\32\f\32\16\32\u0197\13\32\3\33\3\33"+
		"\5\33\u019b\n\33\3\33\3\33\3\34\3\34\3\34\3\34\3\34\7\34\u01a4\n\34\f"+
		"\34\16\34\u01a7\13\34\5\34\u01a9\n\34\3\34\3\34\3\35\3\35\3\35\3\35\7"+
		"\35\u01b1\n\35\f\35\16\35\u01b4\13\35\5\35\u01b6\n\35\3\35\3\35\3\36\3"+
		"\36\3\37\3\37\3 \3 \3 \2\4\60\62!\2\4\6\b\n\f\16\20\22\24\26\30\32\34"+
		"\36 \"$&(*,.\60\62\64\668:<>\2\5\4\2&(*+\3\2\16\17\3\2\20\24\2\u01e3\2"+
		"@\3\2\2\2\4I\3\2\2\2\6K\3\2\2\2\bM\3\2\2\2\n[\3\2\2\2\fa\3\2\2\2\16q\3"+
		"\2\2\2\20\u0088\3\2\2\2\22\u00a2\3\2\2\2\24\u00a4\3\2\2\2\26\u00a9\3\2"+
		"\2\2\30\u00be\3\2\2\2\32\u00d2\3\2\2\2\34\u00d4\3\2\2\2\36\u00d7\3\2\2"+
		"\2 \u00da\3\2\2\2\"\u00e0\3\2\2\2$\u00ea\3\2\2\2&\u00f7\3\2\2\2(\u00ff"+
		"\3\2\2\2*\u0104\3\2\2\2,\u0122\3\2\2\2.\u0124\3\2\2\2\60\u0133\3\2\2\2"+
		"\62\u017c\3\2\2\2\64\u0198\3\2\2\2\66\u019e\3\2\2\28\u01ac\3\2\2\2:\u01b9"+
		"\3\2\2\2<\u01bb\3\2\2\2>\u01bd\3\2\2\2@A\5\4\3\2A\3\3\2\2\2BD\5\n\6\2"+
		"CB\3\2\2\2DE\3\2\2\2EC\3\2\2\2EF\3\2\2\2FJ\3\2\2\2GJ\5\b\5\2HJ\5\6\4\2"+
		"IC\3\2\2\2IG\3\2\2\2IH\3\2\2\2J\5\3\2\2\2KL\3\2\2\2L\7\3\2\2\2MO\5:\36"+
		"\2NP\5,\27\2ON\3\2\2\2OP\3\2\2\2PU\3\2\2\2QR\7\27\2\2RT\5,\27\2SQ\3\2"+
		"\2\2TW\3\2\2\2US\3\2\2\2UV\3\2\2\2VX\3\2\2\2WU\3\2\2\2XY\7\30\2\2YZ\5"+
		"\4\3\2Z\t\3\2\2\2[\\\7\3\2\2\\]\5:\36\2]^\7/\2\2^_\5\f\7\2_`\5\16\b\2"+
		"`\13\3\2\2\2am\7\31\2\2bc\5:\36\2cj\7/\2\2de\7\27\2\2ef\5:\36\2fg\7/\2"+
		"\2gi\3\2\2\2hd\3\2\2\2il\3\2\2\2jh\3\2\2\2jk\3\2\2\2kn\3\2\2\2lj\3\2\2"+
		"\2mb\3\2\2\2mn\3\2\2\2no\3\2\2\2op\7\32\2\2p\r\3\2\2\2qu\7\35\2\2rt\5"+
		"\20\t\2sr\3\2\2\2tw\3\2\2\2us\3\2\2\2uv\3\2\2\2vx\3\2\2\2wu\3\2\2\2xy"+
		"\7\36\2\2y\17\3\2\2\2z\u0089\5\24\13\2{\u0089\5\22\n\2|\u0089\5$\23\2"+
		"}\u0089\5\64\33\2~\177\5\62\32\2\177\u0080\7\30\2\2\u0080\u0089\3\2\2"+
		"\2\u0081\u0089\5\26\f\2\u0082\u0089\5&\24\2\u0083\u0089\5 \21\2\u0084"+
		"\u0089\5\"\22\2\u0085\u0089\5\30\r\2\u0086\u0089\5\34\17\2\u0087\u0089"+
		"\5\36\20\2\u0088z\3\2\2\2\u0088{\3\2\2\2\u0088|\3\2\2\2\u0088}\3\2\2\2"+
		"\u0088~\3\2\2\2\u0088\u0081\3\2\2\2\u0088\u0082\3\2\2\2\u0088\u0083\3"+
		"\2\2\2\u0088\u0084\3\2\2\2\u0088\u0085\3\2\2\2\u0088\u0086\3\2\2\2\u0088"+
		"\u0087\3\2\2\2\u0089\21\3\2\2\2\u008a\u008b\5<\37\2\u008b\u008c\7)\2\2"+
		"\u008c\u008d\5\62\32\2\u008d\u008e\7\30\2\2\u008e\u00a3\3\2\2\2\u008f"+
		"\u0090\5<\37\2\u0090\u0091\7\33\2\2\u0091\u0092\5\62\32\2\u0092\u0093"+
		"\7\34\2\2\u0093\u0094\7\33\2\2\u0094\u0095\5\62\32\2\u0095\u0096\7\34"+
		"\2\2\u0096\u0097\7)\2\2\u0097\u0098\5\62\32\2\u0098\u0099\7\30\2\2\u0099"+
		"\u00a3\3\2\2\2\u009a\u009b\5<\37\2\u009b\u009c\7\33\2\2\u009c\u009d\5"+
		"\62\32\2\u009d\u009e\7\34\2\2\u009e\u009f\7)\2\2\u009f\u00a0\5\62\32\2"+
		"\u00a0\u00a1\7\30\2\2\u00a1\u00a3\3\2\2\2\u00a2\u008a\3\2\2\2\u00a2\u008f"+
		"\3\2\2\2\u00a2\u009a\3\2\2\2\u00a3\23\3\2\2\2\u00a4\u00a5\5> \2\u00a5"+
		"\u00a6\7/\2\2\u00a6\u00a7\58\35\2\u00a7\u00a8\7\30\2\2\u00a8\25\3\2\2"+
		"\2\u00a9\u00aa\7\4\2\2\u00aa\u00b9\7\31\2\2\u00ab\u00ae\5\62\32\2\u00ac"+
		"\u00ae\7,\2\2\u00ad\u00ab\3\2\2\2\u00ad\u00ac\3\2\2\2\u00ae\u00b6\3\2"+
		"\2\2\u00af\u00b2\7\27\2\2\u00b0\u00b3\5\62\32\2\u00b1\u00b3\7,\2\2\u00b2"+
		"\u00b0\3\2\2\2\u00b2\u00b1\3\2\2\2\u00b3\u00b5\3\2\2\2\u00b4\u00af\3\2"+
		"\2\2\u00b5\u00b8\3\2\2\2\u00b6\u00b4\3\2\2\2\u00b6\u00b7\3\2\2\2\u00b7"+
		"\u00ba\3\2\2\2\u00b8\u00b6\3\2\2\2\u00b9\u00ad\3\2\2\2\u00b9\u00ba\3\2"+
		"\2\2\u00ba\u00bb\3\2\2\2\u00bb\u00bc\7\32\2\2\u00bc\u00bd\7\30\2\2\u00bd"+
		"\27\3\2\2\2\u00be\u00bf\7\5\2\2\u00bf\u00c0\7\31\2\2\u00c0\u00c1\5\32"+
		"\16\2\u00c1\u00c2\7\32\2\2\u00c2\u00c3\7\30\2\2\u00c3\31\3\2\2\2\u00c4"+
		"\u00d3\5<\37\2\u00c5\u00c6\5<\37\2\u00c6\u00c7\7\33\2\2\u00c7\u00c8\5"+
		"\62\32\2\u00c8\u00c9\7\34\2\2\u00c9\u00ca\7\33\2\2\u00ca\u00cb\5\62\32"+
		"\2\u00cb\u00cc\7\34\2\2\u00cc\u00d3\3\2\2\2\u00cd\u00ce\5<\37\2\u00ce"+
		"\u00cf\7\33\2\2\u00cf\u00d0\5\62\32\2\u00d0\u00d1\7\34\2\2\u00d1\u00d3"+
		"\3\2\2\2\u00d2\u00c4\3\2\2\2\u00d2\u00c5\3\2\2\2\u00d2\u00cd\3\2\2\2\u00d3"+
		"\33\3\2\2\2\u00d4\u00d5\7\6\2\2\u00d5\u00d6\7\30\2\2\u00d6\35\3\2\2\2"+
		"\u00d7\u00d8\7\7\2\2\u00d8\u00d9\7\30\2\2\u00d9\37\3\2\2\2\u00da\u00db"+
		"\7\b\2\2\u00db\u00dc\7\31\2\2\u00dc\u00dd\5\60\31\2\u00dd\u00de\7\32\2"+
		"\2\u00de\u00df\5*\26\2\u00df!\3\2\2\2\u00e0\u00e1\7\t\2\2\u00e1\u00e2"+
		"\7\31\2\2\u00e2\u00e3\5.\30\2\u00e3\u00e4\7\30\2\2\u00e4\u00e5\5\60\31"+
		"\2\u00e5\u00e6\7\30\2\2\u00e6\u00e7\5.\30\2\u00e7\u00e8\7\32\2\2\u00e8"+
		"\u00e9\5*\26\2\u00e9#\3\2\2\2\u00ea\u00ec\5:\36\2\u00eb\u00ed\5,\27\2"+
		"\u00ec\u00eb\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\u00f2\3\2\2\2\u00ee\u00ef"+
		"\7\27\2\2\u00ef\u00f1\5,\27\2\u00f0\u00ee\3\2\2\2\u00f1\u00f4\3\2\2\2"+
		"\u00f2\u00f0\3\2\2\2\u00f2\u00f3\3\2\2\2\u00f3\u00f5\3\2\2\2\u00f4\u00f2"+
		"\3\2\2\2\u00f5\u00f6\7\30\2\2\u00f6%\3\2\2\2\u00f7\u00f8\7\n\2\2\u00f8"+
		"\u00f9\7\31\2\2\u00f9\u00fa\5\60\31\2\u00fa\u00fb\7\32\2\2\u00fb\u00fd"+
		"\5*\26\2\u00fc\u00fe\5(\25\2\u00fd\u00fc\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe"+
		"\'\3\2\2\2\u00ff\u0100\7\13\2\2\u0100\u0101\5*\26\2\u0101)\3\2\2\2\u0102"+
		"\u0105\5\16\b\2\u0103\u0105\5\20\t\2\u0104\u0102\3\2\2\2\u0104\u0103\3"+
		"\2\2\2\u0105+\3\2\2\2\u0106\u0109\7/\2\2\u0107\u0108\7)\2\2\u0108\u010a"+
		"\5\62\32\2\u0109\u0107\3\2\2\2\u0109\u010a\3\2\2\2\u010a\u0123\3\2\2\2"+
		"\u010b\u010c\7/\2\2\u010c\u010d\7\33\2\2\u010d\u010e\7-\2\2\u010e\u0110"+
		"\7\34\2\2\u010f\u0111\5\66\34\2\u0110\u010f\3\2\2\2\u0110\u0111\3\2\2"+
		"\2\u0111\u0123\3\2\2\2\u0112\u0113\7/\2\2\u0113\u0114\7\33\2\2\u0114\u0115"+
		"\7-\2\2\u0115\u0116\7\34\2\2\u0116\u0117\7\33\2\2\u0117\u0118\7-\2\2\u0118"+
		"\u011a\7\34\2\2\u0119\u011b\5\66\34\2\u011a\u0119\3\2\2\2\u011a\u011b"+
		"\3\2\2\2\u011b\u0123\3\2\2\2\u011c\u011d\7/\2\2\u011d\u011e\7\f\2\2\u011e"+
		"\u0123\5\66\34\2\u011f\u0120\7/\2\2\u0120\u0121\7\r\2\2\u0121\u0123\5"+
		"\66\34\2\u0122\u0106\3\2\2\2\u0122\u010b\3\2\2\2\u0122\u0112\3\2\2\2\u0122"+
		"\u011c\3\2\2\2\u0122\u011f\3\2\2\2\u0123-\3\2\2\2\u0124\u0125\5<\37\2"+
		"\u0125\u0126\7)\2\2\u0126\u0127\5\62\32\2\u0127/\3\2\2\2\u0128\u0129\b"+
		"\31\1\2\u0129\u012a\7\31\2\2\u012a\u012b\5\60\31\2\u012b\u012c\7\32\2"+
		"\2\u012c\u0134\3\2\2\2\u012d\u012e\7 \2\2\u012e\u0134\5\60\31\5\u012f"+
		"\u0130\5\62\32\2\u0130\u0131\t\2\2\2\u0131\u0132\5\62\32\2\u0132\u0134"+
		"\3\2\2\2\u0133\u0128\3\2\2\2\u0133\u012d\3\2\2\2\u0133\u012f\3\2\2\2\u0134"+
		"\u013a\3\2\2\2\u0135\u0136\f\4\2\2\u0136\u0137\7&\2\2\u0137\u0139\5\60"+
		"\31\5\u0138\u0135\3\2\2\2\u0139\u013c\3\2\2\2\u013a\u0138\3\2\2\2\u013a"+
		"\u013b\3\2\2\2\u013b\61\3\2\2\2\u013c\u013a\3\2\2\2\u013d\u013e\b\32\1"+
		"\2\u013e\u013f\5<\37\2\u013f\u0140\7%\2\2\u0140\u017d\3\2\2\2\u0141\u0142"+
		"\5<\37\2\u0142\u0143\7\33\2\2\u0143\u0144\5\62\32\2\u0144\u0145\7\34\2"+
		"\2\u0145\u0146\7\33\2\2\u0146\u0147\5\62\32\2\u0147\u0148\7\34\2\2\u0148"+
		"\u0149\7%\2\2\u0149\u017d\3\2\2\2\u014a\u014b\7%\2\2\u014b\u014c\5<\37"+
		"\2\u014c\u014d\7\33\2\2\u014d\u014e\5\62\32\2\u014e\u014f\7\34\2\2\u014f"+
		"\u0150\7\33\2\2\u0150\u0151\5\62\32\2\u0151\u0152\7\34\2\2\u0152\u017d"+
		"\3\2\2\2\u0153\u0154\5<\37\2\u0154\u0155\7\33\2\2\u0155\u0156\5\62\32"+
		"\2\u0156\u0157\7\34\2\2\u0157\u0158\7%\2\2\u0158\u017d\3\2\2\2\u0159\u015a"+
		"\7%\2\2\u015a\u015b\5<\37\2\u015b\u015c\7\33\2\2\u015c\u015d\5\62\32\2"+
		"\u015d\u015e\7\34\2\2\u015e\u017d\3\2\2\2\u015f\u0160\5> \2\u0160\u0161"+
		"\7/\2\2\u0161\u0162\58\35\2\u0162\u017d\3\2\2\2\u0163\u0164\7!\2\2\u0164"+
		"\u017d\5\62\32\22\u0165\u0166\7%\2\2\u0166\u017d\5<\37\2\u0167\u0168\7"+
		"\31\2\2\u0168\u0169\5\62\32\2\u0169\u016a\7\32\2\2\u016a\u017d\3\2\2\2"+
		"\u016b\u017d\5<\37\2\u016c\u017d\7-\2\2\u016d\u017d\t\3\2\2\u016e\u016f"+
		"\5<\37\2\u016f\u0170\7\33\2\2\u0170\u0171\5\62\32\2\u0171\u0172\7\34\2"+
		"\2\u0172\u017d\3\2\2\2\u0173\u0174\5<\37\2\u0174\u0175\7\33\2\2\u0175"+
		"\u0176\5\62\32\2\u0176\u0177\7\34\2\2\u0177\u0178\7\33\2\2\u0178\u0179"+
		"\5\62\32\2\u0179\u017a\7\34\2\2\u017a\u017d\3\2\2\2\u017b\u017d\7.\2\2"+
		"\u017c\u013d\3\2\2\2\u017c\u0141\3\2\2\2\u017c\u014a\3\2\2\2\u017c\u0153"+
		"\3\2\2\2\u017c\u0159\3\2\2\2\u017c\u015f\3\2\2\2\u017c\u0163\3\2\2\2\u017c"+
		"\u0165\3\2\2\2\u017c\u0167\3\2\2\2\u017c\u016b\3\2\2\2\u017c\u016c\3\2"+
		"\2\2\u017c\u016d\3\2\2\2\u017c\u016e\3\2\2\2\u017c\u0173\3\2\2\2\u017c"+
		"\u017b\3\2\2\2\u017d\u0195\3\2\2\2\u017e\u017f\f\20\2\2\u017f\u0180\7"+
		"#\2\2\u0180\u0194\5\62\32\21\u0181\u0182\f\17\2\2\u0182\u0183\7$\2\2\u0183"+
		"\u0194\5\62\32\20\u0184\u0185\f\16\2\2\u0185\u0186\7\"\2\2\u0186\u0194"+
		"\5\62\32\17\u0187\u0188\f\r\2\2\u0188\u0189\7!\2\2\u0189\u0194\5\62\32"+
		"\16\u018a\u018b\f\f\2\2\u018b\u018c\7(\2\2\u018c\u0194\5\62\32\r\u018d"+
		"\u018e\f\13\2\2\u018e\u018f\7+\2\2\u018f\u0194\5\62\32\f\u0190\u0191\f"+
		"\n\2\2\u0191\u0192\7*\2\2\u0192\u0194\5\62\32\13\u0193\u017e\3\2\2\2\u0193"+
		"\u0181\3\2\2\2\u0193\u0184\3\2\2\2\u0193\u0187\3\2\2\2\u0193\u018a\3\2"+
		"\2\2\u0193\u018d\3\2\2\2\u0193\u0190\3\2\2\2\u0194\u0197\3\2\2\2\u0195"+
		"\u0193\3\2\2\2\u0195\u0196\3\2\2\2\u0196\63\3\2\2\2\u0197\u0195\3\2\2"+
		"\2\u0198\u019a\7\26\2\2\u0199\u019b\5\62\32\2\u019a\u0199\3\2\2\2\u019a"+
		"\u019b\3\2\2\2\u019b\u019c\3\2\2\2\u019c\u019d\7\30\2\2\u019d\65\3\2\2"+
		"\2\u019e\u019f\7)\2\2\u019f\u01a8\7\35\2\2\u01a0\u01a5\5\62\32\2\u01a1"+
		"\u01a2\7\27\2\2\u01a2\u01a4\5\62\32\2\u01a3\u01a1\3\2\2\2\u01a4\u01a7"+
		"\3\2\2\2\u01a5\u01a3\3\2\2\2\u01a5\u01a6\3\2\2\2\u01a6\u01a9\3\2\2\2\u01a7"+
		"\u01a5\3\2\2\2\u01a8\u01a0\3\2\2\2\u01a8\u01a9\3\2\2\2\u01a9\u01aa\3\2"+
		"\2\2\u01aa\u01ab\7\36\2\2\u01ab\67\3\2\2\2\u01ac\u01b5\7\31\2\2\u01ad"+
		"\u01b2\5\62\32\2\u01ae\u01af\7\27\2\2\u01af\u01b1\5\62\32\2\u01b0\u01ae"+
		"\3\2\2\2\u01b1\u01b4\3\2\2\2\u01b2\u01b0\3\2\2\2\u01b2\u01b3\3\2\2\2\u01b3"+
		"\u01b6\3\2\2\2\u01b4\u01b2\3\2\2\2\u01b5\u01ad\3\2\2\2\u01b5\u01b6\3\2"+
		"\2\2\u01b6\u01b7\3\2\2\2\u01b7\u01b8\7\32\2\2\u01b89\3\2\2\2\u01b9\u01ba"+
		"\t\4\2\2\u01ba;\3\2\2\2\u01bb\u01bc\7/\2\2\u01bc=\3\2\2\2\u01bd\u01be"+
		"\7\25\2\2\u01be?\3\2\2\2\"EIOUjmu\u0088\u00a2\u00ad\u00b2\u00b6\u00b9"+
		"\u00d2\u00ec\u00f2\u00fd\u0104\u0109\u0110\u011a\u0122\u0133\u013a\u017c"+
		"\u0193\u0195\u019a\u01a5\u01a8\u01b2\u01b5";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}