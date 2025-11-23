/*고정 너비형 정수 자료형 예제*/
#include<stdio.h>
#include<inttypes.h>//int32를 형식지정장 %d로 받을 수 있게 전처리
int main(){
    int32_t i32=1004;

    printf("me32=%d\n",i32);
    printf("size of i32: %d",sizeof(i32));

    return 0;
}