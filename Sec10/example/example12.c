/*12. 포인터의 기본적인 사용법*/
#include <stdio.h>

int main(){
    int a,b;
    a=123;

    int *a_ptr;
    a_ptr=&a;//변수 a의 주소값을 포인터 변수에 저장
    printf("%d %d %p\n",a, *a_ptr, a_ptr);

    *a_ptr=456;
    printf("%d %d %p\n",a, *a_ptr, a_ptr);


    b=*a_ptr;
    printf("%d\n",b);

    *a_ptr=789;
    printf("%d\n",b);//포인터 변수를 통해 a의 값의 변화 시 b에 영향?
    printf("%d %d %p\n",a, *a_ptr, a_ptr);
    return 0;
}