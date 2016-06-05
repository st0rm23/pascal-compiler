%{
	#include <stdio.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include "util.h"
	#include "globals.h"
	#define YYSTYPE TreeNode*

	int totalLine;
	TreeNode * root;
	int hasError;
%}

%token AND
%token ARRAY
%token ASSIGN
%token BEGINN
%token CASE
%token CHAR
%token COLON
%token COMMA
%token CONST
%token DIV
%token DO
%token DOT
%token DOTDOT
%token DOWNTO
%token ELSE
%token END
%token EQUAL
%token FOR
%token FUNCTION
%token GE
%token GOTO
%token GT
%token ID
%token IF
%token INTEGER
%token LB
%token LE
%token LP
%token LT
%token MINUS
%token MOD
%token MUL
%token NOT
%token OF
%token OR
%token PLUS
%token PROCEDURE
%token PROGRAM
%token RB
%token READ
%token REAL
%token RECORD
%token REPEAT
%token RP
%token SEMI
%token STRING
%token SYS_CON
%token SYS_FUNCT
%token SYS_PROC
%token SYS_TYPE
%token THEN
%token TO
%token TYPE
%token UNEQUAL
%token UNTIL
%token VAR
%token WHILE

%%

program : program_head routine DOT {
			$$ = newTreeNode(program);
			appendChild($$, $1);
			appendChild($$, $2);			
			appendChild($$, $3);

			if (!hasError) hasError = 0;
			root = $$;
			totalLine = lineno;
		}
		| program_head routine error{
			yyerror("missing the <DOT> of the end of program");
		}        
		;

program_head : PROGRAM ID SEMI {
				$$ = newTreeNode(program_head);
				appendChild($$, $1);
				appendChild($$, $2);			
				appendChild($$, $3);
				}
          	 | PROGRAM error SEMI{
			 	yyerror("<RPOGRAM NAME>");
			 }
			 ;

routine : routine_head routine_body {
			$$ = newTreeNode(routine);
			appendChild($$, $1);
			appendChild($$, $2);
		}
        ;

sub_routine : routine_head routine_body {
				$$ = newTreeNode(sub_routine);
				appendChild($$, $1);
				appendChild($$, $2);		
			}
            ;

routine_head : label_part const_part type_part var_part routine_part {
				 $$ = newTreeNode(routine_head);
				 appendChild($$, $1);
				 appendChild($$, $2);			
				 appendChild($$, $3);			
				 appendChild($$, $4);			
				 appendChild($$, $5);
			 }
             ;

label_part : {
		   		$$ = newTreeNode(label_part);
           }
           ;

const_part : CONST const_expr_list {
			   $$ = newTreeNode(const_part);
			   appendChild($$, $1);
		   } 
		   | {
           		$$ = newTreeNode(const_part);
		   }
		   ;

const_expr_list : const_expr_list ID EQUAL const_value SEMI {
					 $$ = newTreeNode(const_expr_list);
					 appendChild($$, $1);
					 appendChild($$, $2);			
					 appendChild($$, $3);			
					 appendChild($$, $4);			
					 appendChild($$, $5);
				}
                | ID EQUAL const_value SEMI {
					 $$ = newTreeNode(const_expr_list);
					 appendChild($$, $1);
					 appendChild($$, $2);			
					 appendChild($$, $3);			
					 appendChild($$, $4);
				}
                ;

const_value : INTEGER {
				 $$ = newTreeNode(const_value);
				 appendChild($$, $1);
			}
            | REAL {
				$$ = newTreeNode(const_value);
				appendChild($$, $1);
			}
            | CHAR {
				 $$ = newTreeNode(const_value);
				 appendChild($$, $1);
			} 
            | STRING {
				 $$ = newTreeNode(const_value);
				 appendChild($$, $1);
			} 
            | SYS_CON {
				 $$ = newTreeNode(const_value);
				 appendChild($$, $1);
			}
            ;

type_part : TYPE type_decl_list {
				 $$ = newTreeNode(type_part);
				 appendChild($$, $1);	
				 appendChild($$, $2);			
		  }
          | {	 
				 $$ = newTreeNode(type_part);	
		  }
		  ;

type_decl_list : type_decl_list type_definition {
	 		     $$ = newTreeNode(type_decl_list);
				 appendChild($$, $1);	
				 appendChild($$, $2);			
		  	   }
               | type_definition {
	 		     $$ = newTreeNode(type_decl_list);
				 appendChild($$, $1);			
				}
               ;
 
