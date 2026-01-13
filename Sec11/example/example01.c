/*01. 배열의 기본적인 사용방법*/
#include <stdio.h>

#define MONTHS 12

int main(){
    int high[MONTHS]={2,5,11,18,23,27,29,30,26,20,12,4};
    //반복문을 사용해 배열의 각 요소에 접근하는 방법
    for(int i=0;i<MONTHS;i++){
        printf("%d ", high[i]);
    }
    printf("\n");
    //평균값 구하기
    float avg=0.0;
    for(int i=0;i<MONTHS;i++){
        avg+=high[i];
    }
    printf("Average=%f\n", avg/(float)MONTHS);
    //배열값 초기화(보통 반복문을 사용해 초기화하는 경우가 대부분->파일의 값들을 읽어 배열에 저장할 떄)
    high[0]=1;
    high[1]=2;

    /*Addresses*/
    printf("%p %p\n", high, &high[0]);//두 값을은 모두 동일하다.
    for(int i=0; i<MONTHS;i++){
        printf("%lld\n", (long long)&high[i]);
    }
    printf("\n");

    /*컴파일러는 배열의 인덱스값이 유효한지 체크하지 않는다.*/
    //high[12]=4;
    //high[-1]=123;
    //런타임 오류 발생->컴파일 오류는 발생시키지 않음

    /*const와 array*/
    const int low[12]={-7, -5, 1, 7, 13, 18, 22, 22, 16, 9, 2, -5};
    //const로 선언한 배열은 요소의 값을 변경할 수 없다.

    /*배열 초기화 안했을 시*/
    int not_init[4];//static으로 선언된 경우 0으로 알아서 초기화 됨
    for(int i=0; i<4;i++)
        printf("%d\n", not_init[i]);
    //쓰레기값이 배열을 채운 상태

    /*배열의 일부분만 초기화 된 경우*/
    int insuff[4]={3,4};
    for(int i=0;i<4;i++){
        printf("%d\n", insuff[i]);
    }
    //부분적으로 초기화가 되엇을 경우 나머지 요소들을 전부 0으로 초기화 해준다.

    /*배열의 크기를 넘어서 초기화를 진행한 경우*/
    //int over[2]={2,3,4,5};->컴파일 오류가 발생

    /*배열의 초기화 값들을 이용해 배열의 크기 지정하기*/
    const int power_of_twos[]={1,2,4,8,16,32,64};////배열 선언 및 초기화 시 초기화 데이터의 길이를 통해 길이 지정이 가능
    printf("%d\n", sizeof(power_of_twos));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(power_of_twos[0]));
    //단 길이를 지정하지 않았을 경우 일일이 sizeof를 통해 배열의 길이를 계산해야 한다.
    for(int i=0;i<sizeof power_of_twos/sizeof power_of_twos[0];i++){
        printf("%d ", power_of_twos[i]);
    }

    /*초기화 값 지정하기*/
    int days[MONTHS]={31, 28,[4]=31, 30,31,[1]=29};
    for(int i=0;i<MONTHS;i++){
        printf("%d ", days[i]);
    }
    /*배열의 크기 지정하기*/
    int arr1[MONTHS];//기호상수 이용
    double arr2[123];//숫자 리터럴 사용
    float arr3[3*4+1];
    float arr4[sizeof(int)+1];
    float arr6[(int)1.5];
    //배열의 길이를 지정하는 값은 오로지 양의 정수만 가능하다.

    
    return 0;
}