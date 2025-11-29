/*sizeof와 배열 크기*/
#include <stdio.h>

int main(){
    char a[]="cat";
    char b[10]="cat";
    char *c="cat";

    printf("Size of a=%d\n",sizeof(a));
    printf("Size of b=%d\n",sizeof(b));
    printf("Size of c=%d\n",sizeof(c));

    return 0;
}
/*
01) sizeof(a), size0f(b), sizeof(c)의 값들은?
02)strlen(a)와 strlen(b)의 차이
    a[]="cat";->{'c','a','t','\0'}(배열의 길이를 빈 칸으로 설정해 미리 길이를 저장하지 않고 저장하는 문자열로 정하게 설정)
    b[10]="cat";->{'c','a','t','\0',0,0,0,0,0,0}
    따라서 sizeof(a)의 값은 배열 전체 길이(문자와 널문자)->4
    sizeof(b)는 선언된 배열의 길이 그대로 10이다.

    sizeof(c)에서 c는 포인터 변수로 선언되었으므로 포인터 크기를 의미한다. 64bit 환경에서는 8이다.

    strlen(a)=3, strlen(b) 모두 3인데, strlen()은 문자의 개수를 count하는 함수이다.그리고 널문자 \0은 count하지 않는다.
*/