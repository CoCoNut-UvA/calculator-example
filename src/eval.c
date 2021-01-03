#include "ccngen/ast.h"
#include "ccn/ccn.h"
#include "ccngen/enum.h"
#include <stddef.h>

node_st *EVbinop(node_st *node)
{
    TRAVchildren(node);
    node_st *new = NULL;
    if (BINOP_TYPE(node) == BT_add) {
        new = ASTnum(NUM_VAL(BINOP_LEFT(node)) + NUM_VAL(BINOP_RIGHT(node)));
    } else {
        new = ASTnum(NUM_VAL(BINOP_LEFT(node)) - NUM_VAL(BINOP_RIGHT(node)));
    }
    CCNfree(node);
    return new;
}

