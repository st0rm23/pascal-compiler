#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "pascal.y"
	#include <stdio.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include "util.h"
	#include "globals.h"
	#define YYSTYPE TreeNode*

	int totalLine;
	TreeNode * root;
	int hasError;
#line 30 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define AND 257
#define ARRAY 258
#define ASSIGN 259
#define BEGINN 260
#define CASE 261
#define CHAR 262
#define COLON 263
#define COMMA 264
#define CONST 265
#define DIV 266
#define DO 267
#define DOT 268
#define DOTDOT 269
#define DOWNTO 270
#define ELSE 271
#define END 272
#define EQUAL 273
#define FOR 274
#define FUNCTION 275
#define GE 276
#define GOTO 277
#define GT 278
#define ID 279
#define IF 280
#define INTEGER 281
#define LB 282
#define LE 283
#define LP 284
#define LT 285
#define MINUS 286
#define MOD 287
#define MUL 288
#define NOT 289
#define OF 290
#define OR 291
#define PLUS 292
#define PROCEDURE 293
#define PROGRAM 294
#define RB 295
#define READ 296
#define REAL 297
#define RECORD 298
#define REPEAT 299
#define RP 300
#define SEMI 301
#define STRING 302
#define SYS_CON 303
#define SYS_FUNCT 304
#define SYS_PROC 305
#define SYS_TYPE 306
#define THEN 307
#define TO 308
#define TYPE 309
#define UNEQUAL 310
#define UNTIL 311
#define VAR 312
#define WHILE 313
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    1,    2,    5,    3,    6,    7,    7,
   11,   11,   12,   12,   12,   12,   12,    8,    8,   13,
   13,   14,   15,   15,   15,   16,   16,   16,   16,   16,
   16,   16,   17,   18,   20,   20,   21,   19,   19,    9,
    9,   22,   22,   23,   10,   10,   10,   10,   10,   24,
   26,   25,   28,   27,   27,   29,   29,   30,   30,   31,
   32,    4,   33,   34,   34,   35,   35,   36,   36,   36,
   36,   36,   36,   36,   36,   36,   37,   37,   37,   38,
   38,   38,   38,   38,   39,   49,   49,   40,   41,   42,
   50,   50,   43,   51,   51,   52,   52,   44,   47,   47,
   45,   45,   45,   45,   45,   45,   45,   53,   53,   53,
   53,   54,   54,   54,   54,   54,   48,   48,   48,   48,
   48,   48,   48,   48,   48,   48,   46,   46,
};
static const short yylen[] = {                            2,
    3,    3,    3,    3,    2,    2,    5,    0,    2,    0,
    5,    4,    1,    1,    1,    1,    1,    2,    0,    2,
    1,    4,    1,    1,    1,    1,    1,    3,    3,    4,
    5,    3,    6,    3,    2,    1,    4,    3,    1,    2,
    0,    2,    1,    4,    2,    2,    1,    1,    0,    4,
    5,    4,    3,    3,    0,    3,    1,    3,    3,    2,
    1,    1,    3,    3,    0,    3,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    3,    6,    5,    1,
    4,    1,    4,    4,    5,    2,    0,    4,    4,    8,
    1,    1,    5,    2,    1,    4,    4,    2,    3,    1,
    3,    3,    3,    3,    3,    3,    1,    3,    3,    3,
    1,    3,    3,    3,    3,    1,    1,    4,    1,    4,
    1,    3,    2,    2,    4,    3,    3,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    8,    0,    0,    0,    0,    0,    4,    3,
    2,    1,   65,    5,   62,    0,    0,    0,    0,    0,
    0,    0,    0,   63,    0,    0,    0,    0,    0,    0,
   65,    0,    0,   70,    0,   67,   68,   69,   71,   72,
   73,   74,   75,   76,    0,    0,    0,    0,   21,    0,
    0,   15,    0,   13,    0,    0,    0,   14,   16,   17,
    0,  121,    0,  116,    0,    0,    0,   98,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   64,    0,
    0,    0,   20,   39,    0,    0,   43,    0,    0,    0,
   47,   48,    0,    0,    0,    0,    0,    0,  124,  123,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   66,    0,    0,    0,    0,    0,   12,    0,
    0,    0,    0,    0,    0,   26,    0,    0,   23,   24,
   25,    0,    0,   42,    0,    0,   45,   46,    8,    8,
  126,    0,    0,  122,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   95,    0,    0,    0,    0,  115,  113,
  114,  112,    0,    0,    0,    0,   81,    0,   84,    0,
    0,   83,   89,   11,    0,    0,    0,    0,    0,    0,
   36,    0,   22,    0,   38,    0,    0,   53,    0,    0,
    0,  125,  118,  120,    0,    0,   93,   94,   92,   91,
    0,    0,    0,    0,    0,   85,    0,    0,   32,   28,
    0,    0,   34,   35,   29,   44,    0,    0,    0,   57,
    0,    0,    0,    6,   50,   52,    0,    0,    0,    0,
   86,    0,    0,   30,    0,    0,   54,    0,    0,    0,
   51,   97,   96,    0,    0,   31,   37,   56,   58,   59,
   90,   33,
};
static const short yydgoto[] = {                          2,
    3,    6,  199,   14,  200,    8,   17,   22,   51,   90,
   20,   62,   48,   49,  138,  139,  140,  141,   85,  190,
  191,   86,   87,   91,   92,   93,  197,   94,  229,  230,
  231,  232,   34,   18,   35,   36,   37,   38,   39,   40,
   41,   42,   43,   44,  120,  121,  127,   64,  216,  211,
  163,  164,   65,   66,
};
static const short yysindex[] = {                      -271,
 -238,    0,    0, -276, -268, -242, -218, -191,    0,    0,
    0,    0,    0,    0,    0, -234, -227, -250, -150, -154,
 -122, -181,  511,    0, -110,  -95,   46,  511,  -88,  -93,
    0,  -85,  511,    0,  -99,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   -7,  -66,  -59, -122,    0, -101,
 -190,    0,  -49,    0,  511,  511,  511,    0,    0,    0,
  -57,    0,  220,    0,    8, -103,  -30,    0,  511,  -43,
  511,  511,  265,   27,  511, -169,  511,   71,    0,  -67,
   -7, -136,    0,    0,  -91, -101,    0,  -32,  -27, -190,
    0,    0,  -58,  -47,  -23,  511,  511,  307,    0,    0,
  511,  511,  511,  511,  511,  511,  -53,  511,  511,  511,
  511,  511,  511,  511,  511,  511,  197,   -2,  346,  197,
 -249,   12,    0,  -41,  511,  197, -248,   12,    0,  -37,
  -14,    9, -101,   -7, -101,    0,   10,  -24,    0,    0,
    0, -136,  -10,    0,  -13,  -13,    0,    0,    0,    0,
    0,  388, -236,    0, -229,    8,    8,    8,    8,    8,
   17,   18, -123,    0,    8, -103, -103, -103,    0,    0,
    0,    0,  146,  511,   25,  511,    0,   38,    0,  197,
  511,    0,    0,    0,  483,   19, -220,   41,  -52, -155,
    0,   -7,    0,   11,    0, -239,   50,    0, -218,   15,
   30,    0,    0,    0,   12,   12,    0,    0,    0,    0,
  511,  197,  511,  197,   12,    0,  197,   24,    0,    0,
 -243, -136,    0,    0,    0,    0, -101,   56,  -77,    0,
   70,   76,  483,    0,    0,    0,   34,   44,  113,  197,
    0,   58,   -7,    0,   49,   56,    0, -239,  483,  483,
    0,    0,    0,   12, -136,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0, -228,    0,    0,
    0,    0,    0,    0,    0,    0, -192,    0,    0, -203,
    0, -160,    0,    0,    0,    0, -164,    0,    0,    0,
    0, -137,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -161,    0,    0,
   95,    0,  -70,    0,    0,    0,    0,    0,    0,    0,
  -25,    0,    0,    0,  219,   51,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -147,    0,    0,    0,  102,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -133,    0,    0, -206,
    0,    0,    0,    0,    0, -198,    0,    0,    0,    0,
    0,    2,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   90,   64,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  261,  303,  345,  387,  429,
    0,    0,    0,    0,  471,   93,  135,  177,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   66,    0, -130,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -112,    0, -171,    0,    0, -148,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  105,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -106,
    0,    0,    0,    0,    0,  107,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  369,  174,  224,    0,    0,    0,    0,    0,
    0,  -45,    0,  327, -134, -180,    0,    0, -129,    0,
  187,    0,  296,  297,  300,    0,  246,    0,    0,  147,
    0,    0,   -6,  366, -119,  330,    0,    0,    0,    0,
    0,    0,    0,    0,  -21,  -84,    0,  -36,    0,    0,
    0,  244,  699,   72,
};
#define YYTABLESIZE 815
static const short yytable[] = {                         80,
   15,   63,  178,  187,  218,  189,   73,  194,  183,   13,
   23,   78,  153,   11,  176,  181,  155,    4,   52,   99,
  100,   24,    1,   25,    9,   12,   26,  176,   27,   28,
   29,   10,   10,   98,  176,  130,  137,   54,  124,   84,
    5,   13,  243,  143,   19,   30,   10,  117,   31,  119,
  177,  182,  251,   58,   32,  126,    9,  128,   59,   60,
  189,  162,   33,  203,   10,  100,  228,   19,  259,  260,
  204,    9,  227,   16,  152,  169,  170,  171,  172,  220,
   10,   21,   19,   10,   88,  237,  238,  245,  188,    9,
   13,   23,  127,  128,  173,  241,  137,  246,   18,   41,
   19,  100,   89,  180,   25,    9,   80,   26,    9,   27,
   28,   29,   40,   18,   41,   99,  223,  162,  228,   19,
  262,  131,   45,   84,   46,   52,   30,   40,  127,   31,
   50,   18,   41,   82,  261,   32,   80,   77,   52,  137,
   88,  125,  132,   33,   54,   40,  225,  133,  207,  134,
   18,   99,  212,  112,  214,  161,   47,   54,   79,  217,
   58,  135,  113,   82,   78,   59,   60,   77,   67,  136,
   88,  142,  143,   58,   74,  244,  137,   84,   59,   60,
  166,  167,  168,  114,  115,   68,  117,  137,   79,  239,
   75,  240,   15,  117,   78,  117,  117,  256,   77,  117,
  117,   79,  117,  137,  137,  117,   81,  117,   52,  137,
  222,  143,  117,   82,  117,  117,  117,  117,   95,  117,
  117,  117,  247,  248,  117,  161,  101,   54,  116,  117,
  117,  119,   96,  129,   97,  118,  117,  117,  119,  117,
  119,  119,  149,   58,  119,  119,  145,  119,   59,   60,
  119,  146,  119,  150,   52,  151,  174,  119,  179,  119,
  119,  119,  119,  184,  119,  119,  119,  185,  195,  119,
  196,   13,   23,   54,  119,  119,  193,  186,  192,  205,
  206,  119,  119,  213,  119,   25,   13,   23,   26,   58,
   27,   28,   29,  109,   59,   60,   27,  219,  110,  111,
   25,   27,   27,   26,   69,   27,   28,   30,  215,  221,
   31,  226,  233,   70,  111,  235,   32,  111,  242,  143,
  111,  111,   30,  111,   33,   31,  111,   71,  111,   72,
  236,   32,  249,  111,  252,  111,  111,  128,  250,   33,
  111,  111,  111,  102,  253,  111,  103,  255,  104,  257,
  111,  111,   55,  105,   49,  106,  109,  111,  111,  109,
  111,    7,  109,  109,   55,  109,   87,   61,  109,   60,
  109,    7,  234,  201,   83,  109,  224,  109,  109,  254,
  108,  144,  109,  109,  109,  102,  147,  109,  103,  148,
  104,  198,  109,  109,  258,  105,   76,  106,  110,  109,
  109,  110,  109,  123,  110,  110,  208,  110,    0,    0,
  110,    0,  110,    0,    0,  209,    0,  110,  102,  110,
  110,  103,  108,  104,  110,  110,  110,    0,  105,  110,
  106,    0,    0,    0,  110,  110,    0,    0,    0,    0,
  108,  110,  110,  108,  110,    0,  108,  108,    0,  108,
    0,    0,  108,  210,  108,  108,    0,    0,    0,  108,
    0,  108,  108,    0,    0,    0,  108,  108,  108,  102,
    0,  108,  103,    0,  104,    0,  108,  108,    0,  105,
    0,  106,  107,  108,  108,  107,  108,    0,  107,  107,
    0,  107,  102,    0,  107,  103,  107,  104,    0,    0,
    0,  107,  105,  107,  106,    0,  108,    0,  107,  107,
    0,    0,    0,  107,    0,    0,    0,    0,  107,  107,
    0,    0,    0,    0,  105,  107,  107,  105,  107,  108,
  105,  105,    0,  105,    0,    0,  105,  102,  105,    0,
  103,    0,  104,  105,    0,  105,    0,  105,    0,  106,
  105,    0,    0,    0,    0,  105,    0,    0,    0,    0,
  105,  105,    0,    0,    0,    0,  101,  105,  105,  101,
  105,  122,  101,  101,  108,  101,    0,    0,  101,  102,
  101,    0,  103,    0,  104,  101,    0,  101,    0,  105,
    0,  106,  101,    0,    0,    0,    0,  101,    0,    0,
    0,    0,  101,  101,    0,    0,  154,    0,  102,  101,
  101,  102,  101,    0,  102,  102,  108,  102,  102,    0,
  102,  103,  102,  104,    0,    0,    0,  102,  105,  102,
  106,    0,    0,    0,  102,    0,    0,    0,    0,  102,
  175,    0,    0,    0,  102,  102,    0,    0,    0,    0,
  103,  102,  102,  103,  102,  108,  103,  103,    0,  103,
  102,    0,  103,  103,  103,  104,    0,    0,    0,  103,
  105,  103,  106,    0,    0,    0,  103,    0,    0,    0,
    0,  103,  202,    0,    0,    0,  103,  103,    0,    0,
    0,    0,  104,  103,  103,  104,  103,  108,  104,  104,
    0,  104,    0,    0,  104,    0,  104,    0,    0,    0,
    0,  104,    0,  104,    0,    0,    0,    0,  104,    0,
    0,    0,    0,  104,    0,    0,    0,    0,  104,  104,
    0,    0,    0,    0,  106,  104,  104,  106,  104,    0,
  106,  106,    0,  106,   52,    0,  106,    0,  106,    0,
    0,    0,    0,  106,    0,  106,    0,    0,    0,    0,
  106,  132,    0,   54,    0,  106,  133,    0,  134,    0,
  106,  106,   52,    0,    0,    0,    0,  106,  106,   58,
  106,    0,    0,    0,   59,   60,    0,    0,  136,   53,
    0,   54,    0,    0,   55,    0,   56,    0,    0,   57,
  156,  157,  158,  159,  160,    0,  165,   58,    0,    0,
    0,    0,   59,   60,   61,
};
static const short yycheck[] = {                         45,
    7,   23,  122,  133,  185,  135,   28,  142,  128,  260,
  261,   33,   97,  256,  264,  264,  101,  256,  262,   56,
   57,  272,  294,  274,  301,  268,  277,  264,  279,  280,
  281,  260,  301,   55,  264,   81,   82,  281,   75,  279,
  279,  260,  286,  264,  279,  296,  275,   69,  299,   71,
  300,  300,  233,  297,  305,   77,  260,  264,  302,  303,
  190,  107,  313,  300,  293,  264,  196,  260,  249,  250,
  300,  275,  312,  265,   96,  112,  113,  114,  115,  300,
  309,  309,  275,  312,  275,  205,  206,  222,  134,  293,
  260,  261,  264,  300,  116,  215,  142,  227,  260,  260,
  293,  300,  293,  125,  274,  309,  271,  277,  312,  279,
  280,  281,  260,  275,  275,  264,  272,  163,  248,  312,
  255,  258,  273,  279,  279,  262,  296,  275,  300,  299,
  312,  293,  293,  271,  254,  305,  301,  271,  262,  185,
  271,  311,  279,  313,  281,  293,  192,  284,  272,  286,
  312,  300,  174,  257,  176,  279,  279,  281,  271,  181,
  297,  298,  266,  301,  271,  302,  303,  301,  279,  306,
  301,  263,  264,  297,  263,  221,  222,  279,  302,  303,
  109,  110,  111,  287,  288,  281,  257,  233,  301,  211,
  284,  213,  199,  264,  301,  266,  267,  243,  284,  270,
  271,  301,  273,  249,  250,  276,  273,  278,  262,  255,
  263,  264,  283,  273,  285,  286,  287,  288,  268,  290,
  291,  292,  300,  301,  295,  279,  284,  281,  259,  300,
  301,  257,  282,  301,  284,  279,  307,  308,  264,  310,
  266,  267,  301,  297,  270,  271,  279,  273,  302,  303,
  276,  279,  278,  301,  262,  279,  259,  283,  300,  285,
  286,  287,  288,  301,  290,  291,  292,  282,  279,  295,
  284,  260,  261,  281,  300,  301,  301,  269,  269,  263,
  263,  307,  308,  259,  310,  274,  260,  261,  277,  297,
  279,  280,  281,  286,  302,  303,  295,  279,  291,  292,
  274,  300,  301,  277,  259,  279,  280,  296,  271,  269,
  299,  301,  263,  268,  264,  301,  305,  267,  295,  264,
  270,  271,  296,  273,  313,  299,  276,  282,  278,  284,
  301,  305,  263,  283,  301,  285,  286,  267,  263,  313,
  290,  291,  292,  273,  301,  295,  276,  290,  278,  301,
  300,  301,  263,  283,  260,  285,  264,  307,  308,  267,
  310,  260,  270,  271,  301,  273,  301,  263,  276,  263,
  278,    3,  199,  150,   48,  283,  190,  285,  286,  267,
  310,   86,  290,  291,  292,  273,   90,  295,  276,   90,
  278,  146,  300,  301,  248,  283,   31,  285,  264,  307,
  308,  267,  310,   74,  270,  271,  163,  273,   -1,   -1,
  276,   -1,  278,   -1,   -1,  270,   -1,  283,  273,  285,
  286,  276,  310,  278,  290,  291,  292,   -1,  283,  295,
  285,   -1,   -1,   -1,  300,  301,   -1,   -1,   -1,   -1,
  264,  307,  308,  267,  310,   -1,  270,  271,   -1,  273,
   -1,   -1,  276,  308,  278,  310,   -1,   -1,   -1,  283,
   -1,  285,  286,   -1,   -1,   -1,  290,  291,  292,  273,
   -1,  295,  276,   -1,  278,   -1,  300,  301,   -1,  283,
   -1,  285,  264,  307,  308,  267,  310,   -1,  270,  271,
   -1,  273,  273,   -1,  276,  276,  278,  278,   -1,   -1,
   -1,  283,  283,  285,  285,   -1,  310,   -1,  290,  290,
   -1,   -1,   -1,  295,   -1,   -1,   -1,   -1,  300,  301,
   -1,   -1,   -1,   -1,  264,  307,  308,  267,  310,  310,
  270,  271,   -1,  273,   -1,   -1,  276,  273,  278,   -1,
  276,   -1,  278,  283,   -1,  285,   -1,  283,   -1,  285,
  290,   -1,   -1,   -1,   -1,  295,   -1,   -1,   -1,   -1,
  300,  301,   -1,   -1,   -1,   -1,  264,  307,  308,  267,
  310,  307,  270,  271,  310,  273,   -1,   -1,  276,  273,
  278,   -1,  276,   -1,  278,  283,   -1,  285,   -1,  283,
   -1,  285,  290,   -1,   -1,   -1,   -1,  295,   -1,   -1,
   -1,   -1,  300,  301,   -1,   -1,  300,   -1,  264,  307,
  308,  267,  310,   -1,  270,  271,  310,  273,  273,   -1,
  276,  276,  278,  278,   -1,   -1,   -1,  283,  283,  285,
  285,   -1,   -1,   -1,  290,   -1,   -1,   -1,   -1,  295,
  295,   -1,   -1,   -1,  300,  301,   -1,   -1,   -1,   -1,
  264,  307,  308,  267,  310,  310,  270,  271,   -1,  273,
  273,   -1,  276,  276,  278,  278,   -1,   -1,   -1,  283,
  283,  285,  285,   -1,   -1,   -1,  290,   -1,   -1,   -1,
   -1,  295,  295,   -1,   -1,   -1,  300,  301,   -1,   -1,
   -1,   -1,  264,  307,  308,  267,  310,  310,  270,  271,
   -1,  273,   -1,   -1,  276,   -1,  278,   -1,   -1,   -1,
   -1,  283,   -1,  285,   -1,   -1,   -1,   -1,  290,   -1,
   -1,   -1,   -1,  295,   -1,   -1,   -1,   -1,  300,  301,
   -1,   -1,   -1,   -1,  264,  307,  308,  267,  310,   -1,
  270,  271,   -1,  273,  262,   -1,  276,   -1,  278,   -1,
   -1,   -1,   -1,  283,   -1,  285,   -1,   -1,   -1,   -1,
  290,  279,   -1,  281,   -1,  295,  284,   -1,  286,   -1,
  300,  301,  262,   -1,   -1,   -1,   -1,  307,  308,  297,
  310,   -1,   -1,   -1,  302,  303,   -1,   -1,  306,  279,
   -1,  281,   -1,   -1,  284,   -1,  286,   -1,   -1,  289,
  102,  103,  104,  105,  106,   -1,  108,  297,   -1,   -1,
   -1,   -1,  302,  303,  304,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 313
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"AND","ARRAY","ASSIGN","BEGINN",
"CASE","CHAR","COLON","COMMA","CONST","DIV","DO","DOT","DOTDOT","DOWNTO","ELSE",
"END","EQUAL","FOR","FUNCTION","GE","GOTO","GT","ID","IF","INTEGER","LB","LE",
"LP","LT","MINUS","MOD","MUL","NOT","OF","OR","PLUS","PROCEDURE","PROGRAM","RB",
"READ","REAL","RECORD","REPEAT","RP","SEMI","STRING","SYS_CON","SYS_FUNCT",
"SYS_PROC","SYS_TYPE","THEN","TO","TYPE","UNEQUAL","UNTIL","VAR","WHILE",
"illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : program_head routine DOT",
"program : program_head routine error",
"program_head : PROGRAM ID SEMI",
"program_head : PROGRAM error SEMI",
"routine : routine_head routine_body",
"sub_routine : routine_head routine_body",
"routine_head : label_part const_part type_part var_part routine_part",
"label_part :",
"const_part : CONST const_expr_list",
"const_part :",
"const_expr_list : const_expr_list ID EQUAL const_value SEMI",
"const_expr_list : ID EQUAL const_value SEMI",
"const_value : INTEGER",
"const_value : REAL",
"const_value : CHAR",
"const_value : STRING",
"const_value : SYS_CON",
"type_part : TYPE type_decl_list",
"type_part :",
"type_decl_list : type_decl_list type_definition",
"type_decl_list : type_definition",
"type_definition : ID EQUAL type_decl SEMI",
"type_decl : simple_type_decl",
"type_decl : array_type_decl",
"type_decl : record_type_decl",
"simple_type_decl : SYS_TYPE",
"simple_type_decl : ID",
"simple_type_decl : LP name_list RP",
"simple_type_decl : const_value DOTDOT const_value",
"simple_type_decl : MINUS const_value DOTDOT const_value",
"simple_type_decl : MINUS const_value DOTDOT MINUS const_value",
"simple_type_decl : ID DOTDOT ID",
"array_type_decl : ARRAY LB simple_type_decl RB OF type_decl",
"record_type_decl : RECORD field_decl_list END",
"field_decl_list : field_decl_list field_decl",
"field_decl_list : field_decl",
"field_decl : name_list COLON type_decl SEMI",
"name_list : name_list COMMA ID",
"name_list : ID",
"var_part : VAR var_decl_list",
"var_part :",
"var_decl_list : var_decl_list var_decl",
"var_decl_list : var_decl",
"var_decl : name_list COLON type_decl SEMI",
"routine_part : routine_part function_decl",
"routine_part : routine_part procedure_decl",
"routine_part : function_decl",
"routine_part : procedure_decl",
"routine_part :",
"function_decl : function_head SEMI sub_routine SEMI",
"function_head : FUNCTION ID parameters COLON simple_type_decl",
"procedure_decl : procedure_head SEMI sub_routine SEMI",
"procedure_head : PROCEDURE ID parameters",
"parameters : LP para_decl_list RP",
"parameters :",
"para_decl_list : para_decl_list SEMI para_type_list",
"para_decl_list : para_type_list",
"para_type_list : var_para_list COLON simple_type_decl",
"para_type_list : val_para_list COLON simple_type_decl",
"var_para_list : VAR name_list",
"val_para_list : name_list",
"routine_body : compound_stmt",
"compound_stmt : BEGINN stmt_list END",
"stmt_list : stmt_list stmt SEMI",
"stmt_list :",
"stmt : INTEGER COLON non_label_stmt",
"stmt : non_label_stmt",
"non_label_stmt : assign_stmt",
"non_label_stmt : proc_stmt",
"non_label_stmt : compound_stmt",
"non_label_stmt : if_stmt",
"non_label_stmt : repeat_stmt",
"non_label_stmt : while_stmt",
"non_label_stmt : for_stmt",
"non_label_stmt : case_stmt",
"non_label_stmt : goto_stmt",
"assign_stmt : ID ASSIGN expression",
"assign_stmt : ID LB expression RB ASSIGN expression",
"assign_stmt : ID DOT ID ASSIGN expression",
"proc_stmt : ID",
"proc_stmt : ID LP args_list RP",
"proc_stmt : SYS_PROC",
"proc_stmt : SYS_PROC LP expression_list RP",
"proc_stmt : READ LP factor RP",
"if_stmt : IF expression THEN stmt else_clause",
"else_clause : ELSE stmt",
"else_clause :",
"repeat_stmt : REPEAT stmt_list UNTIL expression",
"while_stmt : WHILE expression DO stmt",
"for_stmt : FOR ID ASSIGN expression direction expression DO stmt",
"direction : TO",
"direction : DOWNTO",
"case_stmt : CASE expression OF case_expr_list END",
"case_expr_list : case_expr_list case_expr",
"case_expr_list : case_expr",
"case_expr : const_value COLON stmt SEMI",
"case_expr : ID COLON stmt SEMI",
"goto_stmt : GOTO INTEGER",
"expression_list : expression_list COMMA expression",
"expression_list : expression",
"expression : expression GE expr",
"expression : expression GT expr",
"expression : expression LE expr",
"expression : expression LT expr",
"expression : expression EQUAL expr",
"expression : expression UNEQUAL expr",
"expression : expr",
"expr : expr PLUS term",
"expr : expr MINUS term",
"expr : expr OR term",
"expr : term",
"term : term MUL factor",
"term : term DIV factor",
"term : term MOD factor",
"term : term AND factor",
"term : factor",
"factor : ID",
"factor : ID LP args_list RP",
"factor : SYS_FUNCT",
"factor : SYS_FUNCT LP args_list RP",
"factor : const_value",
"factor : LP expression RP",
"factor : NOT factor",
"factor : MINUS factor",
"factor : ID LB expression RB",
"factor : ID DOT ID",
"args_list : args_list COMMA expression",
"args_list : expression",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 864 "pascal.y"
int yyerror(char *a){
	fprintf(stderr, "line %d: error in '%s'\n", lineno, a);
	hasError = 1;
	return 0;
}

#line 623 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 74 "pascal.y"
	{
			yyval = newTreeNode(program);
			appendChild(yyval, yystack.l_mark[-2]);
			appendChild(yyval, yystack.l_mark[-1]);			
			appendChild(yyval, yystack.l_mark[0]);

			if (!hasError) hasError = 0;
			root = yyval;
			totalLine = lineno;
		}
break;
case 2:
#line 84 "pascal.y"
	{
			yyerror("missing the <DOT> of the end of program");
		}
break;
case 3:
#line 89 "pascal.y"
	{
				yyval = newTreeNode(program_head);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);			
				appendChild(yyval, yystack.l_mark[0]);
				}
