/*05. 나누기 연산자 주의사항*/
#include <stdio.h>

int main(){
    printf("Integer divisions\n");
    //정수 자료형끼리 나누기 연산을 할 경우 소수점이하의 숫자는 반올림 없이 그대로 버리고 정수 부분만 결과로 취한다.
    printf("%d\n", 14/7);//2
    printf("%d\n", 7/2);//3
    printf("%d\n", 7/3);//2
    printf("%d\n", 7/4);//1
    printf("%d\n", 7/5);//1

    //위의 예제와 동일
    printf("Trucating toward zero(C99)\n");
    printf("%d\n", -7/2);//-3
    printf("%d\n", -7/3);//-2
    printf("%d\n", -7/4);//-1
    printf("%d\n", -8/4);//-2

    //실수 자료형 나누기 연산
    //실수와 정수 자료형을 연산할 경우 CPU는 서로 다른 자료형을 연산하지 못하므로 컴파일러가 자체적으로 정수 자료형을 실수 자료형으로 변환해준다.
    printf("\nFloating divisions\n");
    printf("%lf\n", 9.0/4.0);//2.25
    printf("%lf\n", 9.0/4);//컴파일러 내부에서 4를 4.0으로 변환해서 연산해준다.->2.25

    return 0;
}