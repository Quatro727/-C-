/*scanf 함수 예제: 환율 적용*/
#include<stdio.h>

int main(){
    float dollar=0.0;
    float won=0.0;

    printf("Input won:");
    scanf("%f",&won);

    dollar=won*0.00068;

    printf("%fwon is %fdollar\n",won,dollar);

    return 0;
}