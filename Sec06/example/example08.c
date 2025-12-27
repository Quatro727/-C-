/*08. 전위 및 후위  연산자*/
#include <stdio.h>

int main(){
    //증감 연산자
    //int a=0;
    //a++;//후위 연산자->a++ 또는 a+=1
    //printf("%d\n", a);

    //++a;//전위 연산자
    //printf("%d\n", a);

    //실수에서의 증감 연산자.
    //double b=0.0;
    //b++;
    //printf("%f\n", b);

    //++b;
    //printf("%f\n", b);

    //전위와 후위 연산자의 차이
    //int count=0;
    //while(++count<10)//count++ 또는 ++count
    //{
    //    printf("%d ", count);
    //}

    //int i=1, j=1;
    //int i_post, pre_j;

    //i_post=i++;
    //pre_j=++j;

    //printf("%d %d\n",i,j);
    //printf("%d %d\n", i_post, pre_j);

    //int i=3;
    //int l=2*--i;;
    //printf("%d %d\n", i, l);

    //i=1;
    //l=2*i--;
    //printf("%d %d\n", i, l);

    int x=1, y=1, z;
    z=x*y++;//(x*y)++은 X
    //z=(x*y)++으로 작성 시 error 발생
    return 0;
}