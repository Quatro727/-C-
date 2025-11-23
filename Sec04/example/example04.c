/*오버플로우 예제*/
#include <stdio.h>
#include <limits.h>//정수형의 한계값을 알려주는 헤더 파일

int main(){
    short s_money=SHRT_MAX;//MAX값으로 초기화
    unsigned short u_money=USHRT_MAX;//MAX값으로 초기화

    s_money+=1;//overflow 발생
    printf("s_money=%d\t", s_money);

    u_money+=1;//overflow 발생
    printf("u_money=%d",u_money);

    return 0;
}
//각 자료형의 MAX와 min값은 limits.h 파일에 정의되어 있다.