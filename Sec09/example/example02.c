/*02. 파일의 끝(EOF: End of File)*/
#include <stdio.h>

int main(){
    int c;
    while((c=getchar())!=EOF){
        putchar(c);
    }
    return 0;
}