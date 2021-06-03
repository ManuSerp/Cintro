#include "module.h"

#include <stdio.h>
#include <stdlib.h>

int mylen(char* s) {
    int res = 0;

    while (*(s)) {
        res++;
        s++;
    }
    return res;
}

char* copy(char s[]) {
    int n = mylenD(s);

    char* z = malloc(n * sizeof(char));

    for (int i = 0; i < n; i++) {
        *(z + i) = s[i];
    }

    return z;
}

int mylenD(char s[]) {
    int res = 0;
    while (s[res]) {
        res++;
    }
    return res;
}

int NbE(char* s) {
    int res = 0;

    while (*(s)) {
        if (*s == 'e') {
            res++;
        }
        s++;
    }

    return res;
}