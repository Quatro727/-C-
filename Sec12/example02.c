/*02. 메모리 레이아웃과 문자열*/
#include <stdio.h>

void test_function(){
    int j;
    printf("Stack high\n%llu\n", (unsigned long long)&j);
}
int main(){
    /*배열과 포인터*/
    const char *pt2="I am string!.";
    const char *pt3="I am string!.";
    const char *pt4="I am string!!!.";
    const char arr1[]="I am string!.";
    const char arr2[]="I am string!.";
    const char arr3[]="I am strig!!.";
    /*
    compiler 입장에서는 문자열 리터럴이 동일하면 해당 문자열을 굳이 3개 다 따로 저장하기보다는 한 곳에 저장하고 
    필요할 때 접근하는 것이 메모리 공간을 효율적으로 사용할 수 있다.
    */
   /*
   but, 배열의 경우 문자열이 동일하더라도 각각 따로따로 즉, 서로 다른 메모리 공간에 저장한다.
   */
    printf("rodata low \t%llu %llu %llu\n", 
        (unsigned long long)pt2, (unsigned long long)pt3, (unsigned long long)pt4, (unsigned long long)"I am string!.");

    printf("Stack high \t%llu %llu %llu\n",
    (unsigned long long)arr1, (unsigned long long)arr2, (unsigned long long)arr3);
    //포인터를 이용해 문자열을 선언한 경우와 배열을 이용해 문자열을 선언한 경우 메모리 공간을 어떻게 사용하는 지 확인할 수 있다.

    /*지역 변수*/
    printf("Stack high\n", (unsigned long long)&pt2, (unsigned long long)&pt3, (unsigned long long)&pt4);
    //포인터 변수의 주소 확인하기->동일한 문자열에 접근할 지라도 어디서 접근하는지는 다를 수 있다.

    int i;
    printf("Stack high\t%llu\n", (unsigned long long)&i);

    const char*pt5="I am string!!!!!!.";
    const char arr4[]="I a string!.";

    //arr4++;=>Error
    pt5++;//포인터 연산
    puts(pt5);

    /*배열과 포인터의 차이점*/
    char heart[]="I love Kelly!";
    const char *head="I love Helly!";

    for(int i=0;i<6;i++){
        putchar(heart[i]);//putchar() 함수는 하나의 문자를 출력한다.
    }
    putchar('\n');
    //포인터 연산
    for(int i=0;i<6;i++){
        putchar(*(heart+i));
    }
    putchar('\n');

    while(*(head)!='\0'){
        putchar(*(head++));
    }
    putchar('\n');
    head=heart;//포인터 변수에 배열의 이름을 할당해 포인터처럼 사용할 수 있다(그렇게 호환이 되었기 때문에)
    //heart=head'->but 배열의 이름에 포인터 변수를 할당할 수는 없다.

    heart[7]='H';
    *(heart+7)='K';


    char *word="Google";
    //word[2]->Error
    //문자열 리터럴 Google을 Test Segment에 영역에 올린다. 해당 영역을 프로그램이 실행되는 도중에 바꾸게 되면 싫행에 오류가 생길 수 있으므로
    //OS 입장에서 막아버린다.
    puts(word);

    const char *str1="When all the lights are low....";
    const char *copy;

    copy=str1;//문자열을 통째로 복사하는 것이 아닌 , 주소만 복사
    printf("%s %p %p\n", str1, str1, &str1);
    printf("%s %p %p\n", copy, copy, &copy);

    return 0;
}