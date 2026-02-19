/*05. 문자열을 출력하는 다양한 방법들*/
#include <stdio.h>

#define TEST "A string from #define"

int main(){
    /*puts(): 문자열의 끝에 \n을 자동으로 추가해준다.*/
    char str1[60]="String array initialized";
    const char *ptr="A pointer initialized";

    puts("String without\\n");
    puts("END");
    puts(TEST);
    puts(TEST+5);
    puts(&str1[3]);
    puts(ptr+3);

    /*\0이 없이 배열로 문자열을 사용할 경우*/
    char str2[]={"H", "i", "!"};//뒤에 null문자를 따로 선언하지 않음.
    puts(str2);
    //puts()는 \0을 찾을 때까지 계속 읽어들이면서 출력을 진행

    /*puts() and fputs()*/
    char line1[100];
    while(gets(line1)){
        puts(line1);
    }
    char line2[100];
    while(fgets(line2, 100, stdin)){
        fputs(line2, stdout);
    }

    /*printf()*/
    char str3[]="Just do it, do it!";
    pritnf("%s\n", str3);
    puts(str3);

    char input[100]="";
    int ret=scanf("%10s", input);//Input: "Just do it, do it!"
    printf("%s\n", input);//Output: Just
    ret=scanf("%10s", input);
    printf("%s\n", input);//Output: do
    //scanf()는 빈 칸을 만나면 더이상 읽지 않는다.
    //따라서 첫 번째 출력에서는 Just까지, 두 번째 입력에서는 do까지만 읽고 두 번째 출력에서는 do만 출력할 것이다.
    return 0;
}