type_definition : ID EQUAL type_decl SEMI {
	 			 $$ = newTreeNode(type_definition);
				 appendChild($$, $1);	
				 appendChild($$, $2);	
				 appendChild($$, $3);	
				 appendChild($$, $4);			
		        }
                ;

type_decl : simple_type_decl {
	 			$$ = newTreeNode(type_decl);
			 	appendChild($$, $1);	
		  }
          | array_type_decl {
				 $$ = newTreeNode(type_decl);
				 appendChild($$, $1);				
		  }
          | record_type_decl {
				 $$ = newTreeNode(type_decl);
				 appendChild($$, $1);	
		  }
		  ;

simple_type_decl : SYS_TYPE {
				 	$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);
				 }
                 | ID {
					$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);					
				 }
                 | LP name_list RP {
					$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);
					appendChild($$, $3);
				 }
                 | const_value DOTDOT const_value {
					$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);
					appendChild($$, $3);				
				 }  
                 | MINUS const_value DOTDOT const_value {
					$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);
					appendChild($$, $3);	
					appendChild($$, $4);					
				 }
                 | MINUS const_value DOTDOT MINUS const_value {
                   	$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);
					appendChild($$, $3);	
					appendChild($$, $4);	
					appendChild($$, $5);			
				 }
                 | ID DOTDOT ID {
				  	$$ = newTreeNode(simple_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);	
					appendChild($$, $3);					
				 }
			     ;

array_type_decl : ARRAY LB simple_type_decl RB OF type_decl {
					$$ = newTreeNode(array_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);	
					appendChild($$, $3);		
					appendChild($$, $4);	
					appendChild($$, $5);		
					appendChild($$, $6);					
				}
				;

record_type_decl : RECORD field_decl_list END {
				 	$$ = newTreeNode(record_type_decl);
				 	appendChild($$, $1);	
					appendChild($$, $2);	
					appendChild($$, $3);		
				 }
                 ;

field_decl_list : field_decl_list field_decl {
					$$ = newTreeNode(field_decl_list);
				 	appendChild($$, $1);	
					appendChild($$, $2);					
				}
                | field_decl {
					$$ = newTreeNode(field_decl_list);
				 	appendChild($$, $1);	
				}
                ;

field_decl : name_list COLON type_decl SEMI {
	 			$$ = newTreeNode(field_decl);
			 	appendChild($$, $1);	
				appendChild($$, $2);	
				appendChild($$, $3);		
				appendChild($$, $4);	
		   }
           ;

name_list : name_list COMMA ID {
			$$ = newTreeNode(name_list);
		 	appendChild($$, $1);	
			appendChild($$, $2);	
			appendChild($$, $3);
          }
          | ID {
			$$ = newTreeNode(name_list);
		 	appendChild($$, $1);		
		  }
          ;

var_part : VAR var_decl_list {
			$$ = newTreeNode(var_part);
		 	appendChild($$, $1);	
			appendChild($$, $2);		
		 } 
         | {
			$$ = newTreeNode(var_part);
		 }
         ;

var_decl_list : var_decl_list var_decl {
				  $$ = newTreeNode(var_decl_list);
		 	      appendChild($$, $1);	
				  appendChild($$, $2);	
			  }
              | var_decl {
					$$ = newTreeNode(var_decl_list);
		 			appendChild($$, $1);
			  }
              ;
var_decl : name_list COLON type_decl SEMI {
		 	$$ = newTreeNode(var_decl);
		 	appendChild($$, $1);	
			appendChild($$, $2);	
			appendChild($$, $3);	
			appendChild($$, $4);
		 }
         ;

routine_part : routine_part function_decl {
			 		$$ = newTreeNode(routine_part);
		 			appendChild($$, $1);	
					appendChild($$, $2);
				}
             | routine_part procedure_decl {
			 		$$ = newTreeNode(routine_part);
		 			appendChild($$, $1);	
					appendChild($$, $2);
			 }
             | function_decl {
			 		$$ = newTreeNode(routine_part);
		 			appendChild($$, $1);	
			 }
             | procedure_decl {
			 		$$ = newTreeNode(routine_part);
		 			appendChild($$, $1);	
			 }  
             | {
			 		$$ = newTreeNode(routine_part);
		     }
             ;

