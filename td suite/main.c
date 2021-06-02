#include <stdio.h>
#include "printtableau.h"

int main(){
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