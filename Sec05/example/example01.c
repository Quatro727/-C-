#include <stdio.h>

int main(){
    char fruit_name[40];//stores only one character

    printf("What is your favorite fruit?\n");

    scanf("%s",fruit_name);//be careful with &->in  array the name of array is address

    printf("You like %s!\n",fruit_name);

    return 0;
}