/*02. 포인터의 산술 연산*/
#include <stdio.h>

int main(){
    int *ptr=0;//NULL로 초기화 하는 것이 정석. char? double? float? long long?일 경우
    //printf("%d ", ptr);//Error

    printf("%p %lld\n", ptr, (long long)ptr);

    ptr++;//0->4
    //포인터에 일을 더한다는 것은 선언된 자료향의 사이즈만큼 증가시킨다는 것을 의미
    //즉, 주소값에 상수1을 더한다는 의미보다는 자료혀엥 맞춰 해당 숫자칸만큼 건너뛴다는 의미가 강하다.
    //참고로 -도 가능하다.

    printf("%p %lld\n", ptr, (long long)ptr);

    //ptr=-ptr
    //ptr=+ptr
    //포인터는 주소값을 사용하는 문법. 기본적으로 양수이기 때문에 부호를 바꾸는 것이 의미가 없음

    /*빼기*/
    double arr[10];
    double *ptr1=&arr[3], *ptr2=&arr[5];

    //ptr2=ptr1+ptr2;->포인터끼리의 덧셈은 X
    int i=ptr2-ptr1;//포인터끼리의 빼기는 가능하다. 메모리가 1차원적으로 나열된 구조이므로 주소값으로 유효한 의미를 가질 수 있어 가능하다.
    //연산의 결과는 단순히 진짜 값으로서의 차이가 아닌 선언된 자료형의 크기만큼 몇 칸 떨어져 있는가를 의미.

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
    
    return 0;
}