break;
case 4:
#line 95 "pascal.y"
	{
			 	yyerror("<RPOGRAM NAME>");
			 }
break;
case 5:
#line 100 "pascal.y"
	{
			yyval = newTreeNode(routine);
			appendChild(yyval, yystack.l_mark[-1]);
			appendChild(yyval, yystack.l_mark[0]);
		}
break;
case 6:
#line 107 "pascal.y"
	{
				yyval = newTreeNode(sub_routine);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);		
			}
break;
case 7:
#line 114 "pascal.y"
	{
				 yyval = newTreeNode(routine_head);
				 appendChild(yyval, yystack.l_mark[-4]);
				 appendChild(yyval, yystack.l_mark[-3]);			
				 appendChild(yyval, yystack.l_mark[-2]);			
				 appendChild(yyval, yystack.l_mark[-1]);			
				 appendChild(yyval, yystack.l_mark[0]);
			 }
break;
case 8:
#line 124 "pascal.y"
	{
		   		yyval = newTreeNode(label_part);
           }
break;
case 9:
#line 129 "pascal.y"
	{
			   yyval = newTreeNode(const_part);
			   appendChild(yyval, yystack.l_mark[-1]);
		   }
break;
case 10:
#line 133 "pascal.y"
	{
           		yyval = newTreeNode(const_part);
		   }
