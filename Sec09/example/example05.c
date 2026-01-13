/*05. 숫자와 문자 섞어서 입력받기*/
#include <stdio.h>

void display(char cr, int lines, int width);

int main(){
    char c;
    int rows, cols;
    /*
    while(1){
        scanf("%c %d %d", &c, &rows, &cols);
        while(getchar()!='\n')continue;//입력 버퍼 비우는 코드(개행 문자 '\n' 포함해서 버퍼를 깨끗하에 청소)
        display(c,rows,cols);
        //제대로 동작(엔터 키를 누르면 프로그램의 동작을 멈추고 싶음)
        if(c=='\n')
            break;
    }
    */
    printf("Input one character and two integers: ");
    while((c=getchar())!='\n'){
        scanf("%d %d",&rows,&cols);

        while(getchar()!='\n')continue;

        display(c,rows,cols);
        printf("Input another character and two integers");
        printf("(Press enter to quit): ");
    }
    return 0;
}
void display(char cr, int lines, int width){
    int row, col;
    for(row=1;row<=lines;row++){
        for(col=1;col<=width;col++){
            putchar(cr);
        }
        putchar('\n');
    }
}