/*03. 문자열의 배열*/
#include <stdio.h>

int main(){
    //문자열의 배열
    const char *mythings[5]={
        "Dancing in the rain",
        "Counting apples",
        "Writing movies with friends",
        "Writing sad letters",
        "Studying the C language"
    };
    char yourthings[5][40]={
        "Studying the C++ language",
        "Eating",
        "Watching Netflix",
        "Walking around till dark",
        "Deleting spam emails"
    };

    const char *temp1="Dancing int the rain";
    const char *temp2="Studying the C++ language";
    
    printf("%s %u %s\n", mythings[0], mythings[0], temp1);
    printf("%s %u %s\n", yourthings[0], yourthings[0],temp2);

    printf("\n");

    printf("%-30s %-30s\n", "My Things: ", "Your Things:");
    for(int i=0;i<5;i++){
        printf("%-30s %-30s\n", mythings[i], yourthings[i]);
    }

    printf("\nsizeof mythings: %zd , sizeof your yourthings: %zd\n", sizeof(mythings), sizeof(yourthings));

    return 0;
}