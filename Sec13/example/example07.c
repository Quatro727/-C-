/*07. 정적 변수의 내부 연결*/
#include <stdio.h>

//static이라는 키워드를 사용해 변수 g_int가 오로지 이 파일 안에서만 사용이 가능하게 만들 수 있다.
static int g_int=123;
//외부 파일에서 사용이 불가능(링킹 과정에서 에러가 일어난다.)

void fun();
void fun_second();
void fun_third();

int main(){
    fun();
    fun_second();
    fun_third();

    return 0;
}
void fun(){
    extern int g_int;

    g_int+=1;
    printf("g_int in fun(): %d %p\n", g_int, &g_int);
}