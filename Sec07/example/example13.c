/*13. do-while문*/
#include <stdio.h>

int main(){
    /*
    //while문
    const int secret_code=3376;//비밀번호 설정
    int guess=0;

    printf("Enter secret code: ");
    scanf("%d", &guess);

    while(guess!=secret_code){
        printf("Enter secret code: ");
        scanf("%d", &guess);
    }
    printf("Good! your correct!");
    */
    //do-while문
    const int secret_code=3376;//비밀번호 설정
    int guess=0;
    do{
        //반복문 실행 시 무조건 첫 번쨰로 실행되는 구문들
        printf("Enter secret code: ");
        scanf("%d", &guess);
    }while(guess!=secret_code);//이후 while문의 조건에 따라 반복 지속

    printf("Good! your correct!");

    return 0;
}