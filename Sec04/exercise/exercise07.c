/*부동 소수점의 정밀도*/
#include <stdio.h>

int main(){
    float a=0.1f;
    float b=0.2f;
    float c=a+b;

    printf("a=%.2f,b=%.2f,c=%.2f\n", a,b,c);
    printf("a=%.20f\nb=%.20f\nc=%.20f\n", a,b,c);//소수점 20자리까지 확인하면 정확하게 나오지 않음
    
    return 0;
}