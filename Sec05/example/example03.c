#include <stdio.h>

int main(){
    /*01. 숫자의 배열 */
    int a=1;
    int int_arr[10]={0,1,2,3,4,5,6,7,8,9};//숫자의 배열 초기화

    //배열의 원소에 index를 이용해 접근하기
    printf("%i %i %i\n",int_arr[0], int_arr[1], int_arr[9]);

    /*02. 문자의 배열 */
    char c='a';
    char str1[10]="Hello";//null character가 마지막에 저장이 되므로 실제로는 9개의 문자만 저장 가능
    char str2[10]={'H', 'i'};

    printf("%c\n",c);
    //printf()는 문자열을 출력하다가 null character을 만나면 null부터 그 이후의 값들은 출력하지 않는다.
    printf("%s\n", str1);
    printf("%s\n",str2);

    //문자열을 아스키 코드를 이용해 변환해 출력을 하면 뒤의 3가지 값들이 모두 출력이 된다.
    printf("%hhi %hhi %hhi %hhi %hhi\n", str2[0], str2[1], str2[2], str2[3], str2[4]);

    //char str2[10]="Hello, World",//정적 배열을 선언 시 선언된 크기보다 더 큰 공간을 사용하려는 경우 에러가 발생한다.
    char str3[20]="Hello, \0World";//null character을 중간에 넣었을 경우
    printf("%s\n",str3);
    printf("%c\n", str3[10]);
    return 0;
}