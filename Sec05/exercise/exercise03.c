/*문자열의 메모리 구조*/
#include <stdio.h>
#include <string.h>//strlen()
int main(){
    char s[]="Programming!";  

    printf("Number of string=%d\n",strlen(s));
    printf("Length of array=%d\n",sizeof(s));

    return 0;
}
/*
01) 위와 같이 선언된 배열의 실제 저장 크기와 메모리 구성을 설명하시오
-배열의 총 크기
-마지막 문자
-메모리 연속성에 대해 기술하시오

문자열 리터럴은 자동으로 마지막에 널문자 '\0'이 붙는다. 여기가 마지막 문자임을 알리기 위해서이다.
배열은 문자들이 연속된 메모리 공간에 존재한다.

위의char s[]="Programming!";
배열 s에 들어 있는 문자의 개수는 12이므로 배열의 크기는 널문자 '\0'을 포함해 13이다.
메모리에는 다음고 같이 연속적으로 저장된다.
P r o g r a m m i n g ! \0
*/