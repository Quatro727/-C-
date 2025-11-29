/*printf의 변환 지정자*/
#include <stdio.h>

int main(){
    int a=255;
    double b=12.34567;
    char c='Q';
    unsigned int d=4000;

    printf("%x\n",a);
    printf("%.2f\n", b);
    printf("%hhd\n",c);
    printf("%08u\n",d);

    return 0;
}
/*
int a=255->16진수 소문자로 출ㄺ
double d=12.34567->소수점 이하 2자리까지만 출력
char c='Q'->ASCII 정수값 출력
unsigned int d=4000->8자리 형식에 맞춰 출력 빈칸은 0으로 채움
*/