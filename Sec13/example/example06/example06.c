/*06. 정적 변수의 외부 연결*/
#include <stdio.h>

//static 변수들은 보통 지역 변수들과 달리 프로그램이 알아서 0으로 초기화를 해준다.(가급적 초기화를 그냥 하는 게 좋다.)
int g_int=0;
double g_arr[1000]={0.0,};

int x=5;
int y=1+2;
size_t z=sizeof(int);
//int x2=2*x;->변수의 값을 이용해서 초기화를 진행할 수 없다.

void func(){
    printf("g_int in func(): %d %p\n", g_int, &g_int);
    g_int+=10;
}
void fun_sec();
int main(){
    extern int g_int;
    extern double g_arr[];

    //int g_int=123;

    printf("g_int in main(): %d %p\n", g_int, &g_int);
    g_int+=1;

    func();
    fun_sec();

    return 0;
}