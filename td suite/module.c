#include <stdio.h>
#include "printtableau.h"
#include "module.h"

int tabPair(void){


int tab[51];
    int t=0;

    for(int i =0;i<101;i++){
        if(i%2 == 0){
            tab[t]=i;
            t++;
        }
 
    }
    printTableau(tab,51);   
    return 0;
}

int sumTab(int t[],int d[],int n){


    for(int i = 0; i<n;i++){
        t[i]=t[i]+d[i];
    }


    return 0;
}

int prt(void){
    char texte[100];

    scanf("%s",texte);

    printf("%s\n",texte);
    return 0;


}