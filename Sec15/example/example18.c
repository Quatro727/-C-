/*18. 함수 포인터의 사용법*/
#include <stdio.h>
#include <ctype.h> // toupper(), tolower()

//문자열의 모든 문자를 대문자로 변경
void ToUpper(char* str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
//문자열의 모든 문자를 소문자로 변경
void ToLower(char* str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}
//위의 두 함수 ToUpper()과 ToLower()는 코드 상 거의 동일한 기능을  수행->이를 UpdateString()로 합침->기능을 수행하는 함수를 함수 포인터 타입 매개변수를 이용해 받음
void UpdateString(char* str, int (*pf)(int))
{
	while (*str)
	{
		*str = (*pf)(*str);
		str++;
	}
}

int main()
{
	char str[] = "Hello, World!";

	void (*pf)(char*);//함수 포인터 선언: 함수의 return타입과 매개변수 타입을 반드시 함수 정의한 부분과 일치시켜야 한다.

	pf = ToUpper;
	//C99에서 함수의 이름은 함수의 주소로 암시적으로 변환되므로, 함수 이름 자체를 사용할 수 있다. 따라서 pf = ToUpper;는 C99에서 허용된다. 
	//그러나 웬만해서는 더 명시적인 코드를 작성하는 것이 좋은 것 같음.
	// pf = &ToUpper;//Acceptable
	//아래 코드는 함수의 주소가 아닌 함수를 실행시키는 것 심지어 return 타입도 불일치->따라서 compile 시 Error 발생
	// pf = ToUpper(str);//Not acceptible in C

	//compile 하고 실행할 때 Text Segment에 저장된 문자열 리터럴과 함수의 주소
	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function pointer %lld\n", (long long)ToUpper);
	//copmpile하고 실행 시 배열의 이름은 배열의 포인터로 암시적으로 변환->stack에 저장된다.
	printf("Variable %lld\n", (long long)str);

	(*pf)(str);////ToUpper(str);와 동일->(*pf)로 함수의 주소를 통해 함수 코드가 있는곳으로 가고 매개변수 str을 전달하여 실행하는 형태
	//pf(str);//K&R X, ANSI OK

	printf("ToUpper %s\n", str);

	pf = ToLower;//함수형 포인터에 ToLower()의 주소값 할당

	pf(str);//역참조 연산자 사용 없이 함수 포인터로 호출하는 형식->K&R X but ANSI OK

	printf("ToLower %s\n", str);

	/*passing function pointers to functions*/

	//UpdateSring()에 매개변수 포인터 변수 str과 함수 포인터 toupper를 인수로 전달하면서 호출
	UpdateString(str, toupper);

	printf("ToUpper %s\n", str);

	//UpdateSring()에 매개변수 포인터 변수 str과 함수 포인터 tolower를 인수로 전달하면서 호출
	UpdateString(str, tolower);

	printf("ToLower %s\n", str);
	
	//Note: __cdecl is function calling convention

	return 0;
}