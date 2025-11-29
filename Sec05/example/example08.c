/*08. 변환지정자들의 수식어
<형식 지정자(format speifier)>
%[flags][width][.precison][length]specifier
-: 있으면 왼쪽부터 채워서 숫자 나열, 없으면 오름쪽에 붙여서 나열
+: 부호 표시, 양수이면 + 부호 표시, 음수이면 -부호 표시
10: 출력할 전체 자릿수 지정 10이면 10칸에 맞춰서 숫자 출력
.5: 소수점 
*/
#include <stdio.h>
#include <limits.h>

int main(){
    printf("%10i\n", 1234567);//10자리에 맞춰 오른쪽에 붙여 출력
    printf("%-10i\n", 1234567);//10자리에 맞춰 왼쪽에 맞춰 출력
    printf("%+i %+i\n", 123, -123);//양수와 음수 모두 부호를 붙여 출력
    printf("% i\n% i\n", 123, -123);
    printf("%X\n", 17);//16진수로 바꿔 출력
    printf("%#X\n", 17);//0x 형식으로 16진수 출력
    printf("%05i\n", 123);//5자리에 맞추되 빈칸이 있을 경우 0으로 채워 출력
    printf("%*i\n",7,456);//width을 제어 문자열이 아닌 매개변수로 다루고 싶을 때 제어 문자열에 *를 사용한다. 즉 7자리 형식에 456을 맞춰 출력

    printf("\nPrecision\n");
    printf("%.3d\n", 1024);//
    printf("%.5d\n", 1024);
    printf("%.3f\n", 123456.1234567);//소수점 3자리까지 출력
    printf("%.3f\n", 123456.1235);//소수점 3자리까지 출력은 하되 반올림을 하는 것도 반영
    printf("%10.3f\n", 123.45678);//전체 자릿수 10자리에 맞춰서 소수점 3자리까지 출력
    printf("%010.3f\n", 123.45678);//전체 자릿수 10자리에 맞춰서 소수점 3자리까지 출력. 빈칸은 0으로 출력
    printf("%.5s\n", "ABCDEFGHIJKLMN");//글자개수 제한 딱 F까지 출력
    printf("%.s\n", "ABCDEFGHIJKLMN");//안 넣어주면 0으로 취급

    printf("\nLength\n");
    printf("%%hhd %hd %d\n", 257, 257, 257);
    printf("%d %lld %lld\n", INT_MAX+1, INT_MAX+1, 214783648LL);

    return 0;
}