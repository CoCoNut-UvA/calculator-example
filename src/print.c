#include <stdio.h>

#include "ccngen/ast.h"
#include "ccn/ccn.h"
#include "ccngen/enum.h"

char *operatorToString(enum binop_type type)
{
    switch (type) {
    case BT_add:
        return "+";
    case BT_sub:
        return "-";
    }

    return "";
}

node_st *PRTbinop(node_st *node)
{
    TRAVdo(BINOP_LEFT(node));
    printf(" %s ", operatorToString(BINOP_TYPE(node)));
    TRAVdo(BINOP_RIGHT(node));
    return node;
}

node_st *PRTnum(node_st *node)
{
    printf("%d", NUM_VAL(node));
    return node;
}

