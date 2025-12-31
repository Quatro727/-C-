/*15. 중첩 반복문-3가지 예제*/
#include <stdio.h>

#define NUM_ROWS1 5
#define NUM_ROWS2 10
#define NUM_ROWS3 12
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main(){
    int r;//row loop
    int c;//character loop
    //EX 01)
    for(r=0;r<=NUM_ROWS1;++r){
        for(c=FIRST_CHAR;c<=LAST_CHAR;++c){
            printf("%c ",c);
        }
        printf("\n");
    }
    printf("\n");
    //EX 02)
    for(r=0;r<=NUM_ROWS2;++r){
        for(c=FIRST_CHAR;c<=FIRST_CHAR+r;++c){
            printf("%c ",c);
        }
        printf("\n");
    }
    printf("\n");
    //EX 03)
    for(r=0;r<NUM_ROWS3;++r){
        for(c=FIRST_CHAR+r;c<FIRST_CHAR+NUM_ROWS3;++c){
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}