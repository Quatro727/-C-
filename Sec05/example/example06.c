/*06. 명백한 상수들(Manifest Constants)*/
#include <stdio.h>
#include <limits.h>//각 자료형들의 최대 정수나 최소 정수 등 자료형의 범위를 미리 정의해 놓은 헤더 파일
#include <float.h>

#define PI 3.141592f//PI를 기호상수로 미리 정의

int main(){
    printf("PI=%f\n", PI);
    printf("Biggest int: %d\n", INT_MAX);//가장 큰 int의 값
    printf("One byte in this system: %dbits\n", CHAR_BIT);//이 시스템에서 한 byte의 크기
    printf("Smallest normal float: %e\n", FLT_MIN);//float 자료형이 가질 수 있는 가장 작은 값

    return  0;
}