%{
	#include <stdio.h>
	#include "globals.h"
	#include "util.h"
	#include "y.tab.h"
	int lineno = 1;
%}
AND [Aa][Nn][Dd]
ARRAY [Aa][Rr][Rr][Aa][Yy]
ASSIGN ":="
BEGINN [Bb][Ee][Gg][Ii][Nn]
CASE [Cc][Aa][Ss][Ee]
CHAR '[^']'
COLON ":"
COMMA ","
CONST [Cc][Oo][Nn][Ss][Tt]
DIV [Dd][Ii][Vv]
DO [Dd][Oo]
DOT "."
DOTDOT ".."
DOWNTO [Dd][Oo][Ww][Nn][Tt][Oo]
ELSE [Ee][Ll][Ss][Ee]
END [Ee][Nn][Dd]
EQUAL "="
FOR [Ff][Oo][Rr]
FUNCTION [Ff][Uu][Nn][Cc][Tt][Ii][Oo][Nn]
GE ">="
GOTO [Gg][Oo][Tt][Oo]
GT ">"
ID [a-zA-Z]([a-zA-Z0-9])+
IF [Ii][Ff]
INTEGER [0-9]+
LB "["
LE "<="
LP "("
LT "<"
MINUS "-"
MOD [Mm][Oo][Dd]
MUL "*"
NOT [Nn][Oo][Tt]
OF [Oo][Ff]
OR [Oo][Rr]
PLUS "+"
PROCEDURE [Pp][Rr][Oo][Cc][Ee][Dd][Uu][Rr][Ee]
PROGRAM [Pp][Rr][Oo][Gg][Rr][Aa][Mm]
RB "]"
READ "read"
REAL [0-9]+"."[0-9]+
RECORD [Rr][Ee][Cc][Oo][Rr][Dd]
REPEAT [Rr][Ee][Pp][Ee][Aa][Tt]
RP ")"
SEMI ";"
STRING '[^']+'
SYS_CON "false"|"maxint"|"true"
SYS_FUNCT "abs"|"chr"|"odd"|"ord"|"pred"|"sqr"|"sqrt"|"succ"
SYS_PROC "write"|"writeln"
SYS_TYPE "boolean"|"char"|"integer"|"real"
THEN [Tt][Hh][Ee][Nn]
TO [Tt][Oo]
TYPE [Tt][Yy][Pp][Ee]
UNEQUAL "<>"
UNTIL [Uu][Nn][Tt][Ii][Ll]
VAR [Vv][Aa][Rr]
WHILE [Ww][Hh][Ii][Ll][Ee]

