/*03. 더하기, 빼기, 부호 연산자들*/
#include <stdio.h>

int main(){
    printf("%d\n", 1+2);

    int income, salary, bonus;

    income=salary=bonus=100;//triple assignment
    salary=100;
    bonus=30;

    income=salary+bonus;//l-value vs r-value: 각 값은 l-value이지만 이 둘의 연산한 결과 자체는 l-value가 아니다.

    int tax, takehome;
    tax=20;
    takehome=income-tax;

    int a,b;
    a=-7;
    b=-a;
    b=+a;//+기호는 아무런 기능을 하지 않음

    1.0f+2;//서로 다른 두 개의 자료형의 연산->정수 자료형과 실수 자료형을 연산할 경우 정수 자료형이 실수로 변환되는 promotion이 일어난다.
}