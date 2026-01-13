/*10. 피보나치 예제*/
#include  <stdio.h>

int fibonacci(int number);

int main(){
    for(int count=1;count<13;count++)
        printf("%d ", fibonacci(count));
    return 0;
}
int fibonacci(int number){
    if(number>2)
        return fiboonacci(number-1)+fibonaaci(number-2);
    else
        return 1;
}