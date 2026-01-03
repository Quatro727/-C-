/*06. 소수 판단 예제*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    unsigned num,i;
    bool isPrime=true;

    scanf("%u",&num);

    for(i=2; i<num;i++){
        if(num%i==0){
            isPrime=false;
            printf("%u is dividable by %u\n",num,i);
        }
    }
    if(isPrime){
        printf("%u is prime number\n",num);
    }
    else{
        printf("%u is not prime number\n", num);
    }
    return 0;
}