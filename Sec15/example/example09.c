/*09. 익명 구조체*/
#include <stdio.h>

struct names
{
	char first[20];
	char last[20];
};

struct person
{
	int id;
	struct names name;	// nested structure member
};
//익명 구조체
struct person2
{
	int id;
	struct { char first[20]; char last[20]; };// anonymous structure->구조체 안에 구조체가 있는 중첩 상황 but 위의 구조체와 다르게 tag가 없음
};

int main()
{
	//중첩 구조체의 멤버 초기화
	struct person ted = { 123, {"Bill", "Gates"} };
	struct person ted3 = { 125, "Robert", "Hand" };

	//일반적인 중첩 구조체에서 멤버 접근 시->멤버 접근 연산자를 2번 이용해서 접근
	puts(ted.name.first);
	puts(ted3.name.first);

	//익명 구조체의 멤버 초기화(일반 구조체의 초기화와 크게 다르지 않음)
	struct person2 ted2 = { 124, {"Steve", "wozniak"} };
	//struct person2 ted2 = { 124, "Steve", "wozniak" };// also works

	//익명 구조체의 경우 중첩된 경우라도 멤버 접근 연산자를 한 번만 사용해서 접근이 가능하다.
	puts(ted2.first);

	return 0;
}
