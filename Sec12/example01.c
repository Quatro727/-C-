/*01. 문자열을 정의하는 방법들*/
#include <stdio.h>

#define MESSAGE "A symbolic string cintant"
#define MAXLENGTH 81


int main(){
    char words[MAXLENGTH]="A string in an array";
    const char *ptr1="A pointer to a string";

    puts("Puts() add a newline at the end");
    puts(MESSAGE);
    puts(words);
    puts(ptr1);

    words[3]='p';
    puts(words);

    //ptr1[8]='A';->Error

    char greeting[50]="Hello, and"" How are"" you";
    //char greeting[50]="Hello, and How are you today!";

    puts(greeting);

    printf("\" Tobe, or not to be \" Halmet said\n");

    printf("%s, %p, %c\n", "we", "are", *"excellent programmers");

    const char m1[15]="Love ypu!";
    
    for(int i=0;i<15;i++){
        printf("%d ", (int)m1[i]);

    }
    printf("\n");

    const char m2[15]={'L', 'o', 'v','e', ' ', 'y', 'o', 'u', '!'};
    for(int i=0;i<15;i++){
        printf("%d ", (int)m2[i]);
    }
    printf("\n");

    const char m3[]="Love you, too!";

    int n=8;
    char cookies[1]={'A', };
    char cakes[2+5]={'A', };
    char pies[2*sizeof(long double)+1]={'A', };

    char truth[10]="Truth is  ";
    if(truth==&truth[0])puts("true!");
    if(*truth=='T')puts("true!");
    if(*(truth+1)==truth[1])puts("true");
    if(truth[1]=='r')puts("true!");

    return 0;
}