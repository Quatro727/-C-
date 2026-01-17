#include <stdio.h>
#include <stdlib.h>

struct my_data{
    int a;
    char c;
    float arr[2];
    //float *arr
};
int main(){
    struct my_data d1={1234, 'A',};
    //d1.arr=(float*)malloc(sizeof(float)*2);
    d1.arr[0]=1.1f;
    d1.arr[1]=2.2f;

    printf("%d %c %lld\n", d1.a, d1.c, d1.arr);
    printf("%f %f\n", d1.arr[0], d1.arr[1]);
    printf("%lld %lld\n", &d1.arr[0],&d1.arr[1]);

    //구조체에 구조체를 대입하면 값을 복사해준다.
    //동적 할당 메모리를 이용해 메모리를 할당할 경우->메모리 주소를 복사해 동일한 메모리를 공유하는 형태가 된다.
    struct my_data d2=d1;

    printf("%d %c %lld\n", d2.a, d2.c, d2.arr);
    printf("%f %f\n", d2.arr[0], d2.arr[1]);
    printf("%lld %lld\n", &d2.arr[0],&d2.arr[1]);

    return 0;
}