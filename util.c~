#include "util.h"


int traceflag = 0;

TreeNode *newTreeNode(NodeKind kind){
	TreeNode* t = (TreeNode *) malloc(sizeof(TreeNode));
	t->child = NULL;
	t->sibling = NULL;
	t->nodekind = kind;
	t->tokenString = NULL;
	if (traceflag) printTreeNode(t);
	
	return t;
}

TreeNode *newTokenTreeNode(NodeKind kind, char* tokenString){
	TreeNode* t = (TreeNode *) malloc(sizeof(TreeNode));
	t->child = NULL;
	t->sibling = NULL;
	t->nodekind = kind;
	int len = strlen(tokenString);
	t->tokenString = (char *)malloc(len + 1);
	strcpy(t->tokenString, tokenString);
	(t->tokenString)[len] = '\0';
	if (traceflag) printTreeNode(t);

	return t;
}

void appendChild(TreeNode *t, TreeNode *child){
	if (t->child == NULL) t->child = child;
	else {
		TreeNode *p = t->child;
		while (p->sibling != NULL) p = p->sibling;
		p->sibling = child;		
	}
}

void printTreeNode(TreeNode* treeNode){
	char *name = getNodeKindString(treeNode->nodekind);
	int isTerm = isTerminal(treeNode->nodekind);
	if (isTerm)
		printf("<%s>[%s]\n", name+6, treeNode->tokenString);
	else 
		printf("%s\n", name);
}

int isTerminal(NodeKind kind){
	switch(kind){
		case TOKEN_AND:
		case TOKEN_ARRAY:
		case TOKEN_ASSIGN:
		case TOKEN_BEGIN:
		case TOKEN_CASE:
		case TOKEN_CHAR:
		case TOKEN_COLON:
		case TOKEN_COMMA:
		case TOKEN_CONST:
		case TOKEN_DIV:
		case TOKEN_DO:
		case TOKEN_DOT:
		case TOKEN_DOTDOT:
		case TOKEN_DOWNTO:
		case TOKEN_ELSE:
		case TOKEN_END:
		case TOKEN_EQUAL:
		case TOKEN_FOR:
		case TOKEN_FUNCTION:
		case TOKEN_GE:
		case TOKEN_GOTO:
		case TOKEN_GT:
		case TOKEN_ID:
		case TOKEN_IF:
		case TOKEN_INTEGER:
		case TOKEN_LB:
		case TOKEN_LE:
		case TOKEN_LP:
		case TOKEN_LT:
		case TOKEN_MINUS:
		case TOKEN_MOD:
		case TOKEN_MUL:
		case TOKEN_NOT:
		case TOKEN_OF:
		case TOKEN_OR:
		case TOKEN_PLUS:
		case TOKEN_PROCEDURE:
		case TOKEN_PROGRAM:
		case TOKEN_RB:
		case TOKEN_READ:
		case TOKEN_REAL:
		case TOKEN_RECORD:
		case TOKEN_REPEAT:
		case TOKEN_RP:
		case TOKEN_SEMI:
		case TOKEN_STRING:
		case TOKEN_SYS_CON:
		case TOKEN_SYS_FUNCT:
		case TOKEN_SYS_PROC:
		case TOKEN_SYS_TYPE:
		case TOKEN_THEN:
		case TOKEN_TO:
		case TOKEN_TYPE:
		case TOKEN_UNEQUAL:
		case TOKEN_UNTIL:
		case TOKEN_VAR:
		case TOKEN_WHILE:
			return 1;
		default:
			return 0;
	}
}

