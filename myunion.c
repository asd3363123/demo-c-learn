//
// Created by Dell on 2019/5/23.
//
#include "stdio.h"
#include "myunion.h"


void test_my_union() {
    test_union_one();
}

void test_union_one() {
    union u_tag {
        int ival;
        float fval;
        char *sval;
        unsigned int test : 3;
    };
    union u_tag u;
    u.ival = 12345;
    printf("\nunion : %d\n", u.ival);
    u.fval = 8787.2323;
    printf("\nunion : %d\n", u.ival);
    printf("\nunion : %d\n", u.test);
    u.fval = -8787.2323;
    printf("\nunion : %d\n", u.test);


}
