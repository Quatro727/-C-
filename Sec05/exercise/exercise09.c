/*printf의 인자(argument 해석 과정)*/
#include <stdio.h>

int main(){
    float f=3.141592f;
    int i=1024;

    printf("%d %f\n", f,i);

    return 0;
}
/*
위 코드에서 정의되지 않은 동작이 발생하는 이유는?
설명해야 되는 내용
-float이 printf로 전달될 때 어떤 일이 발생?
-왜 %d가 float 값을 해석하면 문제가 발생?
-형식 지정자 mismatch가 왜 undefined behavior인지

    printf는 '가변 인자 함수'라서 "기본 인자 승격(default argument promotions)"이 적용된다.
    즉, printf가 float형 데이터를 읽을 대 float이 아닌 double형으로 읽는다. 

    위 코드에서 printf는 %d 지정자를 통해 double(float형) 데이터를 int 방식으로 해석을 하게 된다. 
    애초에 int형과 double형의 데이터 저장 방식은 상이하게 다르다. 즉 메모리에 들어있는 bit값을 읽을 때 int형 데이터를 
    해석하는 방식으로 해석하게 되어 '쓰레기 값'을 출력하게 된다. 다음의 int형 변수를 %f로 받은 경우도 위의 방식과 동일하게 
    동작해 쓰레기 값을 출력하게 된다.

    실제 인수와 형식 지정자가 불일치하면 undefined behavior이다.
    참고로 이런 거 compiler가 잡아주지 않는다. ㅎㄷㄷ
*/