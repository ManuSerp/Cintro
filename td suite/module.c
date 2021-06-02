#include "module.h"

#include <stdio.h>

#include "printtableau.h"

int tabPair(void) {
    int tab[51];
    int t = 0;

    for (int i = 0; i < 101; i++) {
        if (i % 2 == 0) {
            tab[t] = i;
            t++;
        }
    }
    printTableau(tab, 51);
    return 0;
}

int sumTab(int t[], int d[], int n) {
    for (int i = 0; i < n; i++) {
        t[i] = t[i] + d[i];
    }

    return 0;
}

int prt(void) {
    char texte[100];

    scanf("%s", texte);

    printf("%s\n", texte);
    return 0;
}

int mylen(char s[]) {
    int res = 0;
    while (s[res]) {
        res++;
    }
    return res;
}

int equals(char s[], char t[]) {
    int param = 0;

    int res = 0;
    int test = 0;

    int flag = 1;

    while (flag) {
        if (s[res] == 0 & t[res] == 0) {
            flag = 0;

        } else if (s[res] == 0 | t[res] == 0) {
            flag = 0;
            test = -1;

        } else if (s[res] != t[res]) {
            test = 1;
        }

        res++;
    }

    return test;
}

int palin(char s[]) {
    int n = mylen(s);
    char t[n];

    for (int i = n - 1; i > -1; i--) {
        t[i] = s[n - 1 - i];
    }
    t[n] = 0;

    return equals(s, t);
}

int bit(int bin) {
    int res = 0;
    int test;

    for (int i = 0; i < 64; i++) {
        test = po(2, i);

        if (bin & test) {
            res++;
        }
    }
    return res;
}

int po(int a, int b) {
    int res;
    if (b == 0) {
        res = 1;
    } else {
        res = a;
        for (int i = 0; i < b - 1; i++) {
            res = res * a;
        }
    }
    return res;
}