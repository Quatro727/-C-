/*부동 소수점의 한계*/
#include <stdio.h>
#include <float.h>

int main(){
    //round off errors
    float a,b;
    a=1.0E20f+1.0f;
    b=a-1.0E20f;
    printf("%f\n",b);//0 출력->너무 범위 차이가 큰 경우 작은 수를 그냥 없애버린다.

    //round off errors
    float num1=0.0f;
    for (int i=0; i<100;i++){
        num1+=0.01f;
    }
    printf("num1=%f\n",num1);//1이 아닌 0.999999...출력. 애초에 2진 주동 소수점 형은 0.01을 정확하게 표현을 못하고 0.0099999..으로 표현한다. 결국 오차가 누적되어서 1이 안 나옴
   
    //overflow
    float max=FLT_MAX;//float 자료형이 가질 수 있는 MAX값
    max*=100.0f;
    printf("max=%c\n",max);//inf 즉, infinite가 추력된다. 너무 커서 모르겠다는 의미. 자료형의 범위를 넘어서는 값은 제댈 효현을 못한다.
    
    //underlfow
    float f=FLT_MIN;//flaot 자료형이 가질 수 있는 min값
    f/=100.0f;
    printf("f=%c\n",f);//0.000이 출력 너무 작은 값은 계산 도중에 그냥 버려버린다.

    return 0;
}