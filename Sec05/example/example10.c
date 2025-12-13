/*10. scanf() 함수의 사용법*/
#include <stdio.h>
#include <inttypes.h>//intmax_t
int main(){
    //01.공백을 여러 개의 입력 받기
    float f;
    int i;
    char str[30];
    scanf("%d %f %s", &i, &f, &str);//%는 배열 이름 str앞에 &를 붙이지 않는다.
    printf("%d %f %s\n\n", i, f, str);

    //02.문자 입력받기
    char c;
    scanf("%c", &c);
    printf("%i\n\n",c);

    //03. 부동 소수점들 입력받기
    double d=0.0;
    scanf("%lf",&d);
    printf("%f\n\n", d);

    //04. 넓이를 지정해 입력받을 값 제한하기
    char str2[30];
    scanf("%5s",str2);
    printf("%s\n\n",str);
    
    //05. 변화 지정자 수식어: h
    scanf("%hhd",&i);
    printf("%i\n\n",i);

    //06. 정규 표현식
    int a,b;
    scanf("%d, %d\n\n", &a, &b);

    //07. scanf() 함수의 return값
    int num1, num2;
    int k=scanf("%d%d", &num1, &num2);
    printf("%d\n\n", k);

    //08. printf에서의 *변환자
    int input=123;
    int width=5;
    printf("width 입력:");
    scanf("%d",&width);
    printf("%*d\n\n",width, input);

    //09. scanf에서의 *변환자
    int input2;
    scanf("%*d%*d%d", &input2);
    printf("Your input: %d\n\n", input2);

    return 0;
}
/*
01. scanf는 여러 개의 데이터를 입력할 때 빈칸으로 구분해서 입력을 하고  읽을 때 빈 칸을 기준으로 데이터를 분할한다. 
    위의 예제에서 scanf로 입력값을 읽어들이다가 공백을 만나면 그 이전의 모든 값들을 형식지정자와 주소연산을 통해 해당 메모리에 저장한다.
    scanf는 기본적으로 줄바굼(\n)이나 공백으로 여러 개의 입력 받은 데이터들을 구분한다.
02. 문자로 입력받을 경우에는 scanf는 빈 칸도 문자로 입력받는다. 위의 코드를 실행하고 space키를 입력하고 실행하면 결과가
    %i로 인해 32가 출력된다.
03. printf에서 double형 데이터 출력 시 변환지정자 %f를 사용해도 되었으나 scanf로 입력받을 경우에는 반드시 double는 %lf로 입력받아야 한다.
    그냥 웬만하면 각 자료형이 대응되는 형식지정자를 사용하는 것을 추천. 참고로 부동 소수점을 입력할 때 과학적 표기법을 
    이용해 입력할 수도 있다. Ex: 1.234e-2
04. 형식 지정자의 넓이 지정이 정수형이나 실수형 자료에서만 사용되지 않고 배열이나 문자열 입력할 때 사용하기도 한다.
05. 여러 개의 데이터를 입력받을 대 ,를 이용해서 입렫받을 데이터들을 구분한다.,이외ㅔ -나 =같은 다른 기호흫 사용할 수도 있으며 
    심지어 A같은 알파멧 문자도 가능하다.
07. scanf의 return값은 입력받은 데이터의 개수를 count해 반환한다.
08. printf에서 형식 지정자에서 사용할 수 있는 *변환자는 동적 폭(width), 동적 정밀도(precision) 지정자를 의미한다. 즉, width는 precision을
    형식지정자로 정하지 않고 입력받아서 사용할 때 사용한다.
09. scanf에서 입력받을 때 형식지정자에 *변환자를 사용하면 해당 입력 데이터는 무시한다. 위의 예제에서 3개의 데이터를 입력하게 되면 먼저 입력한
    2개의 데이터는 무시하고 3번째 데이터만 출력하게 된다.
*/