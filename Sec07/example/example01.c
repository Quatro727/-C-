/*01. while 반복문에서 scanf() 반환값 사용하기*/
#include <stdio.h>

int main(){
    int num, sum=0;
    int status;

    printf("Enter an integer(q to quit):");

    status=scanf("%d", &num);//q를 입력받으면 int 형 개수가 없으므로 0개, 정수형 데이터를 입력받으면 int형 개수가 1개이므로 1을 반환

    while(status==1){

        sum=sum+num;

        printf("Enter next integer(q to quit):");
        status=scanf("%d", &num);
    }
    printf("Sum=%d\n", sum);

    return 0;
}