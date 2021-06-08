#include <stdio.h>
#include <stdlib.h>

#include "point.h"

void print_point(Point *q) { printf("[%d,%d]\n", q->x, q->y); }

Point *create_point(int a, int b) {
    Point *res = (Point *)malloc(sizeof(Point));
    res->x = a;
    res->y = b;
    return res;
}

int main() {
    Point *p = create_point(5, 12);

    print_point(p);

    return 0;
}