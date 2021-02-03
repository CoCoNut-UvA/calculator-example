#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#include "ccn/ccn.h"

void BreakpointHandler()
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
        putchar('\n');
        free(input_line);
    }
    return 0;
}
