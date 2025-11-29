/*8진수와 16진수를 10진수로 출력하기*/
#include <stdio.h>

int main(){
    int a=012;//8진수
    int b=0x12;//16진수

    printf("%d\n%d\n", a,b);

    return 0;
}