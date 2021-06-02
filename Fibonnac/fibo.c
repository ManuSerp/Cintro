#include <stdio.h>

int fibo(int n);

int main(){

    int z;

    z=fibo(5);
    printf("%d\n",z);


}


int fibo(int n){

    int a=1;
    int b=0;
    int save = 0;

    
    for(int i=0;i<n;i++){
        save=a;
        a=a+b;
        b=save;
        
    }


    return a;

}