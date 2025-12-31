/*17. for 반목문과 배열 함께 사용하기*/
#include <stdio.h>
#define SIZE 5

int main(){
    //EX 01)
    int my_arr[SIZE];

    for(int i=0; i<SIZE;i++)
        my_arr[i]=i;
    for(int i=0; i<SIZE; i++)
        printf("%d ", my_arr[i]);
        
    //EX 02)
    int my_numbers[SIZE];
    int sum=0;

    for(int i=0; i<SIZE;i++){
        printf("Enter numbers: ");
        scanf("%d", &my_numbers[i]);
        sum+=my_numbers[i];
    }
    printf("Sum=%d\n",sum);

    return 0;
}