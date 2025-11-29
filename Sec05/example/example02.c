#include <stdio.h>
#include <stdlib.h>//malloc()

int main(){
    /*01. sizeof arrays*/
    int int_arr[30];//int_arr[0]=1024;.., 정적 배열
    int* int_ptr=NULL;//포인터 변수, 메모리 주소를 저장하는 변수, 아직 메모리는 할당되지 않음
    int_ptr=(int*)malloc(sizeof(int)*30);//int_ptr[0]=1024;,동적 배열

    //int_arr은 컴파일 단계에서 이미 사이즈가 30x4로 결정이 나있는 상태.
    //int_arr은 정적 배열 자체이며, 실제 메모리 공간 그 자체
    //배열은 메모리 블록이다.
    //배열 이름 int_arr은 그 메모리 블록의 첫 번째 요소의 주소로 암시적으로 변환될 수 있지만 본질적으로는 포인터 변수가 아니다.
    printf("Size of array=%zu bytes\n",sizeof(int_arr));//120bytes
    
    //int_ptr은 크기가 런타임에서 결정이 난다. 
    //malloc은 메모리 주소만 반환하고, 포인터 변수에 저장됨
    printf("Size of pointer= %zu bytes\n",sizeof(int_ptr));//4bytes
    
    /*02. sizeof character array*/
    char c='a';
    char string[10];//최대 9개의 문자와 마지막에 null character
    
    //type define unsigned int->size_t, size_t는 unsigned int를 의미
    //시스템의 이식성을 위해 size_t를 사용. size_t는 플랫폼의 아키텍쳐에 맞게 자동으로 최적의 크기를 가진다.
    size_t char_size=sizeof(char);
    size_t str_size=sizeof(string);

    printf("Size of char type is %zu bytes\n",char_size);
    printf("Size of string type is %zu bytes\n",str_size);

    return 0;
}