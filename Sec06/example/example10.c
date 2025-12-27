/*10. 자료형 변환(type conversions)*/
#include <stdio.h>

int main(){
    /*promotion*/
    //정수형에서의 promotion
    //short s=64;
    //int i=s;
    //실수형에서의 promotion
    //float f=3.142592f;
    //double d=f;

    /*demotion*/
    //d=1.25;
    //f=1.25;
    //f=1.123;

    /*연산에서의 형 변환*/
    //d=f+1.234;
    //f=f+1.234;

    /*casting: 형 변환 연산*/
    //d=(double)3.14f;
    //i=1.6+1.7;
    //i=(int)1.6+(int)1.7;

    char c;
    int i;
    float f;

    f=i=c='A';

    printf("%c %d %f\n", c, i, f);

    c=c+2;//67
    i=f+2*c;//65.0f+c*67
    printf("%c %d %f\n", c, i, f);

    c=1106;//demotion 발생->char형을 벗어나는 크기이므로 절삭되서(1106=10001010010에서 딱 1byte 부분만 취하면 01010010=82가 된다.) 최종적으로 82가 c에 남음
    printf("%c\n", c);

    c=83.99;//demotion 발생->실수형을 char형으로 변환, 소수점 부분이 절삭됨
    printf("%c\n", c);

    return 0;
}