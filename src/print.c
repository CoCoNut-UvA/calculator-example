#include <stdio.h>

#include "ccngen/ast.h"
#include "ccn/dynamic_core.h"
#include "ccngen/enum.h"

node_st *PRTnum(node_st *node)
{
    printf("%d\n", NUM_VAL(node));
    return node;
}

