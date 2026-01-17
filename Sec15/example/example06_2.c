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

double sum(struct fortune my_fortune);

int main(){
    struct fortune my_fortune={
        "Wells-Fargo",
        4032.27,
        "JPMorgan Chase",
        8543.94
    };
    printf("Total: $%.2f.\n", sum(&my_fortune));
    return 0;
}
double sum(struct fortune *mf){
    return mf->bank_saving+mf->fund_invest;
    //return mf.bank_saving+mf.fund_invest
}