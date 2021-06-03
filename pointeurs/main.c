#include <stdio.h>

#include "module.h"

int main(void) {
    char* s = copy("deme");

    ModU(s);

    printf("%s\n", s);
    return 0;
}