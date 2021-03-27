// Generated from /home/tima/Gleb/GlebLexer.g4 by ANTLR 4.9.1
/*Author : Tsimofei Kinevich, group : 821703*/
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class GlebLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Tim=1, Return=2, Continue=3, Integer=4, Float=5, And=6, For=7, IF=8, Then=9, 
		Else=10, INT=11, Digit=12, FLT=13, CompareOperator=14, LessThan=15, LessOrEqual=16, 
		GreaterThan=17, GreaterOrEqual=18, Equal=19, NotEqual=20, Assign=21, Colon=22, 
		Newline=23, Plus=24, PlusAss=25, Minus=26, MinusAss=27, Star=28, StarAss=29, 
		Devide=30, DevideAss=31, OpenPar=32, ClosePar=33, FigureOpen=34, FigureClose=35, 
		QuestionMark=36, Comma=37, Ant=38, Pow=39, PowAss=40, Sqrt=41, SqrtAss=42, 
		Foo=43, Bar=44, ID=45, Comment=46, WS=47;
	public static final int
		CommentsChannel=2, DirectiveChannel=3;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN", "CommentsChannel", "DirectiveChannel"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Return", "Continue", "Integer", "Float", "And", "For", "IF", "Then", 
			"Else", "INT", "Digit", "FLT", "CompareOperator", "LessThan", "LessOrEqual", 
			"GreaterThan", "GreaterOrEqual", "Equal", "NotEqual", "Assign", "Colon", 
			"Newline", "Plus", "PlusAss", "Minus", "MinusAss", "Star", "StarAss", 
			"Devide", "DevideAss", "OpenPar", "ClosePar", "FigureOpen", "FigureClose", 
			"QuestionMark", "Comma", "Ant", "Pow", "PowAss", "Sqrt", "SqrtAss", "Foo", 
			"Bar", "ID", "LETTER", "Comment", "WS", "Baz"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, "'return'", "'continue'", "'INT'", "'FLT'", "'And'", "'For'", 
			"'If'", "'Then'", "'Else'", null, null, null, null, "'<'", "'<='", "'>'", 
			"'>='", "'=='", "'!='", "'='", "':'", "';'", "'+'", "'+='", "'-'", "'-='", 
			"'*'", "'*='", "'/'", "'/='", "'('", "')'", "'{'", "'}'", "'?'", "','", 
			"'!'", "'^'", "'^='", "'~'", "'~='"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Tim", "Return", "Continue", "Integer", "Float", "And", "For", 
			"IF", "Then", "Else", "INT", "Digit", "FLT", "CompareOperator", "LessThan", 
			"LessOrEqual", "GreaterThan", "GreaterOrEqual", "Equal", "NotEqual", 
			"Assign", "Colon", "Newline", "Plus", "PlusAss", "Minus", "MinusAss", 
			"Star", "StarAss", "Devide", "DevideAss", "OpenPar", "ClosePar", "FigureOpen", 
			"FigureClose", "QuestionMark", "Comma", "Ant", "Pow", "PowAss", "Sqrt", 
			"SqrtAss", "Foo", "Bar", "ID", "Comment", "WS"
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

	/* public lexer declarations section */
	bool canTestFoo() { return true; }
	bool isItFoo() { return true; }
	bool isItBar() { return true; }

	void myFooLexerAction() { /* do something*/ };
	void myBarLexerAction() { /* do something*/ };


	public GlebLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "GlebLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 41:
			Foo_action((RuleContext)_localctx, actionIndex);
			break;
		case 42:
			Bar_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void Foo_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			 myFooLexerAction(); 
			break;
		}
	}
	private void Bar_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			 myBarLexerAction(); 
			break;
		}
	}
	@Override
	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 41:
			return Foo_sempred((RuleContext)_localctx, predIndex);
		case 42:
			return Bar_sempred((RuleContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean Foo_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return canTestFoo();
		case 1:
			return isItFoo();
		}
		return true;
	}
	private boolean Bar_sempred(RuleContext _localctx, int predIndex) {
		switch (predIndex) {
		case 2:
			return isItBar();
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\61\u0120\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\3\2\3\2\3\2\3\2\3\2\3\2"+
		"\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3"+
		"\5\3\6\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\n"+
		"\3\n\3\n\3\n\3\n\3\13\6\13\u0092\n\13\r\13\16\13\u0093\3\f\5\f\u0097\n"+
		"\f\3\f\3\f\3\r\6\r\u009c\n\r\r\r\16\r\u009d\3\r\3\r\6\r\u00a2\n\r\r\r"+
		"\16\r\u00a3\3\16\3\16\3\16\3\16\3\16\3\16\5\16\u00ac\n\16\3\17\3\17\3"+
		"\20\3\20\3\20\3\21\3\21\3\22\3\22\3\22\3\23\3\23\3\23\3\24\3\24\3\24\3"+
		"\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\31\3\31\3\31\3\32\3\32\3\33\3"+
		"\33\3\33\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\37\3\37\3\37\3 \3 \3!\3"+
		"!\3\"\3\"\3#\3#\3$\3$\3%\3%\3&\3&\3\'\3\'\3(\3(\3(\3)\3)\3*\3*\3*\3+\3"+
		"+\3+\3+\3+\3+\3+\3+\3,\3,\3,\3,\3,\3,\3,\3-\3-\7-\u0101\n-\f-\16-\u0104"+
		"\13-\3.\3.\3/\3/\7/\u010a\n/\f/\16/\u010d\13/\3/\5/\u0110\n/\3/\3/\3/"+
		"\3/\3\60\6\60\u0117\n\60\r\60\16\60\u0118\3\60\3\60\3\61\3\61\3\61\3\61"+
		"\2\2\62\3\4\5\5\7\6\t\7\13\b\r\t\17\n\21\13\23\f\25\r\27\16\31\17\33\20"+
		"\35\21\37\22!\23#\24%\25\'\26)\27+\30-\31/\32\61\33\63\34\65\35\67\36"+
		"9\37; =!?\"A#C$E%G&I\'K(M)O*Q+S,U-W.Y/[\2]\60_\61a\2\3\2\6\3\2\62;\5\2"+
		"\62;C\\c|\4\2\f\f\17\17\5\2\13\f\17\17\"\"\2\u012a\2\3\3\2\2\2\2\5\3\2"+
		"\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3"+
		"\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3"+
		"\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3"+
		"\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2"+
		"\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2"+
		"Y\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\3c\3\2\2\2\5j\3\2\2\2\7s\3\2\2\2\tw\3"+
		"\2\2\2\13{\3\2\2\2\r\177\3\2\2\2\17\u0083\3\2\2\2\21\u0086\3\2\2\2\23"+
		"\u008b\3\2\2\2\25\u0091\3\2\2\2\27\u0096\3\2\2\2\31\u009b\3\2\2\2\33\u00ab"+
		"\3\2\2\2\35\u00ad\3\2\2\2\37\u00af\3\2\2\2!\u00b2\3\2\2\2#\u00b4\3\2\2"+
		"\2%\u00b7\3\2\2\2\'\u00ba\3\2\2\2)\u00bd\3\2\2\2+\u00bf\3\2\2\2-\u00c1"+
		"\3\2\2\2/\u00c3\3\2\2\2\61\u00c5\3\2\2\2\63\u00c8\3\2\2\2\65\u00ca\3\2"+
		"\2\2\67\u00cd\3\2\2\29\u00cf\3\2\2\2;\u00d2\3\2\2\2=\u00d4\3\2\2\2?\u00d7"+
		"\3\2\2\2A\u00d9\3\2\2\2C\u00db\3\2\2\2E\u00dd\3\2\2\2G\u00df\3\2\2\2I"+
		"\u00e1\3\2\2\2K\u00e3\3\2\2\2M\u00e5\3\2\2\2O\u00e7\3\2\2\2Q\u00ea\3\2"+
		"\2\2S\u00ec\3\2\2\2U\u00ef\3\2\2\2W\u00f7\3\2\2\2Y\u00fe\3\2\2\2[\u0105"+
		"\3\2\2\2]\u0107\3\2\2\2_\u0116\3\2\2\2a\u011c\3\2\2\2cd\7t\2\2de\7g\2"+
		"\2ef\7v\2\2fg\7w\2\2gh\7t\2\2hi\7p\2\2i\4\3\2\2\2jk\7e\2\2kl\7q\2\2lm"+
		"\7p\2\2mn\7v\2\2no\7k\2\2op\7p\2\2pq\7w\2\2qr\7g\2\2r\6\3\2\2\2st\7K\2"+
		"\2tu\7P\2\2uv\7V\2\2v\b\3\2\2\2wx\7H\2\2xy\7N\2\2yz\7V\2\2z\n\3\2\2\2"+
		"{|\7C\2\2|}\7p\2\2}~\7f\2\2~\f\3\2\2\2\177\u0080\7H\2\2\u0080\u0081\7"+
		"q\2\2\u0081\u0082\7t\2\2\u0082\16\3\2\2\2\u0083\u0084\7K\2\2\u0084\u0085"+
		"\7h\2\2\u0085\20\3\2\2\2\u0086\u0087\7V\2\2\u0087\u0088\7j\2\2\u0088\u0089"+
		"\7g\2\2\u0089\u008a\7p\2\2\u008a\22\3\2\2\2\u008b\u008c\7G\2\2\u008c\u008d"+
		"\7n\2\2\u008d\u008e\7u\2\2\u008e\u008f\7g\2\2\u008f\24\3\2\2\2\u0090\u0092"+
		"\5\27\f\2\u0091\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093\u0091\3\2\2\2"+
		"\u0093\u0094\3\2\2\2\u0094\26\3\2\2\2\u0095\u0097\7/\2\2\u0096\u0095\3"+
		"\2\2\2\u0096\u0097\3\2\2\2\u0097\u0098\3\2\2\2\u0098\u0099\t\2\2\2\u0099"+
		"\30\3\2\2\2\u009a\u009c\5\27\f\2\u009b\u009a\3\2\2\2\u009c\u009d\3\2\2"+
		"\2\u009d\u009b\3\2\2\2\u009d\u009e\3\2\2\2\u009e\u009f\3\2\2\2\u009f\u00a1"+
		"\7\60\2\2\u00a0\u00a2\5\27\f\2\u00a1\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2"+
		"\u00a3\u00a1\3\2\2\2\u00a3\u00a4\3\2\2\2\u00a4\32\3\2\2\2\u00a5\u00ac"+
		"\5\35\17\2\u00a6\u00ac\5\37\20\2\u00a7\u00ac\5!\21\2\u00a8\u00ac\5#\22"+
		"\2\u00a9\u00ac\5%\23\2\u00aa\u00ac\5\'\24\2\u00ab\u00a5\3\2\2\2\u00ab"+
		"\u00a6\3\2\2\2\u00ab\u00a7\3\2\2\2\u00ab\u00a8\3\2\2\2\u00ab\u00a9\3\2"+
		"\2\2\u00ab\u00aa\3\2\2\2\u00ac\34\3\2\2\2\u00ad\u00ae\7>\2\2\u00ae\36"+
		"\3\2\2\2\u00af\u00b0\7>\2\2\u00b0\u00b1\7?\2\2\u00b1 \3\2\2\2\u00b2\u00b3"+
		"\7@\2\2\u00b3\"\3\2\2\2\u00b4\u00b5\7@\2\2\u00b5\u00b6\7?\2\2\u00b6$\3"+
		"\2\2\2\u00b7\u00b8\7?\2\2\u00b8\u00b9\7?\2\2\u00b9&\3\2\2\2\u00ba\u00bb"+
		"\7#\2\2\u00bb\u00bc\7?\2\2\u00bc(\3\2\2\2\u00bd\u00be\7?\2\2\u00be*\3"+
		"\2\2\2\u00bf\u00c0\7<\2\2\u00c0,\3\2\2\2\u00c1\u00c2\7=\2\2\u00c2.\3\2"+
		"\2\2\u00c3\u00c4\7-\2\2\u00c4\60\3\2\2\2\u00c5\u00c6\7-\2\2\u00c6\u00c7"+
		"\7?\2\2\u00c7\62\3\2\2\2\u00c8\u00c9\7/\2\2\u00c9\64\3\2\2\2\u00ca\u00cb"+
		"\7/\2\2\u00cb\u00cc\7?\2\2\u00cc\66\3\2\2\2\u00cd\u00ce\7,\2\2\u00ce8"+
		"\3\2\2\2\u00cf\u00d0\7,\2\2\u00d0\u00d1\7?\2\2\u00d1:\3\2\2\2\u00d2\u00d3"+
		"\7\61\2\2\u00d3<\3\2\2\2\u00d4\u00d5\7\61\2\2\u00d5\u00d6\7?\2\2\u00d6"+
		">\3\2\2\2\u00d7\u00d8\7*\2\2\u00d8@\3\2\2\2\u00d9\u00da\7+\2\2\u00daB"+
		"\3\2\2\2\u00db\u00dc\7}\2\2\u00dcD\3\2\2\2\u00dd\u00de\7\177\2\2\u00de"+
		"F\3\2\2\2\u00df\u00e0\7A\2\2\u00e0H\3\2\2\2\u00e1\u00e2\7.\2\2\u00e2J"+
		"\3\2\2\2\u00e3\u00e4\7#\2\2\u00e4L\3\2\2\2\u00e5\u00e6\7`\2\2\u00e6N\3"+
		"\2\2\2\u00e7\u00e8\7`\2\2\u00e8\u00e9\7?\2\2\u00e9P\3\2\2\2\u00ea\u00eb"+
		"\7\u0080\2\2\u00ebR\3\2\2\2\u00ec\u00ed\7\u0080\2\2\u00ed\u00ee\7?\2\2"+
		"\u00eeT\3\2\2\2\u00ef\u00f0\6+\2\2\u00f0\u00f1\7h\2\2\u00f1\u00f2\7q\2"+
		"\2\u00f2\u00f3\7q\2\2\u00f3\u00f4\3\2\2\2\u00f4\u00f5\6+\3\2\u00f5\u00f6"+
		"\b+\2\2\u00f6V\3\2\2\2\u00f7\u00f8\7d\2\2\u00f8\u00f9\7c\2\2\u00f9\u00fa"+
		"\7t\2\2\u00fa\u00fb\3\2\2\2\u00fb\u00fc\6,\4\2\u00fc\u00fd\b,\3\2\u00fd"+
		"X\3\2\2\2\u00fe\u0102\5[.\2\u00ff\u0101\5[.\2\u0100\u00ff\3\2\2\2\u0101"+
		"\u0104\3\2\2\2\u0102\u0100\3\2\2\2\u0102\u0103\3\2\2\2\u0103Z\3\2\2\2"+
		"\u0104\u0102\3\2\2\2\u0105\u0106\t\3\2\2\u0106\\\3\2\2\2\u0107\u010b\7"+
		"%\2\2\u0108\u010a\n\4\2\2\u0109\u0108\3\2\2\2\u010a\u010d\3\2\2\2\u010b"+
		"\u0109\3\2\2\2\u010b\u010c\3\2\2\2\u010c\u010f\3\2\2\2\u010d\u010b\3\2"+
		"\2\2\u010e\u0110\7\17\2\2\u010f\u010e\3\2\2\2\u010f\u0110\3\2\2\2\u0110"+
		"\u0111\3\2\2\2\u0111\u0112\7\f\2\2\u0112\u0113\3\2\2\2\u0113\u0114\b/"+
		"\4\2\u0114^\3\2\2\2\u0115\u0117\t\5\2\2\u0116\u0115\3\2\2\2\u0117\u0118"+
		"\3\2\2\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u011a\3\2\2\2\u011a"+
		"\u011b\b\60\5\2\u011b`\3\2\2\2\u011c\u011d\7D\2\2\u011d\u011e\7c\2\2\u011e"+
		"\u011f\7|\2\2\u011fb\3\2\2\2\f\2\u0093\u0096\u009d\u00a3\u00ab\u0102\u010b"+
		"\u010f\u0118\6\3+\2\3,\3\2\4\2\2e\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}