break;
case 11:
#line 138 "pascal.y"
	{
					 yyval = newTreeNode(const_expr_list);
					 appendChild(yyval, yystack.l_mark[-4]);
					 appendChild(yyval, yystack.l_mark[-3]);			
					 appendChild(yyval, yystack.l_mark[-2]);			
					 appendChild(yyval, yystack.l_mark[-1]);			
					 appendChild(yyval, yystack.l_mark[0]);
				}
break;
case 12:
#line 146 "pascal.y"
	{
					 yyval = newTreeNode(const_expr_list);
					 appendChild(yyval, yystack.l_mark[-3]);
					 appendChild(yyval, yystack.l_mark[-2]);			
					 appendChild(yyval, yystack.l_mark[-1]);			
					 appendChild(yyval, yystack.l_mark[0]);
				}
break;
case 13:
#line 155 "pascal.y"
	{
				 yyval = newTreeNode(const_value);
				 appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 14:
#line 159 "pascal.y"
	{
				yyval = newTreeNode(const_value);
				appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 15:
#line 163 "pascal.y"
	{
				 yyval = newTreeNode(const_value);
				 appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 16:
#line 167 "pascal.y"
	{
				 yyval = newTreeNode(const_value);
				 appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 17:
#line 171 "pascal.y"
	{
				 yyval = newTreeNode(const_value);
				 appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 18:
#line 177 "pascal.y"
	{
				 yyval = newTreeNode(type_part);
				 appendChild(yyval, yystack.l_mark[-1]);	
				 appendChild(yyval, yystack.l_mark[0]);			
		  }
break;
case 19:
#line 182 "pascal.y"
	{	 
				 yyval = newTreeNode(type_part);	
		  }
break;
case 20:
#line 187 "pascal.y"
	{
	 		     yyval = newTreeNode(type_decl_list);
				 appendChild(yyval, yystack.l_mark[-1]);	
				 appendChild(yyval, yystack.l_mark[0]);			
		  	   }
break;
case 21:
#line 192 "pascal.y"
	{
	 		     yyval = newTreeNode(type_decl_list);
				 appendChild(yyval, yystack.l_mark[0]);			
				}
break;
case 22:
#line 198 "pascal.y"
	{
	 			 yyval = newTreeNode(type_definition);
				 appendChild(yyval, yystack.l_mark[-3]);	
				 appendChild(yyval, yystack.l_mark[-2]);	
				 appendChild(yyval, yystack.l_mark[-1]);	
				 appendChild(yyval, yystack.l_mark[0]);			
		        }
break;
case 23:
#line 207 "pascal.y"
	{
	 			yyval = newTreeNode(type_decl);
			 	appendChild(yyval, yystack.l_mark[0]);	
		  }
break;
case 24:
#line 211 "pascal.y"
	{
				 yyval = newTreeNode(type_decl);
				 appendChild(yyval, yystack.l_mark[0]);				
		  }
break;
case 25:
#line 215 "pascal.y"
	{
				 yyval = newTreeNode(type_decl);
				 appendChild(yyval, yystack.l_mark[0]);	
		  }
break;
case 26:
#line 221 "pascal.y"
	{
				 	yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[0]);
				 }
break;
case 27:
#line 225 "pascal.y"
	{
					yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[0]);					
				 }
break;
case 28:
#line 229 "pascal.y"
	{
					yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
				 }
break;
case 29:
#line 235 "pascal.y"
	{
					yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);				
				 }
break;
case 30:
#line 241 "pascal.y"
	{
					yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[-3]);	
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);					
				 }
