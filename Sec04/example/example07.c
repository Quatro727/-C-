/*문자형도 정수형 자료형이다.*/
#include <stdio.h>

int main(){
    char code1='A';//아스키 코드에 의해 code1에는 65가 저장
    char code2=65;//아스키 코드에 의하면 문자 A

    printf("code1=%c\n",code1);//문자 A 출력
    printf("code2=%c\n",code2);//문자 A 출력
    printf("%c",code1+1);//아스키 코드에 의하면 정수 66에 해당하는 문자 B출력

    return 0;
}