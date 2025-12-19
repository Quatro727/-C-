/*07.나머지 연산자*/
#include <stdio.h>
//초를 입력해 분,시간 단위로 환산해 출력하기
int main(){
    int seconds=0, minutes=0, hours=0;

    printf("Input seconds: ");
    scanf("%d", &seconds);

    hours=seconds/3600;
    minutes=(seconds%3600)/60;
    seconds=(seconds%3600)%60;

    printf("%dhours %dminutes %dseconds\n",hours, minutes, seconds);

    return 0;
}
//음수를 나누기나 나머지 연산자로 연산했을 때의 경우
/*
int div, mod;

div=11/5;//2
mod=11%5;//1
printf("div=%d, mod=%d\n",div, mod);

div=11/-5;//-2
mod=11%-5;//1
printf("div=%d, mod=%d\n",div, mod);

div=-11/5;//-2
mod=-11%5;//-1
printf("div=%d, mod=%d\n",div, mod);

div=-11/-5;//2
mod=-11%-5;//-1
printf("div=%d, mod=%d\n",div, mod);
*/