break;
case 31:
#line 248 "pascal.y"
	{
                   	yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[-4]);	
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);			
				 }
break;
case 32:
#line 256 "pascal.y"
	{
				  	yyval = newTreeNode(simple_type_decl);
				 	appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);					
				 }
break;
case 33:
#line 263 "pascal.y"
	{
					yyval = newTreeNode(array_type_decl);
				 	appendChild(yyval, yystack.l_mark[-5]);	
					appendChild(yyval, yystack.l_mark[-4]);	
					appendChild(yyval, yystack.l_mark[-3]);		
					appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);		
					appendChild(yyval, yystack.l_mark[0]);					
				}
break;
case 34:
#line 274 "pascal.y"
	{
				 	yyval = newTreeNode(record_type_decl);
				 	appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);		
				 }
break;
case 35:
#line 282 "pascal.y"
	{
					yyval = newTreeNode(field_decl_list);
				 	appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);					
				}
break;
case 36:
#line 287 "pascal.y"
	{
					yyval = newTreeNode(field_decl_list);
				 	appendChild(yyval, yystack.l_mark[0]);	
				}
break;
case 37:
#line 293 "pascal.y"
	{
	 			yyval = newTreeNode(field_decl);
			 	appendChild(yyval, yystack.l_mark[-3]);	
				appendChild(yyval, yystack.l_mark[-2]);	
				appendChild(yyval, yystack.l_mark[-1]);		
				appendChild(yyval, yystack.l_mark[0]);	
		   }
