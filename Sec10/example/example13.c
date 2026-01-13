/*13. NULL포인터&런터임 에러*/
#include <stdio.h>

int main(){
    int *safer_ptr=NULL;//포인터 변수를 NULL값으로 초기화(일종의 0으로 초기화)

    int a=123;

    if(safer_ptr!=NULL)
        safer_ptr=&a;
    if(safer_ptr!=NULL);
        printf("%p\n",safer_ptr);

    return 0;
}