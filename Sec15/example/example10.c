/*10. 공용체(Union)*/
#include <stdio.h>

int main(){
    union my_union{
        int i;
        double d;
        char c;
    };
    //구조체: 메모리에 구조체를 구성하는 여러 가지 자료형의 멤버들이 따로따로 각자 공간을 점유하고 있음
    //공용체:메모리를 공유한다는 의미. 서로 다느 자료형들의 데이터가 같은 메모리를 공유
    union my_union uni;

    printf("%zd\n", sizeof(union my_union));
    printf("%lld\n",&uni);
    printf("%lld %lld %lld\n", &uni.i, &uni.d, &uni.c);

    union my_union save[10];

    printf("%zd\n",sizeof(save));

    union my_union uni1;

    uni1.c='A';
    printf("%c %x %d \n"<uni1.c, (int)uni1.c, uni1.i);

    uni1.i=0;
    uni1.c='A';
    printf("%c %x %d \n"<uni1.c, (int)uni1.c, uni1.i);

    uni1.d=1.2;
    printf("%d %f %d %c\n", uni1.i, uni1.d, (int)uni1.c, uni1.c);
    return 0;
}