%%
{AND} {yylval = newTokenTreeNode(TOKEN_AND, yytext); return (AND);}
{ARRAY} {yylval = newTokenTreeNode(TOKEN_ARRAY, yytext);return (ARRAY);}
{ASSIGN} {yylval = newTokenTreeNode(TOKEN_ASSIGN, yytext);return (ASSIGN);}
{BEGINN} {yylval = newTokenTreeNode(TOKEN_BEGIN, yytext);return (BEGINN);}
{CASE} {yylval = newTokenTreeNode(TOKEN_CASE, yytext);return (CASE);}
{CHAR} {yylval = newTokenTreeNode(TOKEN_CHAR, yytext);return (CHAR);}
{COLON} {yylval = newTokenTreeNode(TOKEN_COLON, yytext);return (COLON);}
{COMMA} {yylval = newTokenTreeNode(TOKEN_COMMA, yytext);return (COMMA);}
{CONST} {yylval = newTokenTreeNode(TOKEN_CONST, yytext);return (CONST);}
{DIV} {yylval = newTokenTreeNode(TOKEN_DIV, yytext);return (DIV);}
{DO} {yylval = newTokenTreeNode(TOKEN_DO, yytext);return (DO);}
{DOT} {yylval = newTokenTreeNode(TOKEN_DOT, yytext);return (DOT);}
{DOTDOT} {yylval = newTokenTreeNode(TOKEN_DOTDOT, yytext);return (DOTDOT);}
{DOWNTO} {yylval = newTokenTreeNode(TOKEN_DOWNTO, yytext);return (DOWNTO);}
{ELSE} {yylval = newTokenTreeNode(TOKEN_ELSE, yytext);return (ELSE);}
{END} {yylval = newTokenTreeNode(TOKEN_END, yytext);return (END);}
{EQUAL} {yylval = newTokenTreeNode(TOKEN_EQUAL, yytext);return (EQUAL);}
{FOR} {yylval = newTokenTreeNode(TOKEN_FOR, yytext);return (FOR);}
{FUNCTION} {yylval = newTokenTreeNode(TOKEN_FUNCTION, yytext);return (FUNCTION);}
{GE} {yylval = newTokenTreeNode(TOKEN_GE, yytext);return (GE);}
{GOTO} {yylval = newTokenTreeNode(TOKEN_GOTO, yytext);return (GOTO);}
{GT} {yylval = newTokenTreeNode(TOKEN_GT, yytext);return (GT);}
{IF} {yylval = newTokenTreeNode(TOKEN_IF, yytext);return (IF);}
{INTEGER} {yylval = newTokenTreeNode(TOKEN_INTEGER, yytext);return (INTEGER);}
{LB} {yylval = newTokenTreeNode(TOKEN_LB, yytext);return (LB);}
{LE} {yylval = newTokenTreeNode(TOKEN_LE, yytext);return (LE);}
{LP} {yylval = newTokenTreeNode(TOKEN_LP, yytext);return (LP);}
{LT} {yylval = newTokenTreeNode(TOKEN_LT, yytext);return (LT);}
{MINUS} {yylval = newTokenTreeNode(TOKEN_MINUS, yytext);return (MINUS);}
{MOD} {yylval = newTokenTreeNode(TOKEN_MOD, yytext);return (MOD);}
{MUL} {yylval = newTokenTreeNode(TOKEN_MUL, yytext);return (MUL);}
{NOT} {yylval = newTokenTreeNode(TOKEN_NOT, yytext);return (NOT);}
{OF} {yylval = newTokenTreeNode(TOKEN_OF, yytext);return (OF);}
{OR} {yylval = newTokenTreeNode(TOKEN_OR, yytext);return (OR);}
{PLUS} {yylval = newTokenTreeNode(TOKEN_PLUS, yytext);return (PLUS);}
{PROCEDURE} {yylval = newTokenTreeNode(TOKEN_PROCEDURE, yytext);return (PROCEDURE);}
{PROGRAM} {yylval = newTokenTreeNode(TOKEN_PROGRAM, yytext);return (PROGRAM);}
{RB} {yylval = newTokenTreeNode(TOKEN_RB, yytext);return (RB);}
{READ} {yylval = newTokenTreeNode(TOKEN_READ, yytext);return (READ);}
{REAL} {yylval = newTokenTreeNode(TOKEN_REAL, yytext);return (REAL);}
{RECORD} {yylval = newTokenTreeNode(TOKEN_RECORD, yytext);return (RECORD);}
{REPEAT} {yylval = newTokenTreeNode(TOKEN_REPEAT, yytext);return (REPEAT);}
{RP} {yylval = newTokenTreeNode(TOKEN_RP, yytext);return (RP);}
{SEMI} {yylval = newTokenTreeNode(TOKEN_SEMI, yytext);return (SEMI);}
{STRING} {yylval = newTokenTreeNode(TOKEN_STRING, yytext);return (STRING);}
{SYS_CON} {yylval = newTokenTreeNode(TOKEN_SYS_CON, yytext);return (SYS_CON);}
{SYS_FUNCT} {yylval = newTokenTreeNode(TOKEN_SYS_FUNCT, yytext);return (SYS_FUNCT);}
{SYS_PROC} {yylval = newTokenTreeNode(TOKEN_SYS_PROC, yytext);return (SYS_PROC);}
{SYS_TYPE} {yylval = newTokenTreeNode(TOKEN_SYS_TYPE, yytext);return (SYS_TYPE);}
{THEN} {yylval = newTokenTreeNode(TOKEN_THEN, yytext);return (THEN);}
{TO} {yylval = newTokenTreeNode(TOKEN_TO, yytext);return (TO);}
{TYPE} {yylval = newTokenTreeNode(TOKEN_TYPE, yytext);return (TYPE);}
{UNEQUAL} {yylval = newTokenTreeNode(TOKEN_UNEQUAL, yytext);return (UNEQUAL);}
{UNTIL} {yylval = newTokenTreeNode(TOKEN_UNTIL, yytext);return (UNTIL);}
{VAR} {yylval = newTokenTreeNode(TOKEN_VAR, yytext);return (VAR);}
{WHILE} {yylval = newTokenTreeNode(TOKEN_WHILE, yytext);return (WHILE);}
{ID} {yylval = newTokenTreeNode(TOKEN_ID, yytext);return (ID);}

"(*"|"{" {
	int flag = 0;
	while (1){
		char ch = input();
		if (ch == EOF) commentEOF();
		if (yytext[0] == '(' && ch == '*') flag = 1;
		if (yytext[0] == '(' && ch == ')' && flag == 1) break;
		flag = 0;
		if (yytext[0] == '{' && ch == '}') break;
		if (ch == '\n') lineno++;
	}
}

[ \t\f]+ {};

\n {lineno++;};

. {
	fprintf(stderr, "%c (0%o): illegal character at line %d\n", yytext[0], yytext[0], lineno);
}

%%
commentEOF(){
	fprintf(stderr, "unexpected EOF inside comment at line %d\n", lineno);
	exit(1);
}

yywrap(){
	return (1);
}
