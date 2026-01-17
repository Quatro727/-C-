/*10. 메모리 누수와 free()의 중요성*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Dummy Output\n");
    {
        int n=100000000;
        int *ptr=(int*)malloc(n*sizeof(int));

        if(!ptr){
            printf("Malloc() failed\n");
            exit(EXIT_FAILURE);
        }
        
        for(int i=0;i<n;i++){
            ptr[i]=i+1;
        }
        free(ptr);
        ptr=NULL;
    }
    //변수ptr 자체는 {}을 벗어나면서 사라졌지만 이 변수를 통해 할당받은 메모리 공간은 여전히 유지되고 있다.
    //문제는 이 변수 ptr이 사라졌기 때문에 이 메모리에 접근이 불가능해진다.
    //따라서 반드시 동적 할당을 하고 나서 free()를 통해서 반납을 수행해야 한다. 아니면 이와 같은 메모리 누수 현상이 발생하기 때문이다.
    
    printf("Dummy Ouput\n");

    return 0;
}