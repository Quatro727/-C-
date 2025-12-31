/*02. 대입 연산자와 몇 가지 용어들*/
#include <stdio.h>

int main(){
    //수정이 불가능한 L-value
    const int TWO=1024;
    //L-value a,b,c 선언
    int a;
    int b;
    int c;
    //대입 연산자를 통해 R-value를 L-value에 대입
    a=42;
    b=a;
    c=TWO*(a+b);// L-value a와 b는 여기서 임시적으로 R-value의 역할을 수행한다. 

    return 0;
}
//L-value와 R-value의 차이점은 메모리 공간을 배정받았는가의 유무이다.
//단순히 보자면 l-value는 left value이고 r-value는 right value로 파악하면 된다.