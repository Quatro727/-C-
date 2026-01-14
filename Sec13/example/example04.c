/*04. 레지스터 변수*/
#include <stdio.h>

void temp(register int r){

}
int main(){
    register int r;
    r=123;

    //printf("%p\n",&r);->주소를 가져올 수 없다. 변수가 진짜 레지스터에 위치할 수도 있기 때문이다.
    //int *ptr=&r;
    
    return 0;
}