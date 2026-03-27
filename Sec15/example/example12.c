#include <stdio.h>

int main()
{
	/*
	Union
	- Store different data types in the same memory space
	- Structure vs Union
	*/

    //공용체(union): 선언 방식은 구조체와 유사함->서로 다른 방식의 자료형의 변수들을 가짐
	union my_union {
		int		i;
		double	d;
		char	c;
	};	
    //구조체와 공용체의 차이는 공용체는 메모리를 공유한다는 것이다->멤버들 중 자료형의 크기가 가장 큰 변수의 크기로 메모리를 선언하고 해당 메모리를 멤버들끼리 공유하면서 사용한다.

    //공용체 변수 uni1 선언
	union my_union uni;

	printf("%zd\n", sizeof(union my_union));//공용체에서 가장 자료형의 크기가 큰 것이 double형이므로 공용체의 크기는 8byte(공용체는 메모리 공유)
	printf("%lld\n", (long long)&uni);//공용체의 주소
	printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);//모든 멤버 변수들의 시작 주소가 동일

	union my_union save[10];

	printf("%zd\n", sizeof(save));

	/*Union of different types*/

	union my_union uni1;
	
	uni1.c = 'A';//8바이트 크기에의 변수에 1바이트에 문자 A 할당
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);//A, 41(65의 16진수형), 65(10진수: 문자 A의 아스키 코드값)
    //0x41=65
	// 0xCCCCCC41 = -858993599

	uni1.i = 0;//공유하는 메모리 8바이트 중에서 아래 4바이트를 0으로 채움(이 과정에서 문자 A의 아스키 코드값은 덮어씌워짐)
	uni1.c = 'A';//그리고 다시 아래 1바이트를 41(65의 16진수)로 채움
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);//A, 41, 65
	// 0x00000041 = 65

	uni1.d = 1.2;//공유하는 8바이트 메모리에 doulbe형 값 1.2 할당(이 과정에서 기존의 값들은 다 새로 덮어씌워짐)
	printf("%d %f %d %c\n", uni1.i, uni1.d, (int)uni1.c, uni1.c);//즉 8바이트를 채운 공용체에서 char형으로 읽게되면 문자 3이, int형으로 읽게 되면 858993459가 double형으로 읽으면 1.2가 출력됨(메모리를 공유하므로)
	// 33 33 33 33 33 33 f3 3f
	// 0x3ff3333333333333 = 1.19999999999999995559107901499E0
	// 0x33333333 = 858993459  (decimal)
	// 0x33 = 51 = '3'

	/*Initializing unions*/

	union my_union uni2 = uni1;			 // Copy another union->공용체 초기화시 다른 공용체 변수를 이용해 값을 복사 및 대입이 가능
	union my_union uni3 = { 10 };		 // First element (member) only->값으로 초기화시 무조건 첫 번째 멤버로만 초기화 해야함
	union my_union uni4 = { .c = 'A' }; // Designated initializer->아니면 초기화할 때 구조체처럼 아예 특정 멤버를 지정해서 초기화가 가능
	union my_union uni5 = { .d = 1.23, .i = 100 }; // Do NOT recommend->동시에 멤버 2개 이상을 초기화는 불가능 지정해서 초기화 하더라도 항상 하나만 초기화 할 것

	printf("%d %f %c\n", uni5.i, uni5.d, uni5.c);

	uni.i = 123;
	uni.d = 1.2;
	uni.c = 'k';

	printf("%d %f %c\n", uni.i, uni.d, uni.c);

	union my_union* pu = &uni;	// Pointer to union
	int x = pu->i; // -> operator, same as x = fit.digit

	//uni.c = 'A';
	uni.d = 65.345;
	double real = 3.14 * uni.d;	// do NOT recommend

	return 0;
}