/*02. 변수의 영역과 연결 상태 지속 기간*/
#include <stdio.h>
/*
<변수의 영역(가시성)>
-블록, 함수, 함수 원형, 파일
*/

//global variable->file 영역에 선언됨. 해당 파일 어디에서든 사용이 가능
int g_i=123;
int g_j;

//function 영역에서 사용
void func1(){
    g_i++;
}
void func2(){
    g_i+=2;
}
int main(){
    int local=1234;

    func1();
    func2();

    printf("%d\n", g_i);
    //초기화 되지 않은 변수 g_j->초기화 되지 않은 정적 변수 및 전역 변수들은 bss라는 메모리 공간에 저장이 되고 
    //프로그램이 시작될 때 해당 영역에 속한 변수들은 모두 0으로 초기화된다.
    printf("%d\n", g_j);
    printf("%d\n", local);

    return 0;
}