/*15. 포인터 변수의 크기*/
#include <stdio.h>

int main(){
    char a=1;
    float b=2;
    double c=3;

    char *ptr_a=&a;
    float *ptr_b=&b;
    double *ptr_c=&c;

    printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));//1 4 8
    printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));//4 4 4
    printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));//4 4 4
    
    return 0;
}
//포인터 변수는 주소값을 가지는 값->실제 메모리 공간의 범위와 혼동하지 말 것
//x86에서는 32비트, x64에서는 64비트 주소 체계를 가진다. 따라서 어떤 주소 체계이냐에 따라 포인터 변수의 크기가 달라진다.