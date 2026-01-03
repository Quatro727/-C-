/*04. else if 구문-종합 소득세 계산하기*/
#include <stdio.h>

//표준 과세 구간
#define BASE1  12000000.0
#define BASE2  46000000.0
#define BASE3  88000000.0
#define BASE4 150000000.0
#define BASE5 300000000.0
#define BASE6 500000000.0

//구간별 세율
#define RATE1 (6.0/100.0)
#define RATE2 (15.0/100.0)
#define RATE3 (24.0/100.0)
#define RATE4 (35.0/100.0)
#define RATE5 (38.0/100.0)
#define RATE6 (40.0/100.0)
#define RATE7 (42.0/100.0)

//기본 공제액
#define BASIC_DEDUTION 1500000.0
int main(){
    double income=0.0;
    double tax=0.0;

    scanf("%lf", &income);

    income-=BASIC_DEDUTION;
    if(income<=BASE1){
        tax=income*RATE1;
    }
    else if(income<=BASE2){
        tax=BASE1*RATE1+(income-BASE1)*RATE2;
    }
    else if(income<=BASE3){
        tax=BASE1*RATE1+(BASE2-BASE1)*RATE2+(income-BASE2)*RATE3;
    }
    else if(income<=BASE4){
        tax=BASE1*RATE1+(BASE2-BASE1)*RATE2+(BASE3-BASE2)*RATE3+(income-BASE3)*RATE4;
    }
    else if(income<=BASE5){
        tax=BASE1*RATE1+(BASE2-BASE1)*RATE2+(BASE3-BASE2)*RATE3+(BASE4-BASE3)*RATE4+(income-BASE4)*RATE5;
    }
    else if(income<=BASE6){
        tax=BASE1*RATE1+(BASE2-BASE1)*RATE2+(BASE3-BASE2)*RATE3+(BASE4-BASE3)*RATE4+(BASE5-BASE4)*RATE5+(income-BASE5)*RATE6;
    }
    else{
        tax=BASE1*RATE1+(BASE2-BASE1)*RATE2+(BASE3-BASE2)*RATE3+(BASE4-BASE3)*RATE4+(BASE5-BASE4)*RATE5+(BASE6-BASE5)*RATE6+(income-BASE6)*RATE7;
    }
    printf("Tax is %lf\n",tax);
    printf("Your income is %lf\n", income-tax);

    return 0;
}