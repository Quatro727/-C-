#include <stdio.h>

int main(){
    int var_name=3;//'var_name'이라는 Object 생성

    int *pt=&var_name;
    *pt=1;

    int arr[100];//배열의 이름은 값을 가지고 있는 메모리 즉, 오브젝트가 아니다.
    arr[0]=7;

    var_name=3;//변경 가능한 lvalue

    pt=&var_name;
    int *ptr=arr;
    *pt=7;

    int *ptr2=arr+2*var_name;
    *(arr+2*var_name)=456;
    return 0;
}