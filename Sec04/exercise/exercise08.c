/*문자형과 정수형의 관계*/
#include <stdio.h>

int main(){
    char c='A';
    //문자형 데이터는 내부적으로 아스키 코드를 통해 정수로 변환되어 저장된다.
    printf("%d %c\n", c,c);
    printf("%d %c\n", c+1,c+1);//66과 66에 대응되는 문자 B

    return 0;
}