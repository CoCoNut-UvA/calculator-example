%{
#include "ccngen/ast.h"
#include "parser.h"
#include <err.h>

%}

%%
[0-9]+ {yylval.intval = atoi(yytext); return NUM;}
"+" { return '+';}
%%


int yywrap() 
{
    return (1);
}

void yyerror(const char* s) 
{
    err(EXIT_FAILURE, "%s", s);
}
