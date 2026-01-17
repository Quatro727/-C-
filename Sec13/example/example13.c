/*13. 자료형 한정자들 const, volatile, restrict*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const int n=6;

    typedef const int zip;
    const zip q=8;
    //const must be initialized

    float f1=3.14f, f2=1.3f;
    const float *pf1=&f1;
    //*pf1=5.0f//error
    pf1=&f2;

    //volatile
    //컴파일러가 모르는 사이 최적화를 위해 변수가 바뀌는 상황을 방지하기 위해 선언
    volatile int vi=1;
    volatile int *pvi=&vi;

    //restrict
    //데이터 오브젝트에게 접근하는 것이 이거 하나임을 명시하는 것
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *par=arr;

    int *__restrict restar=(int*)malloc(10*sizeof(int));
    //동적할당 받은 메모리를 오로지 포인터 restar를 통해서만 접근하겠다는 의미 
    if(!restar)exit(1);

    arr[0]+=3;
    par[0]+=5;
    //par[0]+=8;

    restar[0]+=3;
    restar[0]+=5;

    free(restar);
    return 0;
}