function_decl : function_head SEMI sub_routine SEMI {
			  		$$ = newTreeNode(function_decl);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);	
					appendChild($$, $4);		
			  }
              ;

function_head : FUNCTION ID parameters COLON simple_type_decl {
			  		$$ = newTreeNode(function_head);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);	
					appendChild($$, $4);	
					appendChild($$, $5);	
			  }
              ;
 
procedure_decl : procedure_head SEMI sub_routine SEMI {
			   		$$ = newTreeNode(procedure_decl);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);	
					appendChild($$, $4);	
			   }
               ;

procedure_head : PROCEDURE ID parameters {
					$$ = newTreeNode(procedure_head);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);	
			   }
               ;
 
parameters : LP para_decl_list RP {
				$$ = newTreeNode(parameters);
	 			appendChild($$, $1);
				appendChild($$, $2);	
				appendChild($$, $3);	
		   }
           | {
				$$ = newTreeNode(parameters);
		   }
           ;

para_decl_list : para_decl_list SEMI para_type_list {
					$$ = newTreeNode(para_decl_list);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);	
			   } 
               | para_type_list {
					$$ = newTreeNode(para_decl_list);
		 			appendChild($$, $1);
			   }
               ;

para_type_list : var_para_list COLON simple_type_decl {
					$$ = newTreeNode(para_type_list);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);				
			   }
			   | val_para_list COLON simple_type_decl {
					$$ = newTreeNode(para_type_list);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);				
			   }
               ;

var_para_list : VAR name_list {
					$$ = newTreeNode(var_para_list);
		 			appendChild($$, $1);
					appendChild($$, $2);	
   			  }
              ;

val_para_list : name_list {
					$$ = newTreeNode(val_para_list);
		 			appendChild($$, $1);
			  }
              ;

routine_body : compound_stmt {
					$$ = newTreeNode(routine_body);
		 			appendChild($$, $1);   		
			 }
             ;

compound_stmt : BEGINN stmt_list END {
					$$ = newTreeNode(compound_stmt);
		 			appendChild($$, $1);
					appendChild($$, $2);	
					appendChild($$, $3);
			  }
              ;

stmt_list : stmt_list  stmt  SEMI {
			$$ = newTreeNode(stmt_list);
 			appendChild($$, $1);
			appendChild($$, $2);	
			appendChild($$, $3);
		  }
          | {
			$$ = newTreeNode(stmt_list);
		  }
          ;

stmt : INTEGER COLON non_label_stmt {
		$$ = newTreeNode(stmt);
		appendChild($$, $1);
		appendChild($$, $2);	
		appendChild($$, $3);
     }
     | non_label_stmt {
		$$ = newTreeNode(stmt);
		appendChild($$, $1);
     }
	 ;

non_label_stmt : assign_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | proc_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | compound_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | if_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | repeat_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | while_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | for_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
   			   }
               | case_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               | goto_stmt {
					$$ = newTreeNode(non_label_stmt);
					appendChild($$, $1);
			   }
               ;

assign_stmt : ID ASSIGN expression {
					$$ = newTreeNode(assign_stmt);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
			}
            | ID LB expression RB ASSIGN expression {
					$$ = newTreeNode(assign_stmt);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
					appendChild($$, $4);
					appendChild($$, $5);
					appendChild($$, $6);
			}
            | ID DOT ID ASSIGN expression {
					$$ = newTreeNode(assign_stmt);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
					appendChild($$, $4);
					appendChild($$, $5);
			}
            ;

