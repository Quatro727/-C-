/*13. 변수로 길이를 정하는 배열*/
#include <stdio.h>

#define COLS 4

int sum_1d(int arr[], int n);
int sum_2d(int arr[][COLS], int rows);

int main(){
    int a=1;
    int b[2]={3,4};//같은 자료형 여러 개->복합 리터럴
    //(int[2]){3,4};->배열을 복합 리터럴 형태로 선언(변수에 할당된 형태는 아님)

    int arr1[2]={1,2};
    int arr2[2][COLS]={{1,2,3,4},{5,6,7,8}};

    printf("%d\n", sum_1d(arr1,2));
    printf("%d\n", sum_2d(arr2,2));
    printf("\n");
    //배열을 복합 리터럴 형태로 직접 인수로 전달하는 방법
    printf("%d\n", sum_1d((int[2]){1,2},2));
    printf("%d\n", sum_2d((int[2][COLS]){{1,2,3,4},{5,6,7,8}},2));
    printf("\n");

    int *ptr1;
    int (*ptr2)[COLS];
    //포인터에 배열의 주소가 아니라 배열의 복합 리터럴 형태를 바로 할당할 수도 있다.
    ptr1=(int[2]){1,2};
    ptr2=(int[2][COLS]){{1,2,3,4},{5,6,7,8}};

    printf("%d\n", sum_1d(ptr1,2));
    printf("%d\n", sum_2d(ptr2,2));

    return 0;
}
int sum_1d(int arr[], int n){
    int tot=0;
    for(int i=0;i<n;i++){
        tot+=arr[i];
    }
    return tot;
}
int sum_2d(int arr[][COLS], int rows){
    int tot=0;
    for(int r=0;r<rows;r++){
        for(int c=0;c<COLS;c++){
            tot+=arr[r][c];
        }
    }
    return tot;
}