#include <stdio.h>

#include "ccngen/ast.h"
#include "ccngen/enum.h"
#include "ccn/ccn.h"

node_st *PRTnum(node_st *node)
{
    printf("%d\n", NUM_VAL(node));
    return node;
}

