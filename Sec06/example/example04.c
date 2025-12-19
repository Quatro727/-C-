/*04. 곱하기 연산자: 복리 계산하는 프로그램*/
#include <stdio.h>

int main(){
    double seed_money, target_money, annual_interest;

    printf("Input seed money: ");
    scanf("%lf", &seed_money);

    
    printf("Input target money: ");
    scanf("%lf", &target_money);

    
    printf("Input annual interset(%%): ");
    scanf("%lf", &annual_interest);


    double fund=seed_money;
    int year_counts=0;

    while(fund<target_money){
        fund=fund+fund*annual_interest/100.0;
        year_counts=year_counts+1;
        printf("Year %d, fund%lf\n", year_counts, fund);
    }

    printf("It takes %dyears\n", year_counts);

    return 0;
}