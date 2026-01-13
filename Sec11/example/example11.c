/*11. 포인터 호환성*/
#include <stdio.h>

int main(){
    int n=5;
    double x;
    x=n;//no error
    int *p1=&n;
    double *pd=&x;
    //pd=p1 warning

    int *pt;
    int (*pa)[3];//3개짜리 원소를 가진 배열의 포인터를 담을 수 있는 그릇->실제 원소 개수는 1개
    int arr1[2][3]={3,};
    int arr2[3][2]={7,};
    int **p2;

    pt=&arr1[0][0];
    pt=arr1[0];
    //pt=arr1;->warning, pt는 그냥 1차원 포인터이므로 2차원 배열인 arr1을 1차원처럼 담을 수 없다.
    pa=arr1;
    //pa=arr2;->warning
    p2=&pt;//p2는 이중 포인터이므로 포인터 pt의 주소를 담을 수 있다.
    *p2=arr2[0];
    /*
    p2=arr2;->warning
    p2는 이중 포인터, arr2는 2차원 배열의 주소 그러나 *연산을 하면 주소값이 아닌 값이 나오므로 할당하면 안된다.
    */

    /*pointer and const*/
    int x=20;
    const int y=23;//y값을 23으로 고정
    int *p3=&x;
    const int *p4=&y;//가리키는 대상의 값 고정->주소값 고정이 아님 즉, 변수 y의 값을 고정하겠다는 의미
    const int **pp2=&p3;
    //p3=p4->warning

    //*p4=123;
    p4=p3;

    int x2=30;
    int *p5=&x2;
    *pp2=p5;//
    pp2=&p3;
}