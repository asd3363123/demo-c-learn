//
// Created by Dell on 2019/5/15.
//
#include <stdio.h>
#include "mypoint.h"

#define ALLOCSIZE 10000


void string_array_copy(char *, char *);

void point_test() {
    array_point_test();

    char test[20];
    string_array_copy(test, "hello world!");

    for (int i = 0; i < 20; ++i) {
        printf("%c", test[i]);
    }
}


void array_point_test() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = &a[0];
    printf("%d,%d,%d\n", *p, *(p + 1), *(p + 2));

    int *q = (int *) &a;
    printf("%d,%d\n", *q, *(q + 1));

    int *w = a;
    printf("%d,%d\n", *w, *(w + 1));
}

//static const int alloc_size = ALLOCSIZE;
//static char allocbuf[alloc_size];
//static char *allocp = allocbuf;
//
//char *alloc(int n) {
//    //分配地址
//    if (allocbuf + ALLOCSIZE - allocp >= n) {
//        allocp += n;
//        return allocp - n;
//    }
//}
//
//void afree(char *p) {
//    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
//        allocp = p;
//    }
//}

void string_array_copy(char *to, char *form) {
    while (*to++ = *form++);
}