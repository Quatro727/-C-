/*07. Recursion&Stack*/
#include <stdio.h>

void my_func(int);

int main(){
    my_func(1);
    return 0;
}
void my_func(int n){
    printf("Level is %d, address of variable n=%d\n", n, &n);

    if(n<=4){
        my_func(n+1);
    }
    printf("Level is %d, address of variable n=%d\n", n, &n);
}