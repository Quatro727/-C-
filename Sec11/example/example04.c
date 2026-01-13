/*05. 2차원 배열과 메모리*/
#include <stdio.h>

int main(){
    int arr[2][3]={{1,2,3},
                    {4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //포인터를 이용해 2차원 배열에 접근하기
    int *ptr=&arr[0][0];
    for(int k=0; k<6;k++)
        printf("%d ", ptr[k]);
    printf("\n\n");
    //사이즈
    printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
    return 0;
}