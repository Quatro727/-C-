/*03. 변수의 영역과 지역 변수*/
#include <stdio.h>
int int_max(int i, int j);
int main(){
    int a;
    a=int_max(1,2);

    printf("%d\n", a);
    printf("%p\n", &a);
    {
    int a=int_max(4,5);

    printf("%d\n", a);
    printf("%p\n", &a);

    int b=123;
    }
    printf("%d\n", a);
    printf("%p\n", &a);
    return 0;
}
int int_max(int i, int j){
    int m; m=i>j?i:j;
    return m;
}