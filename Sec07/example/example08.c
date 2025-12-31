/*08. for 반복문*/
#include <stdio.h>

int main(){

    int i;
    
    for(i=1; i<10;i++){
        printf("%d\n", i);
    }
    return 0;
}
/*
<for 반복문의 실행 흐름>
01. i값 초기화
02. for 반복문 진입 조건 확인
03. true 이면 for 반복문에 해당하는 문장 실행 아니면 for 반복문 탈출
04. for  반복문 실행 후 i값 변화
*/