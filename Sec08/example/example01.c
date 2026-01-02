/*01. if 분기문*/
#include <stdio.h>

int main(){
    int num;

    printf("Input number: ");
    scanf("%d", &num);
    //입력받은 수의 홀짝 여부 판단->if-else문으로 구현
    if(num%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}