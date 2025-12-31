/*04. 관계 연산자*/
#include <stdio.h>
#include <math.h>//fabs()

int main(){
    //int n=0;
    //while(n++<5)
    //{
    //    printf("%d\n", n);
    //}
    //printf("\n");

    //char c='A';
    //while(c!='Z')
    //{
    //    printf("%c \n",c++);
    //}

    const double PI=3.141592653589793238462643;
    double guess=0.0;

    printf("Input PI: ");
    scanf("%lf",&guess);

    //while(guess!=Pi)->실제 실수끼리의 비교에서는 특정 예외 상황을 제외하고는 잘 쓰이지 않는다. 정확하게 값이 같아야 하므로
    while(fabs(guess-PI)>0.0001)
    {
        printf("Fool! Try again\n");
        printf("Input PI: ");
        scanf("%lf", &guess);
    }
    printf("Good!");

    return 0;
}