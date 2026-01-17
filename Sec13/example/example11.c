/*11. 동적 할당 메모리를 배열처럼 사용하기*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    /*1차원 배열*/
    int n=3;
    int *ptr=NULL;

    ptr=(int*)malloc(sizeof(int)*n);
    if(!ptr)exit(1);

    ptr[0]=123;
    *(ptr+1)=456;
    *(ptr+2)=789;

    printf("%d %d %d\n", *(ptr+0),*(ptr+1), *(ptr+2));
    free(ptr);
    ptr=NULL;

    /*2차원 배열*:1차원 배열을 2차원 배열 처럼*/
    int row=3,col=2;
    int *ptr2=(int*)malloc(row*col*sizeof(int));
    if(!ptr2)exit(1);
    
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            ptr2[c+col*r]=c+col*r;
        }
    }
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            printf("%d ", *(ptr2+c+col*r));
        }
        printf("\n");
    }
    free(ptr2);
    ptr2=NULL;
    return 0;
}