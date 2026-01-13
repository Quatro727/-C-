/*08. 팩토리얼->재귀, 루프문*/
#include <stdio.h>

long loop_factorial(int n);
long recursion_factorial(int n);

int main(){
    int num=5;

    printf("%d\n", loop_factorial(num));
    printf("%d\n", recursion_factorial(num));

    return 0;
}
long loop_factorial(int n){
    for(int i=1;i<=5;i++){
        n=n*i;
    }
    return n;
}
long recursion_factorial(int n){
    int result=recursion_factorial(n-1)*n;
    return result;
}