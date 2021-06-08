#include "point.h"

#include <stdio.h>
#include <stdlib.h>

void print_point(Point *q) { printf("[%d,%d]\n", q->x, q->y); }

Point *create_point(int a, int b) {
    Point *res = (Point *)malloc(sizeof(Point));
    res->x = a;
    res->y = b;
    return res;
}

void move(Point *p, int dx, int dy) {
    p->x = p->x + dx;
    p->y = p->y + dy;
}