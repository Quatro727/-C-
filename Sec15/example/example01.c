#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

//person is a tag of structure
struct person{
    char name[MAX];//member
    int age;       //member
    float height;  //member
};

int main(){
    int flag;

    //구조체 변수 선언
    struct person genie;

    //멤버 접근 연산자 dot(.)
    strcpy(genie.name, "Wil Smith");
    genie.age=1000;


    flag=scanf("%f",&genie.height);
    printf("%f\n", genie.height);

    //구조체 변수 초기화
    struct person princess={"Naomi Scott", 18, 160.0f};

    struct person princess2={
        "Naomi Scott",
        18,
        160.0f
    };

    strcpy(princess.name, "Naomi Scott");
    princess.age=18;
    princess.height=160.0f;

    //Designated Initializer
    struct person beauty={
        .age=19,
        .name="Bell",
        .height=150.0f
    };

    //구조체 변수에 포인터 이용하기
    struct person *someone;
    someone=&genie;
    //포인터를 통해 구조체 변수 접근할 시 '->'연산자 이용
    someone->age=1001;
    printf("%s %d \n", someone->name, (*someone).age);

    //함수에서 구조체 선언
    struct book{
        char title[MAX];
        float price;
    };

    //No tag
    struct {
        char farm[MAX];
        float price;
    } apple, apple2;

    strcpy(apple.farm, "Trade Joe");
    apple.price=1.2f;

    strcpy(apple2.farm, "Safeway");
    apple2.price=5.6f;

    //typedef and structure
    typedef struct person my_person;

    my_person p3;

    typedef struct person person;

    person p4;

    typedef struct{
        char name[MAX];
        char hobby[MAX];
    } friend;

    friend f4;

    return 0;
}