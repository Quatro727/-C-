/*08. 단어 세기 예제*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '.'

int main(){
    char c;
    int n_words=0;
    int n_lines=0;
    int n_chars=0;

    printf("Enter text:\n");

    while((c=getchar())!=STOP){
        if(c==' '||c=='\n'){
            n_words+=1;
        }
        if(c=='\n'){
            n_lines+=1;
        }
        n_chars+=1;
    }

    printf("Characters=%d, Words=%d, Lines=%d\n",n_chars-n_words, n_words+1, n_lines+1);
    return 0;
}
/*
while((c=getchar())!=STOP){
    if(!isspace(c)){
        n_chars++;
    }
    if(!isspace(c)&&!line_flage){
        n_lines++;
        line_flag=true;
    }
    if(c=='\n'){
        line_flag=false;
    }
    if(isspace(c)){
        words_flag=false;
    }
    if(!isspace(c)&&!words_flag){
        n_words++;
        words_flag=true;
    }

}
*/
