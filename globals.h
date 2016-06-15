#ifndef _GLOBAL_H_
#define _GLOBAL_H_

#include <string.h>
#include <stdio.h>
typedef enum{
N_ROUTINE,
N_ROUTINE_HEAD,
N_STMT_LIST,
N_LABEL_PART,
N_CONST_PART,
N_CONST_PART_EXP,
N_TYPE_PART,
N_TYPE_DEFINITION,
N_VAR_PART,
N_ROUTINE_PART,
N_SIMPLE_TYPE_DECL,
N_ARRAY_TYPE_DECL,
N_RECORD_TYPE_DECL,
N_NAME_LIST,
N_FIELD_DECL,
N_VAR_DECL,
N_FUNCTION_DECL,
N_PROCEDURE_DECL,
N_FUNCTION_HEAD,
N_PARAMETERS,
N_PARA_TYPE,
N_PROCEDURE_HEAD,
N_STMT,
N_ASSIGN_STMT,
N_PROC_STMT,
N_COMPOUND_STMT,
N_IF_STMT,
N_REPEAT_STMT,
N_WHILE_STMT,
N_FOR_STMT,
N_CASE_STMT,
N_GOTO_STMT,
N_ARGS_LIST,
N_FACTOR,
N_CASE_EXPR_LIST,
N_CASE_EXPR,
N_EXPRESSION_LIST,
N_EXPRESSION,
N_EXP_GE,
N_EXP_GT,
N_EXP_LE,
N_EXP_LT,
N_EXP_EQUAL,
N_EXP_UNEQUAL,
N_EXP_PLUS,
N_EXP_MINUS,
N_EXP_OR,
N_EXP_MUL,
N_EXP_DIV,
N_EXP_MOD,
N_EXP_AND,


N_AND,
N_ARRAY,
N_ASSIGN,
N_BEGIN,
N_CASE,
N_CHAR,
N_COLON,
N_COMMA,
N_CONST,
N_DIV,
N_DO,
N_DOT,
N_DOTDOT,
N_DOWNTO,
N_ELSE,
N_END,
N_EQUAL,
N_FOR,
N_FUNCTION,
N_GE,
N_GOTO,
N_GT, 
N_ID,
N_IF,
N_INTEGER,
N_LB,
N_LE,
N_LP,
N_LT,
N_MINUS,
N_MOD,
N_MUL,
N_NOT,
N_OF,
N_OR,
N_PLUS,
N_PROCEDURE,
N_PROGRAM,
N_RB,
N_READ,
N_REAL,
N_RECORD,
N_REPEAT,
N_RP,
N_SEMI,
N_STRING,
N_SYS_CON,
N_SYS_FUNCT,
N_SYS_PROC,
N_SYS_TYPE,
N_THEN,
N_TO,
N_TYPE,
N_UNEQUAL,
N_UNTIL,
N_VAR,
N_WHILE
} NodeKind;

typedef struct treeNode{
	struct treeNode * child;
	struct treeNode * sibling;
    int lineno;
	int nChild;

	NodeKind nodekind;
	char *tokenString;
} TreeNode;

extern int lineno;
extern int traceflag;
#endif
