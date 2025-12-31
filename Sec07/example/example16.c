/*16. 배열&런타임 에러*/
#include <stdio.h>
#define NUM_DAYS 365//기호적 상수, 전처리 과정에서 NUM_DAYS->365로 복사, 붙여넣기 실행

int main(){
    //EX 01)
    char my_chars[]="Hello, World!";//배열 길이를 직접 지정하지 않아도, 문자의 개수+null character만큼의 메모리가 할당이 된다.

    int daily_temparature[NUM_DAYS];
    double stack_prices_history[NUM_DAYS];

    printf("%zd\n", sizeof(stack_prices_history));//2920(bytes)
    printf("%zd\n", sizeof(double)*NUM_DAYS);//2920(bytes)
    printf("%zd\n", sizeof(stack_prices_history[0]));//8(bytes)
    //EX 02) 배열 그리고 runtime error
    int my_numbers[5];

    my_numbers[0]=1;//offset, subscripts->index는 첫 메모리 주소로부터 얼만큼(단위는 자료형의 크기) 떨어져 있는가
    my_numbers[1]=3;
    my_numbers[2]=4;
    my_numbers[3]=2;
    my_numbers[04]=1024;

    //scanf("%d", &my_number[0]);
    scanf("%d", my_numbers);//배열의 이름 자체가 배열의 첫 번째 주소를 가지고 있다.

    printf("%d\n", my_numbers[0]);
    printf("%d\n", my_numbers[1]);
    printf("%d\n", my_numbers[2]);
    printf("%d\n", my_numbers[3]);
    printf("%d\n", my_numbers[4]);

    /*Runtime error*/
    my_numbers[5]=123;//선언한 배열의 크기를 넘어서는 범위의 값을 설정하고자 함->compile 단계에서는 잡히지 않음(out of bound)
    /*Compile error*/
    //my_number=7;

    return 0;
}