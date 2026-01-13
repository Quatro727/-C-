/*06. 입력값 확인하기*/
#include <stdio.h>

long get_long();

int main(){
    printf("Input integer between 1 and 100\n");

    while(1){
        long num=get_long();

        if(num>1&&num<100){
            printf("Good!\n");
            break;
        }
        else{
            printf("Wrong input\n");
            printf("Please try again....\n");
        }
    }
    return 0;
}
long get_long(){
    printf("Please input an integer and press enter\n");

    long input;
    char c;

    while(scanf("%ld", &input)!=1){
        printf("Your input- ");
        while((c=getchar())!='\n'){
            putchar(c);
        }
        printf(" - It's not a integer..Input again..\n");
    }
    printf("Your input  %ld is an integer. Thank u!!\n", input);

    return input;
}