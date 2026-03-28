/*typeef->복잡한 선언문 간결하게*/
#include <stdio.h>

/*
	"One good way to synthesize declarations is 
	in small steps with typedef, ..."
	- K&R book Chapter 5.12
    복잡한 선언문을 typedef로 잘게 쪼개서 이해
*/

/* Complicated Function Declarations */

char char3[3] = { 'A', 'B', 'C' };

//복잡한 형태의 함수 선언
char(*complicated_function1())[3] //크기가 3인 char 배열을 가리키는 **포인터(Array Pointer)**를 반환하는 함수
{
	return &char3;//크기 3인 char 배열의 포잍터를 반환
}

//typedef를 이용해 복잡한 형태의 함수 선언을 간결하게 표현
typedef char(*FRPTC3())[3];	// Funciton Returns Pointer To Char[3]
typedef char(*(*PTFRPTC3)())[3];

//복잡한 함수 선언으로 인해 복잡해진 함수 호출
char(*(*fptr1)())[3] = complicated_function1;
//typedef를 이용한 재정의로 위의 코드에 비해 더 간결해진 함수 호출
FRPTC3 *fptr2 = complicated_function1;
PTFRPTC3 fptr3 = complicated_function1;

/* Use typedef to make declarations simpler */
//typedef를 이용해 복잡한 형태의 함수 선언을 간결하게 표현
typedef char c3[3];
//간결해진 함수 선언
c3* complicated_function2()
{
	return &char3;// Returns a pointer to char[3]
}//반환 자료형이 c3의 포인터임을 쉽게 파악 가능

int main()
{   
    //1.
	char(*ret_val)[3] = fptr1();

	printf("%c %c %c\n", (*ret_val)[0], (*ret_val)[1], (*ret_val)[2]);
    //2.
	c3 *my_c3 = fptr2();

	printf("%c %c %c\n", (*my_c3)[0], (*my_c3)[1], (*my_c3)[2]);

    //1과 2 모두 동일한 기능을 하지만, 2의 경우가 typedef로 인해 반환 자료형이 c3의 포인터임을 쉽게 파악 가능하여 가독성이 더 좋음

	return 0;
}