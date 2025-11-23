/*변수와 자료향 계산: 태양빛 도달 시간 계산하기*/
#include <stdio.h>

int main(){
    double light_speed=300000.0;
    double distance=149600000.0;

    double time=0.0;

    time=distance/light_speed;
    time/=60.0;//초를 분으로 환산
    
    printf("time to arrive earth=%fmin\n",time);

    return 0;
}