break;
case 38:
#line 302 "pascal.y"
	{
			yyval = newTreeNode(name_list);
		 	appendChild(yyval, yystack.l_mark[-2]);	
			appendChild(yyval, yystack.l_mark[-1]);	
			appendChild(yyval, yystack.l_mark[0]);
          }
break;
case 39:
#line 308 "pascal.y"
	{
			yyval = newTreeNode(name_list);
		 	appendChild(yyval, yystack.l_mark[0]);		
		  }
break;
case 40:
#line 314 "pascal.y"
	{
			yyval = newTreeNode(var_part);
		 	appendChild(yyval, yystack.l_mark[-1]);	
			appendChild(yyval, yystack.l_mark[0]);		
		 }
break;
case 41:
#line 319 "pascal.y"
	{
			yyval = newTreeNode(var_part);
		 }
break;
case 42:
#line 323 "pascal.y"
	{
				  yyval = newTreeNode(var_decl_list);
		 	      appendChild(yyval, yystack.l_mark[-1]);	
				  appendChild(yyval, yystack.l_mark[0]);	
			  }
break;
case 43:
#line 328 "pascal.y"
	{
					yyval = newTreeNode(var_decl_list);
		 			appendChild(yyval, yystack.l_mark[0]);
			  }
break;
case 44:
#line 333 "pascal.y"
	{
		 	yyval = newTreeNode(var_decl);
		 	appendChild(yyval, yystack.l_mark[-3]);	
			appendChild(yyval, yystack.l_mark[-2]);	
			appendChild(yyval, yystack.l_mark[-1]);	
			appendChild(yyval, yystack.l_mark[0]);
		 }
