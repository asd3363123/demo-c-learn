//
// Created by Dell on 2019/5/23.
//
#include "stdio.h"

#include "mytypedef.h"

void test_my_typedef() {
    test_a();
}

void test_a() {
    String a = "hello world!";
    char *p = a;
    printf("%c%c%c", *p, *(p + 1), *(p + 2));
}