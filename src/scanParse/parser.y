%{
  #include <stdio.h>
  #include <math.h>
  #include "ccngen/ast.h"
  #include "ccngen/enum.h"

extern node_st *root;

  int yylex (void);
  void yyerror (char const *);
%}

%union {
    node_st* node;
    int intval;
}

%token NUM

%type<node> start expr
%type<int> NUM


%% 

start:
    %empty { root = NULL; }
|   expr { root = $1; }
;


expr: 
    NUM { $$ = ASTnum(yylval.intval); }
;

%%

