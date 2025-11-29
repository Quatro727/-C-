/*10. scanf 사용 시 발생하는 문제*/
#include <stdio.h>

int main(){
    int x;

    printf("Enter a number:");
    scanf("%d",&x);

    printf("You entered %f\n",x);

    return 0;
}
/*
01) 위 코드의 출력 결과가 비정상인 이유를 설명하시오 어디가 잘못되었고, 그 이유 또한 상세히 설명하시오

    printf에서 int형 자료를 받을 형식 지정자가 %d가 아닌 %f여서 정상적이지 않은 값이 나왔다.
    즉, int형 자료를 double형 자료를 해석하듯이 해석해 undefined behavior가 발생했다.

    따라서 형식 지정자를 %f에서 %d나 %i로 수정해주면 된다.
*/