break;
case 45:
#line 342 "pascal.y"
	{
			 		yyval = newTreeNode(routine_part);
		 			appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);
				}
break;
case 46:
#line 347 "pascal.y"
	{
			 		yyval = newTreeNode(routine_part);
		 			appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);
			 }
break;
case 47:
#line 352 "pascal.y"
	{
			 		yyval = newTreeNode(routine_part);
		 			appendChild(yyval, yystack.l_mark[0]);	
			 }
break;
case 48:
#line 356 "pascal.y"
	{
			 		yyval = newTreeNode(routine_part);
		 			appendChild(yyval, yystack.l_mark[0]);	
			 }
break;
case 49:
#line 360 "pascal.y"
	{
			 		yyval = newTreeNode(routine_part);
		     }
break;
case 50:
#line 365 "pascal.y"
	{
			  		yyval = newTreeNode(function_decl);
		 			appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);		
			  }
break;
case 51:
#line 374 "pascal.y"
	{
			  		yyval = newTreeNode(function_head);
		 			appendChild(yyval, yystack.l_mark[-4]);
					appendChild(yyval, yystack.l_mark[-3]);	
					appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);	
			  }
break;
case 52:
#line 384 "pascal.y"
	{
			   		yyval = newTreeNode(procedure_decl);
		 			appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);	
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);	
			   }
