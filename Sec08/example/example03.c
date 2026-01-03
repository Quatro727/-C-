/*03. ctype.h 함수들*/
#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;

    while((ch=getchar())!='\n'){
        //islower()과 toupper()
        if(islower(ch))
            ch=toupper(ch);
        //isupper()과 tolower()
        else if(isupper(ch))
            ch=tolower(ch);
        //isdigit()
        if(isdigit(ch)!=0)
            ch='*';
        putchar(ch);
    }
    putchar(ch);

    return 0;
}