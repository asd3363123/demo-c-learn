//
// Created by Dell on 2019/5/22.
//

#include "stdio.h"
#include "mystruct.h"

void test_struct() {
    test_one();
}

void test_one() {
    struct point {
        int x;
        int y;
    };

    struct point a = {320, 23};
    printf("%d,%d", a.x, a.y);

    //a到原点的距离
    double dist, sqrt(double);
    dist = sqrt((double) a.x * a.x + (double) a.y * a.y);

    struct rect {
        struct point pt1;
        struct point pt2;
    };

    struct rect screen;

}