#include "ccngen/ast.h"
#include "lexer.h"
#include "parser.h"
#include <stddef.h>

extern char *input_line;

node_st *root = NULL;
node_st *scanParse(node_st *node)
{
   yy_scan_string(input_line);
   yyparse();
   return root;
}
