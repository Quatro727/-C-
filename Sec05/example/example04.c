#include <stdio.h>
#include <string.h>//strlen() 함수를 위한 라이브러리
int main(){
    char str1[100]="Hello";
    char str2[]="Hello";
    char str3[100]=" \0";
    char str4[100]="\n";

    //strlen()함수는 sizeof() 함수와 다르게 문자열에 있는 문자의 개수를 count 해주는 함수이다.
    //사용하기 위해서는 string.h  파일로 전처리가 필요하다.
    printf("%zu %zu\n",sizeof(str1), strlen(str1));
    printf("%zu %zu\n",sizeof(str2), strlen(str2));
    printf("%zu %zu\n",sizeof(str3), strlen(str3));
    printf("%zu %zu\n",sizeof(str4), strlen(str4));
    
    return 0;
}