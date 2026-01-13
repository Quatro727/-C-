/*01. 함수 원형*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define NAME "Jeong-in Rhee"
#define ADDRESS "Seoripul-4 36"
#define WIDTH 25

//함수 프로토타입:compile 단계에서는 함수의 프로토타입만 있어도 compile이 진행이 됨
void print_center_str(char str[]);
void print_multiple_chars(char c, int n_stars, bool print_newline);

int main(){
    print_multiple_chars('*', WIDTH, true);

    print_center_str(NAME);
    print_center_str(ADDRESS);
    print_center_str("Nice to meet u");

    print_multiple_chars('*', WIDTH, false);

    return 0;
}

//각 함수의 구체적인 동작 방식 정의: linking 과정에서 필요
void print_center_str(char str[]){
    int n_blanks=0;
    n_blanks=(WIDTH-strlen(str))/2;
    print_multiple_chars(' ', n_blanks, false);
    printf("%s\n", str);
}
void print_multiple_chars(char c, int n_stars, bool print_newline){
    for(int i=0;i<n_stars;i++){
        printf("%c",c);
    }
    if(print_newline)
        printf("\n");
}