proc_stmt : ID {
				$$ = newTreeNode(proc_stmt);
				appendChild($$, $1);
		  }
          | ID LP args_list RP {
				$$ = newTreeNode(proc_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
		  }
          | SYS_PROC {
				$$ = newTreeNode(proc_stmt);
				appendChild($$, $1);
		  }
          | SYS_PROC LP expression_list RP {
				$$ = newTreeNode(proc_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
		  }
          | READ LP factor RP {
				$$ = newTreeNode(proc_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
		  }
          ;

if_stmt : IF expression THEN stmt else_clause {
				$$ = newTreeNode(if_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
				appendChild($$, $5);
		}
        ;

else_clause : ELSE stmt {
				$$ = newTreeNode(else_clause);
				appendChild($$, $1);
				appendChild($$, $2);
			}
            | {
				$$ = newTreeNode(else_clause);
			}
            ;

repeat_stmt : REPEAT stmt_list UNTIL expression {
				$$ = newTreeNode(repeat_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
			}
            ;

while_stmt : WHILE expression DO stmt {
				$$ = newTreeNode(while_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
		   }
           ;

for_stmt : FOR ID ASSIGN expression direction expression DO stmt {
				$$ = newTreeNode(for_stmt);
				appendChild($$, $1);
				appendChild($$, $2);
				appendChild($$, $3);
				appendChild($$, $4);
				appendChild($$, $5);
				appendChild($$, $6);
				appendChild($$, $7);
				appendChild($$, $8);
		 }
         ;

direction : TO {
			$$ = newTreeNode(direction);
			appendChild($$, $1);
		  }
          | DOWNTO {
			$$ = newTreeNode(direction);
			appendChild($$, $1);
		  }
          ;

case_stmt : CASE expression OF case_expr_list END {
			$$ = newTreeNode(case_stmt);
			appendChild($$, $1);
			appendChild($$, $2);
			appendChild($$, $3);
			appendChild($$, $4);
			appendChild($$, $5);
		  }
          ;

case_expr_list : case_expr_list case_expr {
					$$ = newTreeNode(case_expr_list);
					appendChild($$, $1);
					appendChild($$, $2);
			   }
               | case_expr {
					$$ = newTreeNode(case_expr_list);
					appendChild($$, $1);
			   }
               ;
case_expr : const_value COLON stmt SEMI {
			$$ = newTreeNode(case_expr);
			appendChild($$, $1);
			appendChild($$, $2);
			appendChild($$, $3);
			appendChild($$, $4);
		  }
          | ID COLON stmt SEMI {
			$$ = newTreeNode(case_expr);
			appendChild($$, $1);
			appendChild($$, $2);
			appendChild($$, $3);
			appendChild($$, $4);
		  }
          ;

goto_stmt : GOTO INTEGER {
			$$ = newTreeNode(goto_stmt);
			appendChild($$, $1);
			appendChild($$, $2);
		  }
          ;

expression_list : expression_list COMMA expression {
					$$ = newTreeNode(expression_list);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
			    }
                | expression {
					$$ = newTreeNode(expression_list);
					appendChild($$, $1);
				}
                ;

expression : expression GE expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }
           | expression GT expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }
           | expression LE expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }
           | expression LT expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }
           | expression EQUAL expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }  
           | expression UNEQUAL expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		   }
           | expr {
					$$ = newTreeNode(expression);
					appendChild($$, $1);
		   }
           ;

expr : expr PLUS term {
					$$ = newTreeNode(expr);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
     }
     | expr MINUS term {
					$$ = newTreeNode(expr);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | expr OR term {
					$$ = newTreeNode(expr);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | term {
					$$ = newTreeNode(expr);
					appendChild($$, $1);
	 }
     ;

term : term MUL factor {
					$$ = newTreeNode(term);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | term DIV factor {
					$$ = newTreeNode(term);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | term MOD factor {
					$$ = newTreeNode(term);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | term AND factor {
					$$ = newTreeNode(term);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	 }
     | factor {
					$$ = newTreeNode(term);
					appendChild($$, $1);
	 }
     ;

factor : ID {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
	   }
       | ID LP args_list RP {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
				    appendChild($$, $4);
	   }
       | SYS_FUNCT {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
       }
       | SYS_FUNCT LP args_list RP {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
					appendChild($$, $4);
	   }
       | const_value {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
	   }
       | LP expression RP {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	   }
       | NOT factor {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
	   }
       | MINUS factor {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
	   }
       | ID LB expression RB {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
					appendChild($$, $4);
	   }
       | ID DOT ID {
					$$ = newTreeNode(factor);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
	   }
       ;

args_list : args_list COMMA expression {
					$$ = newTreeNode(args_list);
					appendChild($$, $1);
					appendChild($$, $2);
					appendChild($$, $3);
		  } 
          | expression {
					$$ = newTreeNode(args_list);
					appendChild($$, $1);
		  }
          ;

%%
int yyerror(char *a){
	fprintf(stderr, "line %d: error in '%s'\n", lineno, a);
	hasError = 1;
	return 0;
}

