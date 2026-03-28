/*19. typedef*/
#include <stdio.h>
#include <time.h>	// time()

int main()
{
	/*
		typedef specifier
		- Give symbolic names (or aliases) to types
		- Does not create new types.->편의성을 위해 기존 타입을 새로운 이름으로 대체한 것(새로운 자료형을 창조한 것은 아님)
	*/

	typedef unsigned char BYTE;//Note the scope of BYTE

	BYTE x, y[10] = { 0, }, * z = &x;

	{
		typedef unsigned char byte;//You can use lowercases as well.

		/* Portable data types */
		//typedef의 가장 큰 장점은 시스템의 이식성이다.

		size_t s = sizeof(byte);
		// unsigned int (x86), unsigned long long (x64)->즉 하드웨어 환경마다 sizeof()의 결과의 자료형이 상이
		// unsigned int s = sizeof(byte);->x86 환경에서의 sizeof() return값 자료형(x64 환경에서는 사용 불가)
		// unsigned long long s = sizeof(byte);x64 환경에서는 sizeof() return 값 자료형(x86 환경에서는 사용 불가)
		//이때 C99에서는 미리 헤더 파일에 typedef를 이용해 size_t를 시스템에 맞게 자동으로 변환되게 이식되도록 아래와 같이 정의
		/*
			// Definitions of common types
			#ifdef _WIN64
    		typedef unsigned __int64 size_t;
    		typedef __int64          ptrdiff_t;
    		typedef __int64          intptr_t;
			#else
    		typedef unsigned int     size_t;
    		typedef int              ptrdiff_t;
    		typedef int              intptr_t;
		*/
	}

	//byte b;->typedef로 새로 정의한 자료형으로 변수를 선언한 것도 기본 변수와 같이 scope가 존재

	/*time():1970년 01월 01일 00:00:00 UTC 이후부터 지금까지 흐른 시간을 초 단위로 반환하는 함수.*/

	time_t t = time(NULL);
	//time() 함수 또한 X86과 X64 환경에 따라 return하는 자료형의 타입이 다르다.
	//이 또한 C99에서는 time_t를 시스템에 맞게 자동으로 변환되도록 이식되도록 아래와 같이 정의
	/*
		#ifndef _CRT_NO_TIME_T
    		#ifdef _USE_32BIT_TIME_T
        		typedef __time32_t time_t;
    		#else
        		typedef __time64_t time_t;
	*/
	printf("%lld\n", t);

	/*typedef vs #define*/
	//보통 typedef 사용이 #define 전처리 사용보다 권장됨

	typedef char* STRING;

	STRING name = "John Wick", sign = "World";

	/*
	- typedef 해석은 compile 타입에 이뤄진다. 전처리 단계에서는 이뤄지지 않는다.
	- #define 보다 훨씬 유연

	 반면 #define은 전처리 단계에서 해석이 이뤄지므로 단순한 텍스트 치환(그냥 복사&붙여넣기)이 이뤄진다. 따라서 아래와 같이 선언하면 의도와 다르게 해석된다.
	#define STRING char *

	STRING name, sign;->개발자의 의도는 name과 sign 모두 char* 타입
	char * name, sign;->전처리 지시자가 전처리 단계에서 그냥 단순하게 STRING을 char*로 치환 그로 인해 sign은 compiler에게 일반 자료형 char로 해석되게 됨
	*/

	typedef struct complex {
		float real;
		float imag;
	} COMPLEX;// typedef struct complex COMPLEX와 동일

	typedef struct { double width; double height; } rect;// No tag
	rect r1 = { 1.1, 2.2 };
	rect r2 = r1;
	printf("%f %f\n", r2.width, r2.height);

	return 0;
}