/*09. 메모리 동적 할당*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float x;
    char str[]="Dancing with a Star";
    
    int arr[100];
    double *ptr=NULL;

    //double타입의 공간 30개를 운영체제에게 요청
    //운영체제가 남아 있는 메모리들 중에서 할당하고 할당된 30개의 더블 타입의 메모리 공간 중 첫 번째 주소를 리턴해준다.
    //이때 반환하는 포인터의 타입은 void이다.(void타입의 포인터는 사용하려는 자료형의 크기를 모르기 때문에 포인터 사용 불가)
    //따라서 사용하는 쪽에서 사용하려는 타입에 맞게 캐스팅(여기서는 double로)
    //마치 배열처럼 사용할 수 있다.
    ptr=(double*)malloc(30*sizeof(double));

    //현재 할당할 공간이 없으면 OS는 NULL 포인터를 return
    if(ptr==NULL){
        puts("Memory allocation failed");

        exit(EXIT_FAILURE);//메모리 할당이 안된 경우 프로그램 강제 종료
    }
    printf("Before free %p\n",ptr);

    free(ptr);//OS에게 사용한 메모리 공간 반납

    printf("After free %p\n", ptr);

    ptr=NULL;//메모리 공간을 할당받은 변수도 NULL로 다시 초기화

    return 0;
}