/*09. 조건 연산자*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    int num;
    scanf("%d", &num);

    bool is_even=(num%2==0)?true:false;

    if(is_even){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}