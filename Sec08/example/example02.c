/*02. 표준 입출력함수 getchar(), putchar()*/
#include <stdio.h>//getchar(),putchar()

int main(){
    /*
    //EX 01) intro
    char ch;
    ch=getchar();
    putchar(ch);
    */
    /*
    //EX 02)연속된 문자들을 처리
    char ch1;
    ch1=getchar();

    while(ch1!='\n'){
        putchar(ch1);
        ch1=getchar();
    }
    putchar(ch1);
    */
   /*
    //EX 03) 특정 문자 filtering하기
    char ch2;
    while((ch2=getchar())!='\n'){
        if(ch2=='f'||ch2=='F'){
            ch2='*';
        }//입력된 문자들 중 f나 F는 *로 교체하기 
        putchar(ch2);
    }
    putchar(ch2);
    */
   /*
   //EX 04) 입력된 문자가 숫자면 '*'로 교체해 출력하기
   char ch3;
   while((ch3=getchar())!='\n'){
        if(ch3>='0'&&ch3<='9'){
            ch3='*';
        }
        putchar(ch3);
   }
   putchar(ch3);
    */
   //EX 05)대문자->소문자, 소문자->대문자
   char ch4;
   while((ch4=getchar())!='\n'){
        if(ch4>='a'&&ch4<='z'){
            ch4-='a'-'A';//'a'=97, 'A'=65
        }
        else if(ch4>='A'&&ch4<='Z'){
            ch4+='a'-'A';
        }
        putchar(ch4);
   }
   putchar(ch4);

    return 0;
}