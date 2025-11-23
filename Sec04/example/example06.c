/*컴퓨터가 음수를 표현하는 방법: 2의 보수*/
#include <stdio.h>

int main(){
    int x=3;
    int y=-3;

    printf("x=%08X\n",x);//8자리의 16진수로 출력
    printf("y=%08X\n",y);//8자리의 16진수로 출력
    printf("x+y=%08X\n",x+y);//8자리의 16진수로 출력

    return 0;
}
//2의 보수 계산 방식은 부호 있는 int에서 사용하는 음수 표현 방식임을 명심하자
