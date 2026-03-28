/*15. 열거형(Enumeration)*/
#include <stdio.h>

/** Motivation
int c = 0; // red:0, orange:1, yellow:2, green:3, ...
if (c == 0)
	printf("red");
else if(c == 1)
	printf("orange");
else if (c == 2)
	printf("yellow");	
... ...
*/

/**
#define RED		1
#define ORANGE	2
#define YELLOW  3

int c = YELLOW;
if (c == YELLOW)
	printf("yellow");
*/
/*
기존의 문법 방식으로는 code가 길어지고 각 변수의 값을 기억해야 하는 부담 
전처리지시자의 경우 전처리기 지시자가 code를 확인해주는 것이 아닌 그냥 무지성으로 문자를 숫자로만 바꾸므로 compile time에 error가 발생할 수 있음
그리고 compiler가 해당 code의 문제점을 정확하게 짚어주지 못함 그냥 단순히 여기 근처에서 error가 발생했다고만 말함

EX)
#define PI 3.141592
......
int num=PI;->타입 불일치로 인한 error 근데 compiler는 여기 근처에서 error가 발생했다고만 알림 그로 인해 디버깅의 난이도 상승
*/

int main(){
    //열거형은 정수 상수에게 기호적인 이름을 붙여주는 것으로 해당 열거형의 각 요소들을 기호상수로 표현했지만 정수처럼 사용할 수 있음
    //열거형은 사용할 때 정수처럼 사용한다.
    enum spectrum {red, orange, yellow, green, blue, violet};

    //열거형 타입의 변수 선언
    enum spectrum color;

    color=blue;
    if(color==yellow)
        printf("yellow");//열거형은 겉으로는 문자열이지만 실제로는 정수 취급함을 명심
    for(color=red;color<=violet;color++){
        printf("%d\n", color);
    }
    printf("red=%d, orange=%d\n", red, orange);

    enum kids {jacket, dash, snoopy, nano, pitz};//0 1 2 3 4
    
    enum kids my_kid=nano;//3
    printf("%d %d\n", my_kid, nano);// 3 3

    enum levels {low=300, medium=600, high=2000};//열거형 요소에 값을 지정할 수도 있음

    int score=800;
    if(score>=high){
        printf("high score!\n");
    }
    else if(score>medium){
        printf("Good job\n");
    }
    else if(score>low){
        printf("Not bad\n");
    }
    else{
        printf("Try harder\n");
    }

    enum pets {dog, cat=100, lion, tiger, pi, cow};
    printf("%d\n", dog);//0
    printf("%d\n", cat);//100

    return 0;
}