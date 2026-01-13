/*04. 사용자 인터페이스*/
#include <stdio.h>
#include <ctype.h>

int main(){
    int cnt=0;

    while(1){
        printf("Current count is %d. Continue?(y/n)\n",cnt);

        int c=getchar();

        if(tolower(c)=='n'){
            break;
        }
        else if(tolower(c)=='y'){
            cnt++;
        }
        else{
            printf("Please input y or n\n");
        }
        while(getchar()!='\n')
            continue;
    }
    return 0;
}