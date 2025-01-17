grammar Expr;

prog : root;

root: (func_declaration)+		
        | globaldeclaration
        | blankdeclaration
        ;

blankdeclaration: ;

globaldeclaration: (datatype) individualDeclaration? (Comma individualDeclaration)* Semi root;

func_declaration: 'function' datatype VAR_NAME list_args block   # ListFuncDec
		;

list_args: LeftParen (datatype VAR_NAME (Comma datatype VAR_NAME)*)? RightParen;

block: LeftCurly statement* RightCurly;

statement: assignment     # assignStatement
         | declaration 	  # declareStatement
         | ret         	  # returnStatement
		 | expr Semi      # exprStatement         
         | printer        # writeStatement
		 | if_else		  # conditionalStatement
		 | while_loop	  # whileloopStatement
		 | for_loop       # forloopStatement
         | input          # readStatement
         | break_stmnt    # breakStatement
         | cont_stmnt     # continueStatement
         ;

assignment: identifier ASSIGN expr Semi								             # VarAssignment
    | identifier LeftSqr expr RightSqr LeftSqr expr RightSqr ASSIGN expr Semi	 # assign2DArrayExpr
	| identifier LeftSqr expr RightSqr ASSIGN expr Semi                          # assignArrayExpr
	;

printer: 'print' LeftParen ((expr|STRING) (Comma (expr|STRING))*)? RightParen Semi;
input: 'input' LeftParen inputargs RightParen Semi;

inputargs:  identifier                	                                # VarInput
	     |  identifier LeftSqr expr RightSqr LeftSqr expr RightSqr      # Array2DInput
	     |  identifier LeftSqr expr RightSqr                            # ArrayInput
	     ;

break_stmnt: 'break' Semi;
cont_stmnt: 'continue' Semi;

while_loop: 'while' LeftParen condition RightParen blockOrStatement;
for_loop: 'for' LeftParen varassign Semi condition Semi varassign RightParen blockOrStatement;

declaration: (datatype) individualDeclaration? (Comma individualDeclaration)* Semi;

if_else : 'if' LeftParen condition RightParen blockOrStatement else_part?;
else_part: 'else' blockOrStatement; 

blockOrStatement: block|statement;

individualDeclaration: VAR_NAME (ASSIGN expr)?	             # varDeclaration
	| VAR_NAME '['INT_CONST']' array_ref?		             # arrayDeclaration
	| VAR_NAME '['INT_CONST']''['INT_CONST']' array_ref?     # D2arrayDeclaration
	| VAR_NAME '[]' array_ref				                 # arrayAssignment
	| VAR_NAME '[][]' array_ref				                 # D2arrayAssignment
	;

varassign: identifier ASSIGN expr;

condition: LeftParen condition RightParen                                  # ParanCond
    | NOT condition                                                        # NotCond
    | condition AND_OR condition                                           # AndOrCond
    | expr (RELOP|BITWISE_OP|SHIFT_OP|EQOP|AND_OR) expr                    # RelopExpr		
    ;

expr: identifier INC_DEC                                                # postIncDecExpr
	| identifier LeftSqr expr RightSqr LeftSqr expr RightSqr INC_DEC	# postIncDec2DArr
	| INC_DEC identifier LeftSqr expr RightSqr LeftSqr expr RightSqr	# preIncDec2DArr
	| identifier LeftSqr expr RightSqr INC_DEC	                        # postIncDecArr 
	| INC_DEC identifier LeftSqr expr RightSqr                          # preIncDecArr
	| caller identifier params_list                                       # func_call
	| ADDOP expr 	                                                    # PlusMinusExpr
    | INC_DEC identifier                                                # preIncDecExpr
	| expr MODULO expr                                                  # modExpr
	| expr DIV expr                                                     # divExpr
	| expr MULT expr                                                    # multiplyExpr
	| expr ADDOP expr                                                   # addExpr
	| expr EQOP expr                                                    # eqaulExpr
	| expr SHIFT_OP expr                                                # shiftOpExpr	  
	| expr BITWISE_OP expr                                              # bitwiseOpExpr
	| LeftParen expr RightParen	                                        # parenExpr
	| identifier				                                        # varnameExpr
	| INT_CONST				                                            # constIntExpr
	| BOOL = ('true'|'false')										    # boolExpr
	| identifier LeftSqr expr RightSqr                                  # ArrayValExpr
	| identifier LeftSqr expr RightSqr LeftSqr expr RightSqr            # D2ArrayValExpr
	| CHAR                                                              # charExpr
	;

ret: RETURN expr? Semi;

array_ref: ASSIGN LeftCurly (expr(Comma expr)*)? RightCurly;

params_list : LeftParen (expr (Comma expr)*)? RightParen;

datatype: 'int'| 'uint' | 'bool' | 'char'| 'void';
identifier: VAR_NAME;

RETURN : 'return' ;

Comma: ',';
Semi   : ';';
caller : 'callout';

LeftParen        : '(';
RightParen       : ')';
LeftSqr: '[';
RightSqr: ']';
LeftCurly: '{';
RightCurly: '}';

DOUBLEQUOTE   : '"';
NOT : ('!' | '~');
ADDOP : ('+'|'-');
MULT: '*';
MODULO: '%';
DIV: '/';
INC_DEC : ('++' | '--');
AND_OR: ('||' | '&&');
RELOP : ('<='|'<'|'>='|'>');
EQOP : ('=='|'!=');
ASSIGN: '=';
BITWISE_OP : ('&' | '|' | '^');
SHIFT_OP  :  ('>>' | '<<' );

STRING:   DOUBLEQUOTE .*? DOUBLEQUOTE;
INT_CONST : [0-9]+ ;
CHAR : '\'' [a-zA-Z] '\'';
VAR_NAME : [a-z][a-zA-Z0-9_]*;
COMMENT : '/*' .*? '*/' -> skip ;
SINGLECOMMENT : '//' .*? '\n' -> skip ;
NS : [ \t\r\n]+ -> skip ;