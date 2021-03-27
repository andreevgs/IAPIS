// Generated from /home/tima/Gleb/HelloParser.g4 by ANTLR 4.8
/*Author : Tsimofei Kinevich, group : 821703*/
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class HelloParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Tim=1, Return=2, Continue=3, Integer=4, Float=5, Long=6, And=7, For=8, 
		IF=9, Then=10, Else=11, INT=12, Digit=13, FLT=14, CompareOperator=15, 
		LessThan=16, LessOrEqual=17, GreaterThan=18, GreaterOrEqual=19, Equal=20, 
		NotEqual=21, Assign=22, Colon=23, Newline=24, Plus=25, PlusAss=26, Minus=27, 
		MinusAss=28, Star=29, StarAss=30, Devide=31, DevideAss=32, OpenPar=33, 
		ClosePar=34, FigureOpen=35, FigureClose=36, QuestionMark=37, Comma=38, 
		Ant=39, Pow=40, PowAss=41, Sqrt=42, SqrtAss=43, Foo=44, Bar=45, ID=46, 
		Comment=47, WS=48;
	public static final int
		RULE_main = 0, RULE_summOperation = 1, RULE_summ = 2, RULE_diffOperation = 3, 
		RULE_diff = 4, RULE_multOperation = 5, RULE_mult = 6, RULE_divOperation = 7, 
		RULE_div = 8, RULE_inPowOperation = 9, RULE_inPow = 10, RULE_inSqrt = 11, 
		RULE_operation = 12, RULE_math = 13, RULE_create = 14, RULE_ass = 15, 
		RULE_expr = 16, RULE_forCycle = 17, RULE_ifExpr = 18, RULE_block = 19;
	private static String[] makeRuleNames() {
		return new String[] {
			"main", "summOperation", "summ", "diffOperation", "diff", "multOperation", 
			"mult", "divOperation", "div", "inPowOperation", "inPow", "inSqrt", "operation", 
			"math", "create", "ass", "expr", "forCycle", "ifExpr", "block"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, "'return'", "'continue'", "'INT'", "'FLT'", "'Long'", "'And'", 
			"'For'", "'If'", "'Then'", "'Else'", null, null, null, null, "'<'", "'<='", 
			"'>'", "'>='", "'=='", "'!='", "'='", "':'", "';'", "'+'", "'+='", "'-'", 
			"'-='", "'*'", "'*='", "'/'", "'/='", "'('", "')'", "'{'", "'}'", "'?'", 
			"','", "'!'", "'^'", "'^='", "'~'", "'~='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Tim", "Return", "Continue", "Integer", "Float", "Long", "And", 
			"For", "IF", "Then", "Else", "INT", "Digit", "FLT", "CompareOperator", 
			"LessThan", "LessOrEqual", "GreaterThan", "GreaterOrEqual", "Equal", 
			"NotEqual", "Assign", "Colon", "Newline", "Plus", "PlusAss", "Minus", 
			"MinusAss", "Star", "StarAss", "Devide", "DevideAss", "OpenPar", "ClosePar", 
			"FigureOpen", "FigureClose", "QuestionMark", "Comma", "Ant", "Pow", "PowAss", 
			"Sqrt", "SqrtAss", "Foo", "Bar", "ID", "Comment", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
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
	public String getGrammarFileName() { return "HelloParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }


	/* public parser declarations/members section */
	bool myAction() { return true; }
	bool doesItBlend() { return true; }
	void cleanUp() {}
	void doInit() {}
	void doAfter() {}

	public HelloParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class MainContext extends ParserRuleContext {
		public List<MathContext> math() {
			return getRuleContexts(MathContext.class);
		}
		public MathContext math(int i) {
			return getRuleContext(MathContext.class,i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Newline() { return getTokens(HelloParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(HelloParser.Newline, i);
		}
		public MainContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_main; }
	}

	public final MainContext main() throws RecognitionException {
		MainContext _localctx = new MainContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_main);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(49);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << For) | (1L << IF) | (1L << FigureOpen) | (1L << ID))) != 0)) {
				{
				{
				setState(42);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Integer:
				case Float:
				case ID:
					{
					setState(40);
					math();
					}
					break;
				case For:
				case IF:
				case FigureOpen:
					{
					setState(41);
					expr();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(45);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Newline) {
					{
					setState(44);
					match(Newline);
					}
				}

				}
				}
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
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

	public static class SummOperationContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Plus() { return getToken(HelloParser.Plus, 0); }
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public TerminalNode PlusAss() { return getToken(HelloParser.PlusAss, 0); }
		public SummOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_summOperation; }
	}

	public final SummOperationContext summOperation() throws RecognitionException {
		SummOperationContext _localctx = new SummOperationContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_summOperation);
		try {
			setState(75);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(52);
				match(ID);
				setState(53);
				match(Assign);
				setState(58);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
				case 1:
					{
					setState(54);
					match(ID);
					}
					break;
				case 2:
					{
					setState(55);
					match(INT);
					}
					break;
				case 3:
					{
					setState(56);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(57);
					operation();
					}
					break;
				}
				setState(60);
				match(Plus);
				setState(65);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
				case 1:
					{
					setState(61);
					match(ID);
					}
					break;
				case 2:
					{
					setState(62);
					match(INT);
					}
					break;
				case 3:
					{
					setState(63);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(64);
					operation();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(67);
				match(ID);
				setState(68);
				match(PlusAss);
				setState(73);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
				case 1:
					{
					setState(69);
					match(ID);
					}
					break;
				case 2:
					{
					setState(70);
					match(INT);
					}
					break;
				case 3:
					{
					setState(71);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(72);
					operation();
					}
					break;
				}
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

	public static class SummContext extends ParserRuleContext {
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode Plus() { return getToken(HelloParser.Plus, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public SummContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_summ; }
	}

	public final SummContext summ() throws RecognitionException {
		SummContext _localctx = new SummContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_summ);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(OpenPar);
			setState(82);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				{
				setState(78);
				match(ID);
				}
				break;
			case 2:
				{
				setState(79);
				match(INT);
				}
				break;
			case 3:
				{
				setState(80);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(81);
				operation();
				}
				break;
			}
			setState(84);
			match(Plus);
			setState(89);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				{
				setState(85);
				match(ID);
				}
				break;
			case 2:
				{
				setState(86);
				match(INT);
				}
				break;
			case 3:
				{
				setState(87);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(88);
				operation();
				}
				break;
			}
			setState(91);
			match(ClosePar);
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

	public static class DiffOperationContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Minus() { return getToken(HelloParser.Minus, 0); }
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public TerminalNode MinusAss() { return getToken(HelloParser.MinusAss, 0); }
		public DiffOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_diffOperation; }
	}

	public final DiffOperationContext diffOperation() throws RecognitionException {
		DiffOperationContext _localctx = new DiffOperationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_diffOperation);
		try {
			setState(116);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(93);
				match(ID);
				setState(94);
				match(Assign);
				setState(99);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
				case 1:
					{
					setState(95);
					match(ID);
					}
					break;
				case 2:
					{
					setState(96);
					match(INT);
					}
					break;
				case 3:
					{
					setState(97);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(98);
					operation();
					}
					break;
				}
				setState(101);
				match(Minus);
				setState(106);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
				case 1:
					{
					setState(102);
					match(ID);
					}
					break;
				case 2:
					{
					setState(103);
					match(INT);
					}
					break;
				case 3:
					{
					setState(104);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(105);
					operation();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(108);
				match(ID);
				setState(109);
				match(MinusAss);
				setState(114);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
				case 1:
					{
					setState(110);
					match(ID);
					}
					break;
				case 2:
					{
					setState(111);
					match(INT);
					}
					break;
				case 3:
					{
					setState(112);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(113);
					operation();
					}
					break;
				}
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

	public static class DiffContext extends ParserRuleContext {
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode Minus() { return getToken(HelloParser.Minus, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public DiffContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_diff; }
	}

	public final DiffContext diff() throws RecognitionException {
		DiffContext _localctx = new DiffContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_diff);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(118);
			match(OpenPar);
			setState(123);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				{
				setState(119);
				match(ID);
				}
				break;
			case 2:
				{
				setState(120);
				match(INT);
				}
				break;
			case 3:
				{
				setState(121);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(122);
				operation();
				}
				break;
			}
			setState(125);
			match(Minus);
			setState(130);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				{
				setState(126);
				match(ID);
				}
				break;
			case 2:
				{
				setState(127);
				match(INT);
				}
				break;
			case 3:
				{
				setState(128);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(129);
				operation();
				}
				break;
			}
			setState(132);
			match(ClosePar);
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

	public static class MultOperationContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Star() { return getToken(HelloParser.Star, 0); }
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public TerminalNode StarAss() { return getToken(HelloParser.StarAss, 0); }
		public MultOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multOperation; }
	}

	public final MultOperationContext multOperation() throws RecognitionException {
		MultOperationContext _localctx = new MultOperationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_multOperation);
		try {
			setState(157);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(134);
				match(ID);
				setState(135);
				match(Assign);
				setState(140);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
				case 1:
					{
					setState(136);
					match(ID);
					}
					break;
				case 2:
					{
					setState(137);
					match(INT);
					}
					break;
				case 3:
					{
					setState(138);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(139);
					operation();
					}
					break;
				}
				setState(142);
				match(Star);
				setState(147);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
				case 1:
					{
					setState(143);
					match(ID);
					}
					break;
				case 2:
					{
					setState(144);
					match(INT);
					}
					break;
				case 3:
					{
					setState(145);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(146);
					operation();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(149);
				match(ID);
				setState(150);
				match(StarAss);
				setState(155);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,17,_ctx) ) {
				case 1:
					{
					setState(151);
					match(ID);
					}
					break;
				case 2:
					{
					setState(152);
					match(INT);
					}
					break;
				case 3:
					{
					setState(153);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(154);
					operation();
					}
					break;
				}
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

	public static class MultContext extends ParserRuleContext {
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode Star() { return getToken(HelloParser.Star, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public MultContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_mult; }
	}

	public final MultContext mult() throws RecognitionException {
		MultContext _localctx = new MultContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_mult);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(159);
			match(OpenPar);
			setState(164);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,19,_ctx) ) {
			case 1:
				{
				setState(160);
				match(ID);
				}
				break;
			case 2:
				{
				setState(161);
				match(INT);
				}
				break;
			case 3:
				{
				setState(162);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(163);
				operation();
				}
				break;
			}
			setState(166);
			match(Star);
			setState(171);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
			case 1:
				{
				setState(167);
				match(ID);
				}
				break;
			case 2:
				{
				setState(168);
				match(INT);
				}
				break;
			case 3:
				{
				setState(169);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(170);
				operation();
				}
				break;
			}
			setState(173);
			match(ClosePar);
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

	public static class DivOperationContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Devide() { return getToken(HelloParser.Devide, 0); }
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public TerminalNode DevideAss() { return getToken(HelloParser.DevideAss, 0); }
		public DivOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_divOperation; }
	}

	public final DivOperationContext divOperation() throws RecognitionException {
		DivOperationContext _localctx = new DivOperationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_divOperation);
		try {
			setState(198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,24,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(175);
				match(ID);
				setState(176);
				match(Assign);
				setState(181);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
				case 1:
					{
					setState(177);
					match(ID);
					}
					break;
				case 2:
					{
					setState(178);
					match(INT);
					}
					break;
				case 3:
					{
					setState(179);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(180);
					operation();
					}
					break;
				}
				setState(183);
				match(Devide);
				setState(188);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
				case 1:
					{
					setState(184);
					match(ID);
					}
					break;
				case 2:
					{
					setState(185);
					match(INT);
					}
					break;
				case 3:
					{
					setState(186);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(187);
					operation();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(190);
				match(ID);
				setState(191);
				match(DevideAss);
				setState(196);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
				case 1:
					{
					setState(192);
					match(ID);
					}
					break;
				case 2:
					{
					setState(193);
					match(INT);
					}
					break;
				case 3:
					{
					setState(194);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(195);
					operation();
					}
					break;
				}
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

	public static class DivContext extends ParserRuleContext {
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode Devide() { return getToken(HelloParser.Devide, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<DivContext> div() {
			return getRuleContexts(DivContext.class);
		}
		public DivContext div(int i) {
			return getRuleContext(DivContext.class,i);
		}
		public DivContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_div; }
	}

	public final DivContext div() throws RecognitionException {
		DivContext _localctx = new DivContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_div);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(200);
			match(OpenPar);
			setState(205);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(201);
				match(ID);
				}
				break;
			case INT:
				{
				setState(202);
				match(INT);
				}
				break;
			case FLT:
				{
				setState(203);
				match(FLT);
				}
				break;
			case OpenPar:
				{
				setState(204);
				div();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(207);
			match(Devide);
			setState(212);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ID:
				{
				setState(208);
				match(ID);
				}
				break;
			case INT:
				{
				setState(209);
				match(INT);
				}
				break;
			case FLT:
				{
				setState(210);
				match(FLT);
				}
				break;
			case OpenPar:
				{
				setState(211);
				div();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(214);
			match(ClosePar);
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

	public static class InPowOperationContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Pow() { return getToken(HelloParser.Pow, 0); }
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public TerminalNode PowAss() { return getToken(HelloParser.PowAss, 0); }
		public InPowOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inPowOperation; }
	}

	public final InPowOperationContext inPowOperation() throws RecognitionException {
		InPowOperationContext _localctx = new InPowOperationContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_inPowOperation);
		try {
			setState(239);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,30,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(216);
				match(ID);
				setState(217);
				match(Assign);
				setState(222);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,27,_ctx) ) {
				case 1:
					{
					setState(218);
					match(ID);
					}
					break;
				case 2:
					{
					setState(219);
					match(INT);
					}
					break;
				case 3:
					{
					setState(220);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(221);
					operation();
					}
					break;
				}
				setState(224);
				match(Pow);
				setState(229);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
				case 1:
					{
					setState(225);
					match(ID);
					}
					break;
				case 2:
					{
					setState(226);
					match(INT);
					}
					break;
				case 3:
					{
					setState(227);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(228);
					operation();
					}
					break;
				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(231);
				match(ID);
				setState(232);
				match(PowAss);
				setState(237);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,29,_ctx) ) {
				case 1:
					{
					setState(233);
					match(ID);
					}
					break;
				case 2:
					{
					setState(234);
					match(INT);
					}
					break;
				case 3:
					{
					setState(235);
					match(FLT);
					}
					break;
				case 4:
					{
					setState(236);
					operation();
					}
					break;
				}
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

	public static class InPowContext extends ParserRuleContext {
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode Pow() { return getToken(HelloParser.Pow, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<OperationContext> operation() {
			return getRuleContexts(OperationContext.class);
		}
		public OperationContext operation(int i) {
			return getRuleContext(OperationContext.class,i);
		}
		public InPowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inPow; }
	}

	public final InPowContext inPow() throws RecognitionException {
		InPowContext _localctx = new InPowContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_inPow);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(241);
			match(OpenPar);
			setState(246);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,31,_ctx) ) {
			case 1:
				{
				setState(242);
				match(ID);
				}
				break;
			case 2:
				{
				setState(243);
				match(INT);
				}
				break;
			case 3:
				{
				setState(244);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(245);
				operation();
				}
				break;
			}
			setState(248);
			match(Pow);
			setState(253);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				{
				setState(249);
				match(ID);
				}
				break;
			case 2:
				{
				setState(250);
				match(INT);
				}
				break;
			case 3:
				{
				setState(251);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(252);
				operation();
				}
				break;
			}
			setState(255);
			match(ClosePar);
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

	public static class InSqrtContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Sqrt() { return getToken(HelloParser.Sqrt, 0); }
		public TerminalNode INT() { return getToken(HelloParser.INT, 0); }
		public TerminalNode FLT() { return getToken(HelloParser.FLT, 0); }
		public OperationContext operation() {
			return getRuleContext(OperationContext.class,0);
		}
		public InSqrtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_inSqrt; }
	}

	public final InSqrtContext inSqrt() throws RecognitionException {
		InSqrtContext _localctx = new InSqrtContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_inSqrt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(257);
			match(ID);
			setState(258);
			match(Assign);
			setState(259);
			match(Sqrt);
			setState(264);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,33,_ctx) ) {
			case 1:
				{
				setState(260);
				match(ID);
				}
				break;
			case 2:
				{
				setState(261);
				match(INT);
				}
				break;
			case 3:
				{
				setState(262);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(263);
				operation();
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

	public static class OperationContext extends ParserRuleContext {
		public SummContext summ() {
			return getRuleContext(SummContext.class,0);
		}
		public DiffContext diff() {
			return getRuleContext(DiffContext.class,0);
		}
		public MultContext mult() {
			return getRuleContext(MultContext.class,0);
		}
		public DivContext div() {
			return getRuleContext(DivContext.class,0);
		}
		public InPowContext inPow() {
			return getRuleContext(InPowContext.class,0);
		}
		public InSqrtContext inSqrt() {
			return getRuleContext(InSqrtContext.class,0);
		}
		public OperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operation; }
	}

	public final OperationContext operation() throws RecognitionException {
		OperationContext _localctx = new OperationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_operation);
		try {
			setState(272);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,34,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(266);
				summ();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(267);
				diff();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(268);
				mult();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(269);
				div();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(270);
				inPow();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(271);
				inSqrt();
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

	public static class MathContext extends ParserRuleContext {
		public SummOperationContext summOperation() {
			return getRuleContext(SummOperationContext.class,0);
		}
		public DiffOperationContext diffOperation() {
			return getRuleContext(DiffOperationContext.class,0);
		}
		public MultOperationContext multOperation() {
			return getRuleContext(MultOperationContext.class,0);
		}
		public DivOperationContext divOperation() {
			return getRuleContext(DivOperationContext.class,0);
		}
		public InPowOperationContext inPowOperation() {
			return getRuleContext(InPowOperationContext.class,0);
		}
		public InSqrtContext inSqrt() {
			return getRuleContext(InSqrtContext.class,0);
		}
		public CreateContext create() {
			return getRuleContext(CreateContext.class,0);
		}
		public AssContext ass() {
			return getRuleContext(AssContext.class,0);
		}
		public MathContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_math; }
	}

	public final MathContext math() throws RecognitionException {
		MathContext _localctx = new MathContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_math);
		try {
			setState(282);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,35,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(274);
				summOperation();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(275);
				diffOperation();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(276);
				multOperation();
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(277);
				divOperation();
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(278);
				inPowOperation();
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(279);
				inSqrt();
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(280);
				create();
				}
				break;
			case 8:
				enterOuterAlt(_localctx, 8);
				{
				setState(281);
				ass();
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

	public static class CreateContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(HelloParser.ID, 0); }
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode Integer() { return getToken(HelloParser.Integer, 0); }
		public TerminalNode Float() { return getToken(HelloParser.Float, 0); }
		public TerminalNode INT() { return getToken(HelloParser.INT, 0); }
		public TerminalNode FLT() { return getToken(HelloParser.FLT, 0); }
		public CreateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_create; }
	}

	public final CreateContext create() throws RecognitionException {
		CreateContext _localctx = new CreateContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_create);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(284);
			_la = _input.LA(1);
			if ( !(_la==Integer || _la==Float) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(285);
			match(ID);
			setState(286);
			match(Assign);
			setState(287);
			_la = _input.LA(1);
			if ( !(_la==INT || _la==FLT) ) {
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

	public static class AssContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public TerminalNode Assign() { return getToken(HelloParser.Assign, 0); }
		public TerminalNode INT() { return getToken(HelloParser.INT, 0); }
		public TerminalNode FLT() { return getToken(HelloParser.FLT, 0); }
		public OperationContext operation() {
			return getRuleContext(OperationContext.class,0);
		}
		public AssContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ass; }
	}

	public final AssContext ass() throws RecognitionException {
		AssContext _localctx = new AssContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_ass);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(289);
			match(ID);
			setState(290);
			match(Assign);
			setState(295);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,36,_ctx) ) {
			case 1:
				{
				setState(291);
				match(ID);
				}
				break;
			case 2:
				{
				setState(292);
				match(INT);
				}
				break;
			case 3:
				{
				setState(293);
				match(FLT);
				}
				break;
			case 4:
				{
				setState(294);
				operation();
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

	public static class ExprContext extends ParserRuleContext {
		public ForCycleContext forCycle() {
			return getRuleContext(ForCycleContext.class,0);
		}
		public IfExprContext ifExpr() {
			return getRuleContext(IfExprContext.class,0);
		}
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_expr);
		try {
			setState(300);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case For:
				enterOuterAlt(_localctx, 1);
				{
				setState(297);
				forCycle();
				}
				break;
			case IF:
				enterOuterAlt(_localctx, 2);
				{
				setState(298);
				ifExpr();
				}
				break;
			case FigureOpen:
				enterOuterAlt(_localctx, 3);
				{
				setState(299);
				block();
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

	public static class ForCycleContext extends ParserRuleContext {
		public TerminalNode For() { return getToken(HelloParser.For, 0); }
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> Comma() { return getTokens(HelloParser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(HelloParser.Comma, i);
		}
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public TerminalNode FigureOpen() { return getToken(HelloParser.FigureOpen, 0); }
		public TerminalNode FigureClose() { return getToken(HelloParser.FigureClose, 0); }
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public TerminalNode CompareOperator() { return getToken(HelloParser.CompareOperator, 0); }
		public List<TerminalNode> Newline() { return getTokens(HelloParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(HelloParser.Newline, i);
		}
		public List<MathContext> math() {
			return getRuleContexts(MathContext.class);
		}
		public MathContext math(int i) {
			return getRuleContext(MathContext.class,i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ForCycleContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_forCycle; }
	}

	public final ForCycleContext forCycle() throws RecognitionException {
		ForCycleContext _localctx = new ForCycleContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_forCycle);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(302);
			match(For);
			setState(303);
			match(OpenPar);
			setState(304);
			match(ID);
			setState(305);
			match(Comma);
			setState(306);
			match(ID);
			{
			setState(307);
			match(CompareOperator);
			}
			setState(308);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << FLT) | (1L << ID))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(309);
			match(Comma);
			setState(310);
			_la = _input.LA(1);
			if ( !(_la==INT || _la==FLT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(311);
			match(ClosePar);
			setState(312);
			match(FigureOpen);
			setState(321);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << For) | (1L << IF) | (1L << FigureOpen) | (1L << ID))) != 0)) {
				{
				{
				setState(315);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Integer:
				case Float:
				case ID:
					{
					setState(313);
					math();
					}
					break;
				case For:
				case IF:
				case FigureOpen:
					{
					setState(314);
					expr();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(317);
				match(Newline);
				}
				}
				setState(323);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(324);
			match(FigureClose);
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

	public static class IfExprContext extends ParserRuleContext {
		public TerminalNode IF() { return getToken(HelloParser.IF, 0); }
		public TerminalNode OpenPar() { return getToken(HelloParser.OpenPar, 0); }
		public TerminalNode CompareOperator() { return getToken(HelloParser.CompareOperator, 0); }
		public TerminalNode ClosePar() { return getToken(HelloParser.ClosePar, 0); }
		public TerminalNode FigureOpen() { return getToken(HelloParser.FigureOpen, 0); }
		public TerminalNode FigureClose() { return getToken(HelloParser.FigureClose, 0); }
		public List<TerminalNode> ID() { return getTokens(HelloParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(HelloParser.ID, i);
		}
		public List<TerminalNode> INT() { return getTokens(HelloParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(HelloParser.INT, i);
		}
		public List<TerminalNode> FLT() { return getTokens(HelloParser.FLT); }
		public TerminalNode FLT(int i) {
			return getToken(HelloParser.FLT, i);
		}
		public List<MathContext> math() {
			return getRuleContexts(MathContext.class);
		}
		public MathContext math(int i) {
			return getRuleContext(MathContext.class,i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Newline() { return getTokens(HelloParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(HelloParser.Newline, i);
		}
		public IfExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_ifExpr; }
	}

	public final IfExprContext ifExpr() throws RecognitionException {
		IfExprContext _localctx = new IfExprContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_ifExpr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(326);
			match(IF);
			setState(327);
			match(OpenPar);
			setState(328);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << FLT) | (1L << ID))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(329);
			match(CompareOperator);
			setState(330);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << FLT) | (1L << ID))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(331);
			match(ClosePar);
			setState(332);
			match(FigureOpen);
			setState(342);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << For) | (1L << IF) | (1L << FigureOpen) | (1L << ID))) != 0)) {
				{
				{
				setState(335);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Integer:
				case Float:
				case ID:
					{
					setState(333);
					math();
					}
					break;
				case For:
				case IF:
				case FigureOpen:
					{
					setState(334);
					expr();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(338);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Newline) {
					{
					setState(337);
					match(Newline);
					}
				}

				}
				}
				setState(344);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(345);
			match(FigureClose);
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
		public TerminalNode FigureOpen() { return getToken(HelloParser.FigureOpen, 0); }
		public TerminalNode FigureClose() { return getToken(HelloParser.FigureClose, 0); }
		public List<MathContext> math() {
			return getRuleContexts(MathContext.class);
		}
		public MathContext math(int i) {
			return getRuleContext(MathContext.class,i);
		}
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> Newline() { return getTokens(HelloParser.Newline); }
		public TerminalNode Newline(int i) {
			return getToken(HelloParser.Newline, i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(347);
			match(FigureOpen);
			setState(357);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << Integer) | (1L << Float) | (1L << For) | (1L << IF) | (1L << FigureOpen) | (1L << ID))) != 0)) {
				{
				{
				setState(350);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case Integer:
				case Float:
				case ID:
					{
					setState(348);
					math();
					}
					break;
				case For:
				case IF:
				case FigureOpen:
					{
					setState(349);
					expr();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(353);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Newline) {
					{
					setState(352);
					match(Newline);
					}
				}

				}
				}
				setState(359);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(360);
			match(FigureClose);
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

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\62\u016d\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\5\2-\n\2\3\2\5\2\60\n\2\7\2\62"+
		"\n\2\f\2\16\2\65\13\2\3\3\3\3\3\3\3\3\3\3\3\3\5\3=\n\3\3\3\3\3\3\3\3\3"+
		"\3\3\5\3D\n\3\3\3\3\3\3\3\3\3\3\3\3\3\5\3L\n\3\5\3N\n\3\3\4\3\4\3\4\3"+
		"\4\3\4\5\4U\n\4\3\4\3\4\3\4\3\4\3\4\5\4\\\n\4\3\4\3\4\3\5\3\5\3\5\3\5"+
		"\3\5\3\5\5\5f\n\5\3\5\3\5\3\5\3\5\3\5\5\5m\n\5\3\5\3\5\3\5\3\5\3\5\3\5"+
		"\5\5u\n\5\5\5w\n\5\3\6\3\6\3\6\3\6\3\6\5\6~\n\6\3\6\3\6\3\6\3\6\3\6\5"+
		"\6\u0085\n\6\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u008f\n\7\3\7\3\7\3\7"+
		"\3\7\3\7\5\7\u0096\n\7\3\7\3\7\3\7\3\7\3\7\3\7\5\7\u009e\n\7\5\7\u00a0"+
		"\n\7\3\b\3\b\3\b\3\b\3\b\5\b\u00a7\n\b\3\b\3\b\3\b\3\b\3\b\5\b\u00ae\n"+
		"\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u00b8\n\t\3\t\3\t\3\t\3\t\3\t\5"+
		"\t\u00bf\n\t\3\t\3\t\3\t\3\t\3\t\3\t\5\t\u00c7\n\t\5\t\u00c9\n\t\3\n\3"+
		"\n\3\n\3\n\3\n\5\n\u00d0\n\n\3\n\3\n\3\n\3\n\3\n\5\n\u00d7\n\n\3\n\3\n"+
		"\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00e1\n\13\3\13\3\13\3\13\3\13\3\13"+
		"\5\13\u00e8\n\13\3\13\3\13\3\13\3\13\3\13\3\13\5\13\u00f0\n\13\5\13\u00f2"+
		"\n\13\3\f\3\f\3\f\3\f\3\f\5\f\u00f9\n\f\3\f\3\f\3\f\3\f\3\f\5\f\u0100"+
		"\n\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u010b\n\r\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\5\16\u0113\n\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\17"+
		"\5\17\u011d\n\17\3\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\3\21\3\21"+
		"\5\21\u012a\n\21\3\22\3\22\3\22\5\22\u012f\n\22\3\23\3\23\3\23\3\23\3"+
		"\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\5\23\u013e\n\23\3\23\3\23"+
		"\7\23\u0142\n\23\f\23\16\23\u0145\13\23\3\23\3\23\3\24\3\24\3\24\3\24"+
		"\3\24\3\24\3\24\3\24\3\24\5\24\u0152\n\24\3\24\5\24\u0155\n\24\7\24\u0157"+
		"\n\24\f\24\16\24\u015a\13\24\3\24\3\24\3\25\3\25\3\25\5\25\u0161\n\25"+
		"\3\25\5\25\u0164\n\25\7\25\u0166\n\25\f\25\16\25\u0169\13\25\3\25\3\25"+
		"\3\25\2\2\26\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&(\2\5\3\2\6\7"+
		"\4\2\16\16\20\20\5\2\16\16\20\20\60\60\2\u01c7\2\63\3\2\2\2\4M\3\2\2\2"+
		"\6O\3\2\2\2\bv\3\2\2\2\nx\3\2\2\2\f\u009f\3\2\2\2\16\u00a1\3\2\2\2\20"+
		"\u00c8\3\2\2\2\22\u00ca\3\2\2\2\24\u00f1\3\2\2\2\26\u00f3\3\2\2\2\30\u0103"+
		"\3\2\2\2\32\u0112\3\2\2\2\34\u011c\3\2\2\2\36\u011e\3\2\2\2 \u0123\3\2"+
		"\2\2\"\u012e\3\2\2\2$\u0130\3\2\2\2&\u0148\3\2\2\2(\u015d\3\2\2\2*-\5"+
		"\34\17\2+-\5\"\22\2,*\3\2\2\2,+\3\2\2\2-/\3\2\2\2.\60\7\32\2\2/.\3\2\2"+
		"\2/\60\3\2\2\2\60\62\3\2\2\2\61,\3\2\2\2\62\65\3\2\2\2\63\61\3\2\2\2\63"+
		"\64\3\2\2\2\64\3\3\2\2\2\65\63\3\2\2\2\66\67\7\60\2\2\67<\7\30\2\28=\7"+
		"\60\2\29=\7\16\2\2:=\7\20\2\2;=\5\32\16\2<8\3\2\2\2<9\3\2\2\2<:\3\2\2"+
		"\2<;\3\2\2\2=>\3\2\2\2>C\7\33\2\2?D\7\60\2\2@D\7\16\2\2AD\7\20\2\2BD\5"+
		"\32\16\2C?\3\2\2\2C@\3\2\2\2CA\3\2\2\2CB\3\2\2\2DN\3\2\2\2EF\7\60\2\2"+
		"FK\7\34\2\2GL\7\60\2\2HL\7\16\2\2IL\7\20\2\2JL\5\32\16\2KG\3\2\2\2KH\3"+
		"\2\2\2KI\3\2\2\2KJ\3\2\2\2LN\3\2\2\2M\66\3\2\2\2ME\3\2\2\2N\5\3\2\2\2"+
		"OT\7#\2\2PU\7\60\2\2QU\7\16\2\2RU\7\20\2\2SU\5\32\16\2TP\3\2\2\2TQ\3\2"+
		"\2\2TR\3\2\2\2TS\3\2\2\2UV\3\2\2\2V[\7\33\2\2W\\\7\60\2\2X\\\7\16\2\2"+
		"Y\\\7\20\2\2Z\\\5\32\16\2[W\3\2\2\2[X\3\2\2\2[Y\3\2\2\2[Z\3\2\2\2\\]\3"+
		"\2\2\2]^\7$\2\2^\7\3\2\2\2_`\7\60\2\2`e\7\30\2\2af\7\60\2\2bf\7\16\2\2"+
		"cf\7\20\2\2df\5\32\16\2ea\3\2\2\2eb\3\2\2\2ec\3\2\2\2ed\3\2\2\2fg\3\2"+
		"\2\2gl\7\35\2\2hm\7\60\2\2im\7\16\2\2jm\7\20\2\2km\5\32\16\2lh\3\2\2\2"+
		"li\3\2\2\2lj\3\2\2\2lk\3\2\2\2mw\3\2\2\2no\7\60\2\2ot\7\36\2\2pu\7\60"+
		"\2\2qu\7\16\2\2ru\7\20\2\2su\5\32\16\2tp\3\2\2\2tq\3\2\2\2tr\3\2\2\2t"+
		"s\3\2\2\2uw\3\2\2\2v_\3\2\2\2vn\3\2\2\2w\t\3\2\2\2x}\7#\2\2y~\7\60\2\2"+
		"z~\7\16\2\2{~\7\20\2\2|~\5\32\16\2}y\3\2\2\2}z\3\2\2\2}{\3\2\2\2}|\3\2"+
		"\2\2~\177\3\2\2\2\177\u0084\7\35\2\2\u0080\u0085\7\60\2\2\u0081\u0085"+
		"\7\16\2\2\u0082\u0085\7\20\2\2\u0083\u0085\5\32\16\2\u0084\u0080\3\2\2"+
		"\2\u0084\u0081\3\2\2\2\u0084\u0082\3\2\2\2\u0084\u0083\3\2\2\2\u0085\u0086"+
		"\3\2\2\2\u0086\u0087\7$\2\2\u0087\13\3\2\2\2\u0088\u0089\7\60\2\2\u0089"+
		"\u008e\7\30\2\2\u008a\u008f\7\60\2\2\u008b\u008f\7\16\2\2\u008c\u008f"+
		"\7\20\2\2\u008d\u008f\5\32\16\2\u008e\u008a\3\2\2\2\u008e\u008b\3\2\2"+
		"\2\u008e\u008c\3\2\2\2\u008e\u008d\3\2\2\2\u008f\u0090\3\2\2\2\u0090\u0095"+
		"\7\37\2\2\u0091\u0096\7\60\2\2\u0092\u0096\7\16\2\2\u0093\u0096\7\20\2"+
		"\2\u0094\u0096\5\32\16\2\u0095\u0091\3\2\2\2\u0095\u0092\3\2\2\2\u0095"+
		"\u0093\3\2\2\2\u0095\u0094\3\2\2\2\u0096\u00a0\3\2\2\2\u0097\u0098\7\60"+
		"\2\2\u0098\u009d\7 \2\2\u0099\u009e\7\60\2\2\u009a\u009e\7\16\2\2\u009b"+
		"\u009e\7\20\2\2\u009c\u009e\5\32\16\2\u009d\u0099\3\2\2\2\u009d\u009a"+
		"\3\2\2\2\u009d\u009b\3\2\2\2\u009d\u009c\3\2\2\2\u009e\u00a0\3\2\2\2\u009f"+
		"\u0088\3\2\2\2\u009f\u0097\3\2\2\2\u00a0\r\3\2\2\2\u00a1\u00a6\7#\2\2"+
		"\u00a2\u00a7\7\60\2\2\u00a3\u00a7\7\16\2\2\u00a4\u00a7\7\20\2\2\u00a5"+
		"\u00a7\5\32\16\2\u00a6\u00a2\3\2\2\2\u00a6\u00a3\3\2\2\2\u00a6\u00a4\3"+
		"\2\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00ad\7\37\2\2\u00a9"+
		"\u00ae\7\60\2\2\u00aa\u00ae\7\16\2\2\u00ab\u00ae\7\20\2\2\u00ac\u00ae"+
		"\5\32\16\2\u00ad\u00a9\3\2\2\2\u00ad\u00aa\3\2\2\2\u00ad\u00ab\3\2\2\2"+
		"\u00ad\u00ac\3\2\2\2\u00ae\u00af\3\2\2\2\u00af\u00b0\7$\2\2\u00b0\17\3"+
		"\2\2\2\u00b1\u00b2\7\60\2\2\u00b2\u00b7\7\30\2\2\u00b3\u00b8\7\60\2\2"+
		"\u00b4\u00b8\7\16\2\2\u00b5\u00b8\7\20\2\2\u00b6\u00b8\5\32\16\2\u00b7"+
		"\u00b3\3\2\2\2\u00b7\u00b4\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b7\u00b6\3\2"+
		"\2\2\u00b8\u00b9\3\2\2\2\u00b9\u00be\7!\2\2\u00ba\u00bf\7\60\2\2\u00bb"+
		"\u00bf\7\16\2\2\u00bc\u00bf\7\20\2\2\u00bd\u00bf\5\32\16\2\u00be\u00ba"+
		"\3\2\2\2\u00be\u00bb\3\2\2\2\u00be\u00bc\3\2\2\2\u00be\u00bd\3\2\2\2\u00bf"+
		"\u00c9\3\2\2\2\u00c0\u00c1\7\60\2\2\u00c1\u00c6\7\"\2\2\u00c2\u00c7\7"+
		"\60\2\2\u00c3\u00c7\7\16\2\2\u00c4\u00c7\7\20\2\2\u00c5\u00c7\5\32\16"+
		"\2\u00c6\u00c2\3\2\2\2\u00c6\u00c3\3\2\2\2\u00c6\u00c4\3\2\2\2\u00c6\u00c5"+
		"\3\2\2\2\u00c7\u00c9\3\2\2\2\u00c8\u00b1\3\2\2\2\u00c8\u00c0\3\2\2\2\u00c9"+
		"\21\3\2\2\2\u00ca\u00cf\7#\2\2\u00cb\u00d0\7\60\2\2\u00cc\u00d0\7\16\2"+
		"\2\u00cd\u00d0\7\20\2\2\u00ce\u00d0\5\22\n\2\u00cf\u00cb\3\2\2\2\u00cf"+
		"\u00cc\3\2\2\2\u00cf\u00cd\3\2\2\2\u00cf\u00ce\3\2\2\2\u00d0\u00d1\3\2"+
		"\2\2\u00d1\u00d6\7!\2\2\u00d2\u00d7\7\60\2\2\u00d3\u00d7\7\16\2\2\u00d4"+
		"\u00d7\7\20\2\2\u00d5\u00d7\5\22\n\2\u00d6\u00d2\3\2\2\2\u00d6\u00d3\3"+
		"\2\2\2\u00d6\u00d4\3\2\2\2\u00d6\u00d5\3\2\2\2\u00d7\u00d8\3\2\2\2\u00d8"+
		"\u00d9\7$\2\2\u00d9\23\3\2\2\2\u00da\u00db\7\60\2\2\u00db\u00e0\7\30\2"+
		"\2\u00dc\u00e1\7\60\2\2\u00dd\u00e1\7\16\2\2\u00de\u00e1\7\20\2\2\u00df"+
		"\u00e1\5\32\16\2\u00e0\u00dc\3\2\2\2\u00e0\u00dd\3\2\2\2\u00e0\u00de\3"+
		"\2\2\2\u00e0\u00df\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e7\7*\2\2\u00e3"+
		"\u00e8\7\60\2\2\u00e4\u00e8\7\16\2\2\u00e5\u00e8\7\20\2\2\u00e6\u00e8"+
		"\5\32\16\2\u00e7\u00e3\3\2\2\2\u00e7\u00e4\3\2\2\2\u00e7\u00e5\3\2\2\2"+
		"\u00e7\u00e6\3\2\2\2\u00e8\u00f2\3\2\2\2\u00e9\u00ea\7\60\2\2\u00ea\u00ef"+
		"\7+\2\2\u00eb\u00f0\7\60\2\2\u00ec\u00f0\7\16\2\2\u00ed\u00f0\7\20\2\2"+
		"\u00ee\u00f0\5\32\16\2\u00ef\u00eb\3\2\2\2\u00ef\u00ec\3\2\2\2\u00ef\u00ed"+
		"\3\2\2\2\u00ef\u00ee\3\2\2\2\u00f0\u00f2\3\2\2\2\u00f1\u00da\3\2\2\2\u00f1"+
		"\u00e9\3\2\2\2\u00f2\25\3\2\2\2\u00f3\u00f8\7#\2\2\u00f4\u00f9\7\60\2"+
		"\2\u00f5\u00f9\7\16\2\2\u00f6\u00f9\7\20\2\2\u00f7\u00f9\5\32\16\2\u00f8"+
		"\u00f4\3\2\2\2\u00f8\u00f5\3\2\2\2\u00f8\u00f6\3\2\2\2\u00f8\u00f7\3\2"+
		"\2\2\u00f9\u00fa\3\2\2\2\u00fa\u00ff\7*\2\2\u00fb\u0100\7\60\2\2\u00fc"+
		"\u0100\7\16\2\2\u00fd\u0100\7\20\2\2\u00fe\u0100\5\32\16\2\u00ff\u00fb"+
		"\3\2\2\2\u00ff\u00fc\3\2\2\2\u00ff\u00fd\3\2\2\2\u00ff\u00fe\3\2\2\2\u0100"+
		"\u0101\3\2\2\2\u0101\u0102\7$\2\2\u0102\27\3\2\2\2\u0103\u0104\7\60\2"+
		"\2\u0104\u0105\7\30\2\2\u0105\u010a\7,\2\2\u0106\u010b\7\60\2\2\u0107"+
		"\u010b\7\16\2\2\u0108\u010b\7\20\2\2\u0109\u010b\5\32\16\2\u010a\u0106"+
		"\3\2\2\2\u010a\u0107\3\2\2\2\u010a\u0108\3\2\2\2\u010a\u0109\3\2\2\2\u010b"+
		"\31\3\2\2\2\u010c\u0113\5\6\4\2\u010d\u0113\5\n\6\2\u010e\u0113\5\16\b"+
		"\2\u010f\u0113\5\22\n\2\u0110\u0113\5\26\f\2\u0111\u0113\5\30\r\2\u0112"+
		"\u010c\3\2\2\2\u0112\u010d\3\2\2\2\u0112\u010e\3\2\2\2\u0112\u010f\3\2"+
		"\2\2\u0112\u0110\3\2\2\2\u0112\u0111\3\2\2\2\u0113\33\3\2\2\2\u0114\u011d"+
		"\5\4\3\2\u0115\u011d\5\b\5\2\u0116\u011d\5\f\7\2\u0117\u011d\5\20\t\2"+
		"\u0118\u011d\5\24\13\2\u0119\u011d\5\30\r\2\u011a\u011d\5\36\20\2\u011b"+
		"\u011d\5 \21\2\u011c\u0114\3\2\2\2\u011c\u0115\3\2\2\2\u011c\u0116\3\2"+
		"\2\2\u011c\u0117\3\2\2\2\u011c\u0118\3\2\2\2\u011c\u0119\3\2\2\2\u011c"+
		"\u011a\3\2\2\2\u011c\u011b\3\2\2\2\u011d\35\3\2\2\2\u011e\u011f\t\2\2"+
		"\2\u011f\u0120\7\60\2\2\u0120\u0121\7\30\2\2\u0121\u0122\t\3\2\2\u0122"+
		"\37\3\2\2\2\u0123\u0124\7\60\2\2\u0124\u0129\7\30\2\2\u0125\u012a\7\60"+
		"\2\2\u0126\u012a\7\16\2\2\u0127\u012a\7\20\2\2\u0128\u012a\5\32\16\2\u0129"+
		"\u0125\3\2\2\2\u0129\u0126\3\2\2\2\u0129\u0127\3\2\2\2\u0129\u0128\3\2"+
		"\2\2\u012a!\3\2\2\2\u012b\u012f\5$\23\2\u012c\u012f\5&\24\2\u012d\u012f"+
		"\5(\25\2\u012e\u012b\3\2\2\2\u012e\u012c\3\2\2\2\u012e\u012d\3\2\2\2\u012f"+
		"#\3\2\2\2\u0130\u0131\7\n\2\2\u0131\u0132\7#\2\2\u0132\u0133\7\60\2\2"+
		"\u0133\u0134\7(\2\2\u0134\u0135\7\60\2\2\u0135\u0136\7\21\2\2\u0136\u0137"+
		"\t\4\2\2\u0137\u0138\7(\2\2\u0138\u0139\t\3\2\2\u0139\u013a\7$\2\2\u013a"+
		"\u0143\7%\2\2\u013b\u013e\5\34\17\2\u013c\u013e\5\"\22\2\u013d\u013b\3"+
		"\2\2\2\u013d\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0140\7\32\2\2\u0140"+
		"\u0142\3\2\2\2\u0141\u013d\3\2\2\2\u0142\u0145\3\2\2\2\u0143\u0141\3\2"+
		"\2\2\u0143\u0144\3\2\2\2\u0144\u0146\3\2\2\2\u0145\u0143\3\2\2\2\u0146"+
		"\u0147\7&\2\2\u0147%\3\2\2\2\u0148\u0149\7\13\2\2\u0149\u014a\7#\2\2\u014a"+
		"\u014b\t\4\2\2\u014b\u014c\7\21\2\2\u014c\u014d\t\4\2\2\u014d\u014e\7"+
		"$\2\2\u014e\u0158\7%\2\2\u014f\u0152\5\34\17\2\u0150\u0152\5\"\22\2\u0151"+
		"\u014f\3\2\2\2\u0151\u0150\3\2\2\2\u0152\u0154\3\2\2\2\u0153\u0155\7\32"+
		"\2\2\u0154\u0153\3\2\2\2\u0154\u0155\3\2\2\2\u0155\u0157\3\2\2\2\u0156"+
		"\u0151\3\2\2\2\u0157\u015a\3\2\2\2\u0158\u0156\3\2\2\2\u0158\u0159\3\2"+
		"\2\2\u0159\u015b\3\2\2\2\u015a\u0158\3\2\2\2\u015b\u015c\7&\2\2\u015c"+
		"\'\3\2\2\2\u015d\u0167\7%\2\2\u015e\u0161\5\34\17\2\u015f\u0161\5\"\22"+
		"\2\u0160\u015e\3\2\2\2\u0160\u015f\3\2\2\2\u0161\u0163\3\2\2\2\u0162\u0164"+
		"\7\32\2\2\u0163\u0162\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0166\3\2\2\2"+
		"\u0165\u0160\3\2\2\2\u0166\u0169\3\2\2\2\u0167\u0165\3\2\2\2\u0167\u0168"+
		"\3\2\2\2\u0168\u016a\3\2\2\2\u0169\u0167\3\2\2\2\u016a\u016b\7&\2\2\u016b"+
		")\3\2\2\2\60,/\63<CKMT[eltv}\u0084\u008e\u0095\u009d\u009f\u00a6\u00ad"+
		"\u00b7\u00be\u00c6\u00c8\u00cf\u00d6\u00e0\u00e7\u00ef\u00f1\u00f8\u00ff"+
		"\u010a\u0112\u011c\u0129\u012e\u013d\u0143\u0151\u0154\u0158\u0160\u0163"+
		"\u0167";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}