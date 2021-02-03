#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#include "ccn/ccn.h"

void BreakpointHandler(node_st *root)
{
    return;
}

char *input_line = NULL;
int main (void)
{
    while (1) {
        input_line = readline("REPL> ");
        if (input_line == NULL) {
            break;
        }
        CCNrun(NULL);
        free(input_line);
    }
    putchar('\n');
    return 0;
}
