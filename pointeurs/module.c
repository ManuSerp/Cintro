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

    char* z = malloc((n + 1) * sizeof(char));

    for (int i = 0; i < n; i++) {
        *(z + i) = s[i];
    }
    *(z + n + 1) = 0;

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

void ModU(char* s) {
    char* res = malloc(sizeof(char));
    scanf("%c", res);
    *s = *res;
}

void prtList(int* L) {
    int n = *L;
    printf("%d\n", n);
    int* save = L;
    L++;
    for (int i = 0; i < n; i++) {
        printf("%d ", *L);
        L++;
    }
    L = save;
}

int* VoidList(void) {
    int* res = (int*)malloc(sizeof(int));
    *res = 0;
    return res;
}

int* AddEnd(int a, int* s) {
    int n = *s;
    n++;
    int* res = (int*)malloc((n) * sizeof(int));
    (*s)++;
    *res = *s;

    for (int i = 1; i < n; i++) {
        *(res + i) = *(s + i);
    }
    *(res + n) = a;

    return res;
}
