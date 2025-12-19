/*01. 반복 루프 개요*/
#include <stdio.h>

int main(){
    //01. 반복 변수 선언 및 초기화
    int n=1;
    //02. 반복문 while문 조건 설정: n이 11미만인 조건을 만족하는 동안 printf()문 실행
    while(n<11){
        printf("%d\n", n);
        //반복 변수 변화 조건 설정: 설정을 안할 시 무한 루프문이 생성
        n+=1;
    }

    return 0;
}