char* getNodeKindString(NodeKind kind){
	switch(kind){
		case program:
			return "program";
		case program_head:
			return "program_head";
		case routine:
			return "routine";
		case sub_routine:
			return "sub_routine";
		case routine_head:
			return "routine_head";
		case label_part:
			return "label_part";
		case const_part:
			return "const_part";
		case const_expr_list:
			return "const_expr_list";
		case const_value:
			return "const_value";
		case type_part:
			return "type_part";
		case type_decl_list:
			return "type_decl_list";
		case type_definition:
			return "type_definition";
		case type_decl:
			return "type_decl";
		case simple_type_decl:
			return "simple_type_decl";
		case array_type_decl:
			return "array_type_decl";
		case record_type_decl:
			return "record_type_decl";
		case field_decl_list:
			return "field_decl_list";
		case field_decl:
			return "field_decl";
		case name_list:
			return "name_list";
		case var_part:
			return "var_part";
		case var_decl_list:
			return "var_decl_list";
		case var_decl:
			return "var_decl";
		case routine_part:
			return "routine_part";
		case function_decl:
			return "function_decl";
		case function_head:
			return "function_head";
		case procedure_decl:
			return "procedure_decl";
		case procedure_head:
			return "procedure_head";
		case parameters:
			return "parameters";
		case para_decl_list:
			return "para_decl_list";
		case para_type_list:
			return "para_type_list";
		case var_para_list:
			return "var_para_list";
		case val_para_list:
			return "val_para_list";
		case routine_body:
			return "routine_body";
		case compound_stmt:
			return "compound_stmt";
		case stmt_list:
			return "stmt_list";
		case stmt:
			return "stmt";
		case non_label_stmt:
			return "non_label_stmt";
		case assign_stmt:
			return "assign_stmt";
		case proc_stmt:
			return "proc_stmt";
		case if_stmt:
			return "if_stmt";
		case else_clause:
			return "else_clause";
		case repeat_stmt:
			return "repeat_stmt";
		case while_stmt:
			return "while_stmt";
		case for_stmt:
			return "for_stmt";
		case direction:
			return "direction";
		case case_stmt:
			return "case_stmt";
		case case_expr_list:
			return "case_expr_list";
		case case_expr:
			return "case_expr";
		case goto_stmt:
			return "goto_stmt";
		case expression_list:
			return "expression_list";
		case expression:
			return "expression";
		case expr:
			return "expr";
		case term:
			return "term";
		case factor:
			return "factor";
		case args_list:
			return "args_list";
		case TOKEN_AND:
			return "TOKEN_AND";
		case TOKEN_ARRAY:
			return "TOKEN_ARRAY";
		case TOKEN_ASSIGN:
			return "TOKEN_ASSIGN";
		case TOKEN_BEGIN:
			return "TOKEN_BEGIN";
		case TOKEN_CASE:
			return "TOKEN_CASE";
		case TOKEN_CHAR:
			return "TOKEN_CHAR";
		case TOKEN_COLON:
			return "TOKEN_COLON";
		case TOKEN_COMMA:
			return "TOKEN_COMMA";
		case TOKEN_CONST:
			return "TOKEN_CONST";
		case TOKEN_DIV:
			return "TOKEN_DIV";
		case TOKEN_DO:
			return "TOKEN_DO";
		case TOKEN_DOT:
			return "TOKEN_DOT";
		case TOKEN_DOTDOT:
			return "TOKEN_DOTDOT";
		case TOKEN_DOWNTO:
			return "TOKEN_DOWNTO";
		case TOKEN_ELSE:
			return "TOKEN_ELSE";
		case TOKEN_END:
			return "TOKEN_END";
		case TOKEN_EQUAL:
			return "TOKEN_EQUAL";
		case TOKEN_FOR:
			return "TOKEN_FOR";
		case TOKEN_FUNCTION:
			return "TOKEN_FUNCTION";
		case TOKEN_GE:
			return "TOKEN_GE";
		case TOKEN_GOTO:
			return "TOKEN_GOTO";
		case TOKEN_GT:
			return "TOKEN_GT";
		case TOKEN_ID:
			return "TOKEN_ID";
		case TOKEN_IF:
			return "TOKEN_IF";
		case TOKEN_INTEGER:
			return "TOKEN_INTEGER";
		case TOKEN_LB:
			return "TOKEN_LB";
		case TOKEN_LE:
			return "TOKEN_LE";
		case TOKEN_LP:
			return "TOKEN_LP";
		case TOKEN_LT:
			return "TOKEN_LT";
		case TOKEN_MINUS:
			return "TOKEN_MINUS";
		case TOKEN_MOD:
			return "TOKEN_MOD";
		case TOKEN_MUL:
			return "TOKEN_MUL";
		case TOKEN_NOT:
			return "TOKEN_NOT";
		case TOKEN_OF:
			return "TOKEN_OF";
		case TOKEN_OR:
			return "TOKEN_OR";
		case TOKEN_PLUS:
			return "TOKEN_PLUS";
		case TOKEN_PROCEDURE:
			return "TOKEN_PROCEDURE";
		case TOKEN_PROGRAM:
			return "TOKEN_PROGRAM";
		case TOKEN_RB:
			return "TOKEN_RB";
		case TOKEN_READ:
			return "TOKEN_READ";
		case TOKEN_REAL:
			return "TOKEN_REAL";
		case TOKEN_RECORD:
			return "TOKEN_RECORD";
		case TOKEN_REPEAT:
			return "TOKEN_REPEAT";
		case TOKEN_RP:
			return "TOKEN_RP";
		case TOKEN_SEMI:
			return "TOKEN_SEMI";
		case TOKEN_STRING:
			return "TOKEN_STRING";
		case TOKEN_SYS_CON:
			return "TOKEN_SYS_CON";
		case TOKEN_SYS_FUNCT:
			return "TOKEN_SYS_FUNCT";
		case TOKEN_SYS_PROC:
			return "TOKEN_SYS_PROC";
		case TOKEN_SYS_TYPE:
			return "TOKEN_SYS_TYPE";
		case TOKEN_THEN:
			return "TOKEN_THEN";
		case TOKEN_TO:
			return "TOKEN_TO";
		case TOKEN_TYPE:
			return "TOKEN_TYPE";
		case TOKEN_UNEQUAL:
			return "TOKEN_UNEQUAL";
		case TOKEN_UNTIL:
			return "TOKEN_UNTIL";
		case TOKEN_VAR:
			return "TOKEN_VAR";
		case TOKEN_WHILE:
			return "TOKEN_WHILE";
		default: 
			return "UNKNOWN";
	}
}
