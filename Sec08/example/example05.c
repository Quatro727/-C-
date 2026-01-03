/*05. else와 if 짝짓기*/
#include <stdio.h>

int main(){
    int num;

    scanf("%d", &num);
    //{}를 이용해서 if와 else의 각 statement들의 경계를 명확히 할 것->else는 자기와 가장 가까운 if와 짝을 짓는다.
    if(num>5){
        if(num<10){
            printf("Larger than 5, less than 10\n");
        }
    }
    else{
        printf("Less than or equal to 5\n");
    }
    return 0;
}