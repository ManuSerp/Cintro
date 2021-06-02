#include <stdio.h>


int printTableau(int t[],int n){
    printf("{ ");
    for(int i =0;i<n;i++){
        printf("%d ",t[i]);
    }


    printf(" }");

}