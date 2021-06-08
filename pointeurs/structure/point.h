#ifndef POINT
#define POINT

typedef struct _Point {
    int x;
    int y;

} Point;

void print_point(Point *q);
Point *create_point(int a, int b);
void move(Point *p, int dx, int dy);

#endif