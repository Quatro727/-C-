/*02. 구조체의 메모리 공간 할당*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Aligned{
        int a;
        float b;
        double c;
    };
    //구조체를 선언하는 것 자체로는 메모리 공간이 할당되지 않는다.
    //위의 코드 형식은 위와 같은 형식으로 메모리 공간을 사용하겠다는 일종의 템플릿

    //위의 템플릿을 통해 변수 선언
    struct Aligned a1,a2;

    printf("struct Aligned\n");
    printf("Sizeof %zd\n",sizeof(struct Aligned));
    printf("%lld\n",&a1);
    printf("%lld\n",&a1.a);
    printf("%lld\n",&a1.b);
    printf("%lld\n",&a1.c);

    printf("\nstruct Aligned a2\n");
    printf("Sizeof %zd\n",sizeof(a2));
    printf("%lld\n",&a2);
    printf("%lld\n",&a2.a);
    printf("%lld\n",&a2.b);
    printf("%lld\n",&a2.c);

    //padding
    //원래라면 구조체 Padded1 구조체의 변수는 13바이트이어야 하난 실제로는 16바이트이다.
    //char에 1바이트가 아니 4바이트를 할당
    //x86아키텍처에서 데이터를 읽는 단위는 4바이트이므로 데이터를 읽는 줄을 맞추기 위해 단위를 맞춘 것
    //데이터 단위를 맞추지 않으면 데이터를 읽을 때 일관성이 깨진다.
    struct Padded1{
        char a;
        float b;
        double c;
    };
    struct Padded1 p1;
    printf("\nstruct Padded p1\n");
    printf("Sizeof %zd\n",sizeof(p1));
    printf("%lld\n",&p1);
    printf("%lld\n",&p1.a);
    printf("%lld\n",&p1.b);
    printf("%lld\n",&p1.c);
    
    struct Padded2{
        float a;
        double b;
        char c;
    };
    struct Padded2 p2;
    
    printf("\nstruct Padded p2\n");
    printf("Sizeof %zd\n",sizeof(p2));
    printf("%lld\n",&p2);
    printf("%lld\n",&p2.a);
    printf("%lld\n",&p2.b);
    printf("%lld\n",&p2.c);

    struct Padded3{
        char a;
        double b;
        double c;
    };
    struct Padded3 p3;
    
    printf("\nstruct Padded p3\n");
    printf("Sizeof %zd\n",sizeof(p3));
    printf("%lld\n",&p3);
    printf("%lld\n",&p3.a);
    printf("%lld\n",&p3.b);
    printf("%lld\n",&p3.c);

    struct Person{
        char name[41];
        int age;
        float height;
    };
    struct Person mommy;

    printf("\nstruct Person\n");
    printf("Sizeof %zd\n",&mommy.name[0]);
    printf("%lld\n",&mommy.age);
    printf("%lld\n",&mommy.height);
    printf("%lld\n",sizeof(mommy));

    struct Person f[4];

    printf("Sizeof a structure array %zd\n", sizeof(f));
    return 0;
}