/*06. 구조체를 함수로 전달하는 방법*/
#include <stdio.h>
#include <string.h>

#define FUNDLEN 50

struct fortune{
    char bank_name[FUNDLEN];
    double bank_saving;
    char fund_name[FUNDLEN];
    double fund_invest;
};

double sum(double, double);

int main(){
    struct fortune my_fortune={
        "Wells-Fargo",
        4032.27,
        "JPMorgan Chase",
        8543.94
    };
    printf("Total: $%.2f.\n", sum(my_fortune.bank_saving, my_fortune.fund_invest));
    return 0;
}
double sum(double x, double y){
    return x+y;
}