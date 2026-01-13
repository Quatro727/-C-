/*02. 함수의 자료형과 반환값*/
#include <stdio.h>

//함수의 프로토 타입
int int_min(int, int);

int main(){
    int i1,i2;
    while(1){
        printf("Input two integers: ");

        if(scanf("%d %d", &i1, &i2)!=2){
            break;
        }

        int lesser=int_min(i1, i2);//함수 호출->int_min()의 return값을 lesser라는 변수로 받는다.

        printf("The lesser integer between %d and %d is %d\n", i1, i2, lesser);
    }
    printf("End\n");
    return 0;
}
int int_min(int i, int j){
    if(i<j)
        return i;
    else 
        return j;
}