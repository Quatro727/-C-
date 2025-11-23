/*함수 만들기*/
#include <stdio.h>

void say_hello();//함수 원형->미리 선언하기 (정의는 안함)

int main(){
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    say_hello();
    return 0;
}
//함수의 return 타입이 void이면 return 값을 설정하지 않을 수 있다.
void say_hello(){
    printf("Hello World\n");
}