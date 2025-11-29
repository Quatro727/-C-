/*정수형과 실수형 입력받기*/
#include <stdio.h>

int main(){
    float num2;
    int num1;

    printf("Input:");

    scanf("%i %f", &num1, &num2);

    printf("Ouput:\nInteger=%i\nFloat= %f",num1, num2);

    return 0;
}