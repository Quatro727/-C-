/*06. 다양한 문자열 함수들*/
#include <stdio.h>
#include <string.h>

int main(){
    /*strlen(): 문자열의 길이를 반환하는 함수*/
    char msg[]="Just,""do it";
    puts(msg);
    printf("Length %d\n", strlen(msg));

    /*strcat(), strncat(): 문자열을 이어주는 함수*/
    char str1[100]="First String";
    char str2[]="Second String";
    strcat(str1,", ");
    strcat(str1, str2);
    //strncat(str1, str2,2);
    puts(str1);

    /*strcmp and strncmp(): 문자열을 비교하는 함수들. 같으면 0, ASCII 코드상 앞의 문자가 작으면 -1, 크면 1을 출력*/
    printf("%d\n", strcmp("A", "A"));
    printf("%d\n", strcmp("A", "B"));
    printf("%d\n", strcmp("B", "A"));
    printf("%d\n", strcmp("Hello", "Hello"));
    printf("%d\n", strcmp("Apple", "Apples"));
    printf("%d\n", strcmp("Fruits", "Fruit"));

    /*strcpy() and strncpy(): source의 문자열을 destination 문자열로 복사하는 함수*/
    char dest[100]="";
    char source[]="Start Programming!";

    strcpy(dest,source);//source의 문자열을 하나 하나 null 문자가 나올 때까지 직접 destination으로 복사한다.
    strncpy(dest, source, 5);//source의 문자열을 5글자만 dest로 복사(이때 null문자가 감지되지 않아 5글자가 아닌 전체 문자열이 다 복사될 수도 있다.)
    //strcpy(dest, source+6);//pointer 연산을 이용해서 복사의 시작 위치를 변경할 수도 있다.
    puts(dest);

    return 0;
}
