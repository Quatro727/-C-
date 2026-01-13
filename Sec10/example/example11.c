/*11. 포인터의 기본 작동 원리*/
#include <stdio.h>

int main(){
    int a=8;
    int *a_ptr=&a;

    *a_ptr=7;

    printf("%d %d\n",a, *a_ptr);

    return 0;
}