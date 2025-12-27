/*11. 함수의 인수와 매개변수*/
#include <stdio.h>
//prototype function->함수 원형
void draw(int n);
//메인 함수
int main(){
    int i=5;
    char c='#';
    float f=7.1f;
    //함수 호출 부분
    draw(i);//argument는 값이다. 우리가 변수를 사용해서 함수를 호출하지만 결국 함수의 매개변수로 전달되는 것은 값이므로
    draw(c);
    draw(f);

    return 0;
}
//함수 정의
void draw(int n)//parameter n은 변수->int형 값들을 받아서 이 값을 이용해 함수를 실행하므로
{
    int i=0;
    while(i<n){
        printf("*");
        i++;
    }
    printf("\n");
}