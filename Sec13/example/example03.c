/*03. 자동 변수(Automatic variables)*/
#include <stdio.h>

void func(int k);

int main(){
    auto int a;//keyword 'auto'
    a=1024;//자동 변수는 반드시 초기화를 진행해줘야 한다.
    //printf("%d\n",a);
    //auto int b=a*3;

    int i=1;
    int j=2;

    printf("i %lld\n", &i);
    {
        int i=3;//name hiding->더 큰 영역의 i와는 다른 주소를 가진 다른 변수!!
        printf("i %lld\n", &i);

        //j is visible in her
        printf("j=%d\n", j);
    }
    printf("i %lld\n", &i);
    
    for(int m=1; m<2;m++){
        printf("m %lld\n",&m);
    }
    func(5);

    for(int m=3;m<4;m++){
        printf("m %lld\n",&m);
    }
    return 0;
}
void func(int k){
    int i=k*2;
    printf("i %lld\n",&i);
}