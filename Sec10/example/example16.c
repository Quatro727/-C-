/*16. 포인터형 매개변수*/
#include <stdio.h>
void swap(int *a, int *b){
    printf("%p %p\n",a,b);//main함수의 변수 a와b의 주소값과 동일
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=123;
    int b=456;
    printf("%p %p\n", &a, &b);

    swap(&a, &b);//주소(포인터)에 의한 호출(call by pointer)
    printf("%d %d\n", a, b);
    return 0;
}