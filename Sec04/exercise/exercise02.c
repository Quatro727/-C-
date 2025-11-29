/*오버 플로우 실험*/
#include <stdio.h>
#include <limits.h>//정수형의 한계값을 알려주는 헤더 파일

int main(){
    short num1=SHRT_MAX;//MAX값으로 초기화, 32767
    short num2=SHRT_MAX+1;//오버 플로우 발생 32768이 아닌 -32768이 할당됨

    printf("%d %d", num1, num2);

    return 0;
}