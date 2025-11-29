/*다양한 정수형의 크기 출력하기*/
#include <stdio.h>

int main(){
    printf("Size of char type=%dbytes\n",sizeof(char));
    printf("Size of short type=%dbytes\n",sizeof(short));
    printf("Size of int type=%dbytes\n",sizeof(int));
    printf("Size of long type=%dbytes\n",sizeof(long));
    printf("Size of long long type=%dbytes\n",sizeof(long long));
    printf("Size of unsigned int type=%dbytes\n",sizeof(unsigned int));
    printf("Size of float type=%dv\bytes\n",sizeof(float));
    printf("Size of double type=%dbytes\n",sizeof(double));

    return 0;
}