#include "module.h"

#include <stdio.h>

int mylen(char* s) {
    int res = 0;

    while (*(s)) {
        res++;
        s++;
    }
    return res;
}