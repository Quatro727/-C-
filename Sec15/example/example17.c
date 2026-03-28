/*17. 이름 공간 공유(namspace)*/
#include <stdio.h>

int iamfunction()
{
	return 0;
}

//int a = 123;

int main()
{
	/*
		namespace
		- Identify parts of a program in which a name is recognized
		- You can use the same name for one variable and one tag.
		- C++: use 'namespace' to use the same identifiers in the duplicated scopes.
	*/

	int myname = 123;

	{
		int myname = 345;
		//double myname = 3.14;//ERROR
	}

	struct rect { double x; double y; };

	/*
	Ex 01)
	int rect = 123;
	->OK in C
	struct rect와 rect는 서로 다른 카테 고리에 있다. struct rect는 태그 네임스페이스에 있고, rect는 식별자 네임스페이스에 있다.

	Ex 02)
	typedef struct rect rect;
	rect rect = { 1.1, 2.2 };
	->Not OK
	아무리 rect를 typedef로 재정의할 지라도 변수 선언을 할 떄 동일한 이름 rect를 선언하게 되면 혼동이 오므로 금지되었다.

	EX 03)
	int iamfunction = iamfunction();
	->ERROR
	이임 함수명으로 선언한 이름을 동일하게 변수명으로 사용하려고 하면 compiler 입장에서는 이미 해당 이름을 변수명으로 인식하고 있는 상황
	따라서 iamfunction이라는 이름의 함수를 아예 인식하지 못한다.
	
	Namespace pollution (KNK p.465)
	- Names in different files accidentally conflicting with each other

	namespace pollution을 방지하기 위해서는 보통 namspace를 가능한 작은 범위로 사용하는 것이 좋다. 
	예를 들자면 전역변수 같이 변수의 scope가 긴 경우는 가능한 피하고 가능한 변수의 scope를 작은 범위로 가져가도록 사용하는 것이 권장된다.0
	*/

	//printf("%d\n", a);// other.c

	return 0;
}