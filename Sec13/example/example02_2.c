#include <stdio.h>

//function prototype scope:함수 원형에서는 변수명보다는 타입이 더 중요
void f1(int hello, double world);

double func_block(double d){
    double p=0.0;

    int i;
    //block scope
    for(i=0;i<10;i++){
        double q=d*i;
        p*=q;

        if(i==5)
            goto hello;
    }
hello:
    printf("Hello, World!\n");

    return p; 
}