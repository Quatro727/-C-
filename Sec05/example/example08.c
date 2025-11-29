/*08. 형식 지정자*/
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

    /*
    <형식 지정자(format speifier)>
    %[flags][width][.precison][length]specifier
    형식 지정자의 각 항목은 맨 뒤의 specifier를 제외하고 선택적이다.

    [flags]: 출력 형식을 제어하는 옵션
     -:는 출력 결과를 왼쪽 정렬. 
     +:양수에도 +를 붙여 출력
     0: 빈 칸을 공백 대신 0으로 채움
     #: 변환자에 따라 대체 형식 사용 ex: %#x->0x1a, %#o->앞에 0
    [width]: 최소 출력 폭 지정->출력이 차지해야 할 최소 칸 수(문자)를 지정. 실제 출력이 짧으면 앞을 공백으로 채운다. 더 길면 자동으로 확장되어 출력
     ex) %10d->정수를 10칸에 맞춰 출력(오른족 정렬)
         %-10d->정수를 10칸에 맟워 왼쪽 정렬해 출력
    [.precision]: 출력 정밀도(소수점 자릿수 등). 정밀도의 의미는 변환자에 따라 달라진다.
      부동 소수점(f,e,g)일 경우
        -소수점 이하 자릿수 지정 ex: %.3f->소수점 이하 3자리
      문자열(%s)
        -출력할 최대 문자 수를 지정 ex: %.5s->문자열 앞 5글자만 출력
      정수(d,i,o,x)
        -최소 자릿수 지정, 부족하면 앞을 0으로 채움
    
    [length]: 자료형 크기를 지정하는 길이 수식자
      specifier에 어떤 자료형을 적용해야 할지 세부적으로 지정한다.
        hh->signed char/unsigned char
        h->short/unsigned short
        l->long/unsigned long
        ll->long long
        j->intmax_t
        t->ptrdiff_t
        L->long double
      ex:
        %hd->short
        %lld->long long
        %Lf->long double
    10: 출력할 전체 자릿수 지정 10이면 10칸에 맞춰서 숫자 출력
    .5: 소수점 
*/
}