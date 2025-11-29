/*07. printf() 함수의 변환 지정자들(Conversion Specifiers)*/
/*
<printf()함수의 기본적인 사용법>
printf(제어 문자열, item1, item2,.... )->여기서 item은 변수나 상수 또는 표현식이 될 수 있다.
Ex)
int a=1;
printf("%d+%d=%d",1,a,a+1);
<형식 지정자(format speifier)>
%[flags]width][.precison][length]specifier
Ex)
printf("%+10.5hi", 256);
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    double d=3.1415926535897932384626433832795028841971693993751058209749445f;

    printf("%c\n", 'A');
    printf("%s", "I love you\n");
    printf("Even if there's a small chance, \
we owe this to everyone who's not i in this room to try.\n");

    printf("\n");
    printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);//오버플로우 발생
    printf("%u %u %u\n", 1024 -1, UINT_MAX);

    printf("\n");
    printf("%f %f %f\n", 3.141592f, d, d);//실수 출력
    printf("%a %A\n", d, d);//
    printf("%e %E\n", d, d);//과학적 표기법을 이용해 실수 출력하기

    printf("\n");
    printf("%g %g\n", 123456.789, 1234567,89);//형식지정자 사용할 때 %e를 사용할 지 %f를 사용할 지 자동으로 결정
    printf("%G %G\n", 123456.789, 1234567.89);
    printf("%g %g\n",0.00012345, 0.000012345);
    printf("%G %G\n", 0.00012345, 0.000012345);

    printf("\n");
    printf("%o\n", 9);//8진수로 변환해 출력
    printf("%p\n", &d);//pointer-of operator

    printf("\n");
    printf("%x %X\n", 11,11);//16진수로 변환해 출력
    printf("%%\n", d);//기호 '%' 출력하기

    printf("\n");
    printf("%9d\n",12345); //출력할 때 최소 9자리에 맞춰서 출력. 남는 곳은 빈 칸으로 채움
    printf("%09d\n", 12345);//빈 칸을 0으로 채워서 9자리 출력
    printf("%.2f\n",3.141592);//소수점 이하 자리를 2자리만 출력
    printf("%.20f %.20lf\n", d, d);//double의 자료형의 메모리 크기는 제한되어 잇으므로 담지 못하는 것은 잘려나간다.

    printf("\n");
    int n_printed=printf("Counting!");//pritnf() 함수도 return값이 존재 printf() 함수의return 값은 출력한 글자의 개수
    printf("%u\n", n_printed);

    return 0;
}