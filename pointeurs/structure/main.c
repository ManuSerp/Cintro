#include <stdio.h>
#include <stdlib.h>

#include "point.h"

int main() {
    Point *p = create_point(5, 12);

    print_point(p);

    return 0;
}