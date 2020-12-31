#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#include "ccn/phase_driver.h"


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
