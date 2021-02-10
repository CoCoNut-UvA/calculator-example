#include <stdio.h>

#include "ccngen/ast.h"
#include "ccngen/enum.h"
#include "ccn/ccn.h"

/*
static char *operatorToString(enum binop_type type)
{
    switch (type) {
    case BT_add:
        return "+";
    case BT_sub:
        return "-";
    }

    return "";
}
*/

node_st *PRTprogram(node_st *node)
{
    TRAVchildren(node);
    return node;
}


node_st *PRTnum(node_st *node)
{
    printf("%d", NUM_VAL(node));
    return node;
}

