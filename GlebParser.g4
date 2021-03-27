parser grammar GlebParser;

options {
	tokenVocab = GlebLexer;
}

// These are all supported parser sections:

// Parser file header. Appears at the top in all parser related files. Use e.g. for copyrights.
@parser::header {/*Author : Tsimofei Kinevich, group : 821703*/}

// Follows directly after the standard #includes in h + cpp files.
@parser::postinclude {
/* parser postinclude section */
#ifndef _WIN32
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif
}

@parser::members {
/* public parser declarations/members section */
bool myAction() { return true; }
bool doesItBlend() { return true; }
void cleanUp() {}
void doInit() {}
void doAfter() {}
}


// Actual grammar start.
main: ((math | expr) Newline?)*;
summOperation: ID Assign (ID|INT|FLT|operation) Plus (ID|INT|FLT|operation) | ID PlusAss (ID|INT|FLT|operation);
summ: OpenPar (ID|INT|FLT|operation) Plus (ID|INT|FLT|operation) ClosePar;
diffOperation: ID Assign (ID|INT|FLT|operation) Minus (ID|INT|FLT|operation) | ID MinusAss (ID|INT|FLT|operation);
diff: OpenPar (ID|INT|FLT|operation) Minus (ID|INT|FLT|operation) ClosePar;
multOperation: ID Assign (ID|INT|FLT|operation) Star (ID|INT|FLT|operation) | ID StarAss (ID|INT|FLT|operation);
mult: OpenPar (ID|INT|FLT|operation) Star (ID|INT|FLT|operation) ClosePar;
divOperation: ID Assign (ID|INT|FLT|operation) Devide (ID|INT|FLT|operation) | ID DevideAss (ID|INT|FLT|operation);
div: OpenPar (ID|INT|FLT|div) Devide (ID|INT|FLT|div) ClosePar;
inPowOperation: ID Assign (ID|INT|FLT|operation) Pow (ID|INT|FLT|operation) | ID PowAss (ID|INT|FLT|operation);
inPow: OpenPar (ID|INT|FLT|operation) Pow (ID|INT|FLT|operation) ClosePar;
inSqrt: ID Assign Sqrt (ID|INT|FLT|operation);
operation: summ | diff | mult | div | inPow | inSqrt;
math: summOperation | diffOperation | multOperation | divOperation | inPowOperation | inSqrt | create | ass;
create: (Integer|Float) ID Assign (INT|FLT);
ass: ID Assign (ID|INT|FLT|operation);
expr: forCycle | ifExpr | block;
forCycle: For OpenPar ID Comma ID (CompareOperator) (FLT | INT | ID) Comma (FLT | INT) ClosePar FigureOpen ((math | expr)Newline)* FigureClose;
ifExpr: IF OpenPar (ID|INT|FLT) CompareOperator (ID|INT|FLT) ClosePar FigureOpen ((math | expr)Newline?)* FigureClose;
block: FigureOpen ((math | expr)Newline?)* FigureClose;

