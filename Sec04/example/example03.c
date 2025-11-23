/*변수와 상수 예제: 원의 면적 계신*/
#include <stdio.h>

int main(){
    float radius;
    float area;

    printf("Input radius:");
    scanf("%f", &radius);

    area=radius*radius*3.141592;
    printf("area=%f\n",area);

    return 0;
}