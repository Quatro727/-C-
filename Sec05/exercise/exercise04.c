/*04. strlen() 함수의 동작 방식*/
#include <stdio.h>
#include <string.h>//strlen()

int main(){
    char str[]="hi\0hello";
    printf("%zu\n", strlen(str));
    printf("%zu\n", sizeof(str));

    return 0;
}
/*
01)위 코드의 예상 출력 결과?
02) sizeof(str)은 얼마인가?
    널문자 '\0'은 해당 문자의 마지막임을 알리는 문자이다. 위의 코드에서 배열 str 자체에는 문자얄 "hi\0hello"가 
    저장되어 있지만 실행을 하고 strlen이 해당 배열을 읽을 때에는 널문자 '\0'까지 읽고 그 이전의 문자열들의 문자의
    개수들만 count한다. 
*/