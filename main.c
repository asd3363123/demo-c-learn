#include <stdio.h>
#include "main.h"
#include "mypoint.h"
#include "mystruct.h"
#include "mytypedef.h"
#include "myunion.h"

int main() {
//    simple();
//    get_max_line();
//    test_goto();
    printf("%d\n", '\213');
    printf("%d\n", '\x13');

//    test_point();
//    point_test();
//    test_struct();
    test_my_typedef();
    test_my_union();
}


void simple() {
    //-----------------------------------------
    float fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = 5 * (fahr - 32) / 9;
        printf(" %6.2f\t %6.2f \n", fahr, celsius);
        fahr += STEP;
    }

    //-----------------------------------------
    printf("EOF = %d", EOF);
    // output : -1

//    int c;
//
//    c = getchar();
//    while (c != EOF) {
//        putchar(c);
//        c = getchar();
//    }

    /** count lines, words, and characters in input */
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            ++nw;
            state = OUT;
        } else if (state == OUT) {
            state = IN;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

}

void get_max_line() {
    const int max_line = MAX_LINE;

    int len, max;
    char line[max_line], longest_line[max_line];

    max = 0;
    while ((len = f_get_line(line, max_line)) > 0) {
        if (len > max) {
            copy(longest_line, line);
            max = len;
        }
    }

    if (max > 0) {
        printf("Max line is %c", max_line);
    }
}

void copy(char to[], const char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

int f_get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void test_goto() {
    const int len = 10;
    int a[] = {3247, 234, 654, 7, 65, 7, 768, 674, 435435, 435345},
            b[] = {8237, 2349, 56, 1234, 546, 7777, 3, 8, 43, 5};
    int i, j = 0;

    for (i = 0; i < len; ++i) {
        for (j = 0; j < len; ++j) {
            if (a[i] == b[j]) {
                goto found;
            }
        }
    }

    printf("no found\n");

    found:
    printf("a : %d , b : %d", a[i], b[j]);

}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test_point() {
    char c = '\003';
    char *a = &c;

    printf("The char : %d is in the : %s , %c", c, a, *a);

    int d = 2, e = 4;

    swap(&d, &e);
//    swap((int *) d, (int *) e);
    printf("\nd = %d, e = %d\n", d, e);

}