break;
case 53:
#line 393 "pascal.y"
	{
					yyval = newTreeNode(procedure_head);
		 			appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);	
			   }
break;
case 54:
#line 401 "pascal.y"
	{
				yyval = newTreeNode(parameters);
	 			appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);	
				appendChild(yyval, yystack.l_mark[0]);	
		   }
break;
case 55:
#line 407 "pascal.y"
	{
				yyval = newTreeNode(parameters);
		   }
break;
case 56:
#line 412 "pascal.y"
	{
					yyval = newTreeNode(para_decl_list);
		 			appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);	
			   }
break;
case 57:
#line 418 "pascal.y"
	{
					yyval = newTreeNode(para_decl_list);
		 			appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 58:
#line 424 "pascal.y"
	{
					yyval = newTreeNode(para_type_list);
		 			appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);				
			   }
break;
case 59:
#line 430 "pascal.y"
	{
					yyval = newTreeNode(para_type_list);
		 			appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);				
			   }
break;
case 60:
#line 438 "pascal.y"
	{
					yyval = newTreeNode(var_para_list);
		 			appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);	
   			  }
break;
case 61:
#line 445 "pascal.y"
	{
					yyval = newTreeNode(val_para_list);
		 			appendChild(yyval, yystack.l_mark[0]);
			  }
break;
case 62:
#line 451 "pascal.y"
	{
					yyval = newTreeNode(routine_body);
		 			appendChild(yyval, yystack.l_mark[0]);   		
			 }
break;
case 63:
#line 457 "pascal.y"
	{
					yyval = newTreeNode(compound_stmt);
		 			appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);	
					appendChild(yyval, yystack.l_mark[0]);
			  }
break;
case 64:
#line 465 "pascal.y"
	{
			yyval = newTreeNode(stmt_list);
 			appendChild(yyval, yystack.l_mark[-2]);
			appendChild(yyval, yystack.l_mark[-1]);	
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 65:
#line 471 "pascal.y"
	{
			yyval = newTreeNode(stmt_list);
		  }
break;
case 66:
#line 476 "pascal.y"
	{
		yyval = newTreeNode(stmt);
		appendChild(yyval, yystack.l_mark[-2]);
		appendChild(yyval, yystack.l_mark[-1]);	
		appendChild(yyval, yystack.l_mark[0]);
     }
break;
case 67:
#line 482 "pascal.y"
	{
		yyval = newTreeNode(stmt);
		appendChild(yyval, yystack.l_mark[0]);
     }
break;
case 68:
#line 488 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 69:
#line 492 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 70:
#line 496 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 71:
#line 500 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 72:
#line 504 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 73:
#line 508 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 74:
#line 512 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
   			   }
