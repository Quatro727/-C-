/*07.논리 연산자*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define PERIOD '.'

int main(){
    //Ex 01) 논리 연산자 ||,&&, !
    bool test1=3>2||5>6;//true
    bool test2=3>2&&5>6;//false
    bool test3=!(5>6);//true->5<=6

    printf("%d %d %d\n", test1, test2, test3);
    
    //EX 02)입력한 문자의 개수 세기
    char ch;
    int cnt=0;

    while((ch=getchar())!=PERIOD){
        if(ch!='\n'&&ch!=' '){
            cnt++;
        }
    }
    pritnf("%d\n",cnt);
    
    //EX 03)Short circuit evaluation
    int temp=(1+2)*(3+4);
    printf("%d\n", temp);//21

    if(temp==0&&(++temp==1024)){
    }
    printf("%d\n", temp);//21

    return 0;
}