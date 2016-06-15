#include "globals.h"
#include "util.h"

int yyparse();
extern int totalLine;
extern TreeNode * root;
extern int hasError;
int traceflag = 0;
int printflag = 0;


void printTree(TreeNode* t, int depth){
	static int flag[100];
	static int step = 3;	
	int i;	
	if (t->sibling == NULL) flag[depth] = 0;
	else flag[depth] = 1;

	for (i=0; i<depth*step; i++) {
		if (i <= (depth-1)*step){			
			if (i % step == 0 && flag[i / step + 1]) printf("|");
			else if (i == (depth-1)*step) printf("|");
			else printf(" ");
		} else printf("-");
	}
	printTreeNode(t);	
	TreeNode* p = t->child;
	while (p != NULL){
		printTree(p, depth+1);
		p = p->sibling;	
	}
}

void analysisArg(int argc, char* argv[]){
	int i;
	for (i=0; i<argc; i++) {
		if (strcmp(argv[i], "-d") == 0) printflag = 1;
		if (strcmp(argv[i], "-t") == 0) traceflag = 1;
	}
}

int main(int argc, char* argv[]){
	analysisArg(argc, argv);
	yyparse();
	if (printflag && !hasError && root != NULL) printTree(root, 0);
	if (hasError) printf("\nthe compiler meets some error, aborted!\n\n");
}