break;
case 75:
#line 516 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 76:
#line 520 "pascal.y"
	{
					yyval = newTreeNode(non_label_stmt);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 77:
#line 526 "pascal.y"
	{
					yyval = newTreeNode(assign_stmt);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 78:
#line 532 "pascal.y"
	{
					yyval = newTreeNode(assign_stmt);
					appendChild(yyval, yystack.l_mark[-5]);
					appendChild(yyval, yystack.l_mark[-4]);
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 79:
#line 541 "pascal.y"
	{
					yyval = newTreeNode(assign_stmt);
					appendChild(yyval, yystack.l_mark[-4]);
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 80:
#line 551 "pascal.y"
	{
				yyval = newTreeNode(proc_stmt);
				appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 81:
#line 555 "pascal.y"
	{
				yyval = newTreeNode(proc_stmt);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 82:
#line 562 "pascal.y"
	{
				yyval = newTreeNode(proc_stmt);
				appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 83:
#line 566 "pascal.y"
	{
				yyval = newTreeNode(proc_stmt);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 84:
#line 573 "pascal.y"
	{
				yyval = newTreeNode(proc_stmt);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 85:
#line 582 "pascal.y"
	{
				yyval = newTreeNode(if_stmt);
				appendChild(yyval, yystack.l_mark[-4]);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		}
break;
case 86:
#line 592 "pascal.y"
	{
				yyval = newTreeNode(else_clause);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 87:
#line 597 "pascal.y"
	{
				yyval = newTreeNode(else_clause);
			}
break;
case 88:
#line 602 "pascal.y"
	{
				yyval = newTreeNode(repeat_stmt);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
			}
break;
case 89:
#line 611 "pascal.y"
	{
				yyval = newTreeNode(while_stmt);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 90:
#line 620 "pascal.y"
	{
				yyval = newTreeNode(for_stmt);
				appendChild(yyval, yystack.l_mark[-7]);
				appendChild(yyval, yystack.l_mark[-6]);
				appendChild(yyval, yystack.l_mark[-5]);
				appendChild(yyval, yystack.l_mark[-4]);
				appendChild(yyval, yystack.l_mark[-3]);
				appendChild(yyval, yystack.l_mark[-2]);
				appendChild(yyval, yystack.l_mark[-1]);
				appendChild(yyval, yystack.l_mark[0]);
		 }
break;
case 91:
#line 633 "pascal.y"
	{
			yyval = newTreeNode(direction);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 92:
#line 637 "pascal.y"
	{
			yyval = newTreeNode(direction);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 93:
#line 643 "pascal.y"
	{
			yyval = newTreeNode(case_stmt);
			appendChild(yyval, yystack.l_mark[-4]);
			appendChild(yyval, yystack.l_mark[-3]);
			appendChild(yyval, yystack.l_mark[-2]);
			appendChild(yyval, yystack.l_mark[-1]);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 94:
#line 653 "pascal.y"
	{
					yyval = newTreeNode(case_expr_list);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 95:
#line 658 "pascal.y"
	{
					yyval = newTreeNode(case_expr_list);
					appendChild(yyval, yystack.l_mark[0]);
			   }
break;
case 96:
#line 663 "pascal.y"
	{
			yyval = newTreeNode(case_expr);
			appendChild(yyval, yystack.l_mark[-3]);
			appendChild(yyval, yystack.l_mark[-2]);
			appendChild(yyval, yystack.l_mark[-1]);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 97:
#line 670 "pascal.y"
	{
			yyval = newTreeNode(case_expr);
			appendChild(yyval, yystack.l_mark[-3]);
			appendChild(yyval, yystack.l_mark[-2]);
			appendChild(yyval, yystack.l_mark[-1]);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 98:
#line 679 "pascal.y"
	{
			yyval = newTreeNode(goto_stmt);
			appendChild(yyval, yystack.l_mark[-1]);
			appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 99:
#line 686 "pascal.y"
	{
					yyval = newTreeNode(expression_list);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
			    }
break;
case 100:
#line 692 "pascal.y"
	{
					yyval = newTreeNode(expression_list);
					appendChild(yyval, yystack.l_mark[0]);
				}
break;
case 101:
#line 698 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 102:
#line 704 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 103:
#line 710 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 104:
#line 716 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 105:
#line 722 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 106:
#line 728 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 107:
#line 734 "pascal.y"
	{
					yyval = newTreeNode(expression);
					appendChild(yyval, yystack.l_mark[0]);
		   }
break;
case 108:
#line 740 "pascal.y"
	{
					yyval = newTreeNode(expr);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
     }
break;
case 109:
#line 746 "pascal.y"
	{
					yyval = newTreeNode(expr);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 110:
#line 752 "pascal.y"
	{
					yyval = newTreeNode(expr);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 111:
#line 758 "pascal.y"
	{
					yyval = newTreeNode(expr);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 112:
#line 764 "pascal.y"
	{
					yyval = newTreeNode(term);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 113:
#line 770 "pascal.y"
	{
					yyval = newTreeNode(term);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 114:
#line 776 "pascal.y"
	{
					yyval = newTreeNode(term);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 115:
#line 782 "pascal.y"
	{
					yyval = newTreeNode(term);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 116:
#line 788 "pascal.y"
	{
					yyval = newTreeNode(term);
					appendChild(yyval, yystack.l_mark[0]);
	 }
break;
case 117:
#line 794 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 118:
#line 798 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
				    appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 119:
#line 805 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[0]);
       }
break;
case 120:
#line 809 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 121:
#line 816 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 122:
#line 820 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 123:
#line 826 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 124:
#line 831 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 125:
#line 836 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-3]);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 126:
#line 843 "pascal.y"
	{
					yyval = newTreeNode(factor);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
	   }
break;
case 127:
#line 851 "pascal.y"
	{
					yyval = newTreeNode(args_list);
					appendChild(yyval, yystack.l_mark[-2]);
					appendChild(yyval, yystack.l_mark[-1]);
					appendChild(yyval, yystack.l_mark[0]);
		  }
break;
case 128:
#line 857 "pascal.y"
	{
					yyval = newTreeNode(args_list);
					appendChild(yyval, yystack.l_mark[0]);
		  }
break;
#line 1892 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
