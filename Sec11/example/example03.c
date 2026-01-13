/*03. 포인터와 배열*/
#include <stdio.h>

int main(){
    int arr[10];

    int num=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<10;i++)
        arr[i]=(i+1)*100;
    
    int *ptr=arr;//메모리 첫주소 할당

    printf("%p %p %p\n", ptr, arr, &arr[0]);

    ptr+=2;//8바이트 추가->두 칸 이동

    printf("%p %p %p\n", ptr, arr+2, &arr[2]);

    //arr+=2->invalid
    //배열의 이름은 포인터처럼 산술 연산이 불가능하다.(배열의 이름이 포인터처럼 사용될 수는 있지만 완전히 동일하지는 않다.)

    printf("%d %d %d\n", *(ptr+1), *(arr+3), arr[3]);
    //역참조 연산을 통해 배열의 요소 접근하기
    //인덱싱이랑 포인터의 산술 연산을 서로 바꿔가며 사용할 수 있다.

    /*
    int *ptr=NULL;
    ptr=arr;
    for(int i=0;i<num;i++){
        printf("%d %d\n", *ptr++, arr[i]);
        printf("%d %d\n", *(ptr+i), arr[i]);
        printf("%d %d\n", *ptr+i, arr[i]);
    }
    */    
    return 0;
}