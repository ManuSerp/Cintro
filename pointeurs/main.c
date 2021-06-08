#include <stdio.h>

#include "module.h"

int main(void) {
    int* L = VoidList();
    L = AddEnd(7, L);
    L = AddEnd(7, L);
    L = AddEnd(7, L);

    prtList(L);

    return 0;
}