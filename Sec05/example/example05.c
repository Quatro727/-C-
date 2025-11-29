/*05. 기호적 상수와 전처리기*/
#include <stdio.h>
#define PI 3.1411592f//기호 상수 PI
int main(){
    float radius, area, circum;

    printf("Input radius:");

    scanf("%f", &radius);
    
    area=PI*radius*radius;//area=pi*r*
    circum==2.0*PI*radius;//circum=2*.pi*r

    printf("Area=%f\n", area);
    printf("Circumference=%f\n",circum);

    return 0;
}