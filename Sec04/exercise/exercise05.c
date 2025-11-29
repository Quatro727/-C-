/*scanf() 함수에서 사용하는 형식지정자*/
#include <stdio.h>

int main(){
    int a;
    char b;
    float c;

    printf("Input:");

    scanf("%d %c %f",&a, &b, &c);

    printf("%d\n%c\n%f\n",a,b,c);

    return 0;
}