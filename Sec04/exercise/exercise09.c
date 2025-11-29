/*boolean 타입*/
#include <stdio.h>
#include <stdbool.h>

int main(){
    int input;
    _Bool result;

    printf("Input: ");

    scanf("%d",&input);

    if(input>=0){
        result=false;
    }
    else{
        result=true;
    }
    printf("Even? %d\n",result);

    return 0;
}