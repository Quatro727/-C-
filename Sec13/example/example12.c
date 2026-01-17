/*12. calloc(), realloc()*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=10;

    int *ptr=NULL;

    //ptr=(int*)malloc(n*sizeof(int));
    ptr=(int*)calloc(n, sizeof(int));//calloc()함수는 malloc()과 다르게 메모리 공간을 할당받은 후 0으로 초기화 과정을 해준다.

    if(!ptr)exit(1);

    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        ptr[i]=i+1;
    }
    n=20;

    int *ptr2=NULL;
    ptr2=(int*)realloc(ptr, n*sizeof(int));
    //ptr=(int*)realloc(ptr, n*sizeof(int));

    printf("%p %p\n", ptr, ptr2);

    printf("%d\n", ptr[0]);

    if(!ptr2)
        exit(1);
    else
        ptr=NULL;
        
    for(int i=0; i<n;i++){
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    free(ptr2);
    ptr2=NULL;

    return 0;
}