/*고정 너비 자료형*/
#include <stdio.h>
#include <inttypes.h>//고정너비형 자료형을 %d로 처리하기 위한 헤더파일

int main(){
    int32_t a=-123456;//자료형 int가 32bit로 고정
    uint16_t b=65535;//자료형 unsigned int가 16bit로 고정

    printf("%d %u\n", a,b);

    return 0;
}