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
    //|0 1 2 3 | 4 5 6 7 | 8 9 10 11 12 13 14 15 |
    //|int     | float   | double                |
    printf("struct Aligned a1\n");
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

    struct Padded1{
        char a;
        float b;
        double c;
    };

    struct Padded1 p1;
    //|0 1 2 3 | 4 5 6 7 | 8 9 10 11 12 13 14 15 |
    //|char    | float   |double                 |

    printf("\nstruct Padded p1\n");
    printf("Sizeof %zd\n",sizeof(p1));//16
    printf("%lld\n",&p1);
    printf("%lld\n",&p1.a);
    printf("%lld\n",&p1.b);
    printf("%lld\n",&p1.c);
    //padding
    //원래라면 구조체 Padded1 구조체의 변수는 13바이트이어야 하나 실제로는 16바이트이다.
    //char에 1바이트가 아니 4바이트를 할당
    //x86아키텍처에서 데이터를 읽는 단위는 4바이트, x64에서는 데이터를 읽는 단위가 8바이트이므로 데이터를 읽는 줄을 맞추기 위해 단위를 맞춘 것
    //만약 13바이트를 메모리에 할당하면, double형 데이터를 읽을 때 중간에 잘라서 읽어야 하므로 cpu와 메모리를 한 번 더 오가야 한다.
    //이를 방지하기 위해 compiler는 char형 데이터에 3바이트를 추가해 char와 float 데이터를 8바이트로 만듦
    //데이터 단위를 맞추지 않으면 데이터를 읽을 때 일관성이 깨진다.
    struct Padded2{
        float a;
        double b;
        char c;
    };

    struct Padded2 p2;
    //|0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|
    //|float          |double               |char                   |
    printf("\nstruct Padded p2\n");
    printf("Sizeof %zd\n",sizeof(p2));//24
    printf("%lld\n",&p2);
    printf("%lld\n",&p2.a);
    printf("%lld\n",&p2.b);
    printf("%lld\n",&p2.c);
    //만약 char에 1바이트만 할당했을 경우 이 뒤의 데이터를 메모리에서 읽어들일 때 데이터의 일관성이 깨질 확률이 높아 char이 맨 뒤에 있음에도 워드 크기에 맞춘 것이다.
    struct Padded3{
        char a;
        double b;
        double c;
    };

    struct Padded3 p3;
    //|0 1 2 3 4 5 6 7|8 9 10 11 12 13 14 15|16 17 18 19 20 21 22 23|
    //|char           |double               |double                 |
    printf("\nstruct Padded p3\n");
    printf("Sizeof %zd\n",sizeof(p3));//24
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
    //워드 단위가 8바이트일 지라도 c언어 컴파일러는 메모리 낭비를 줄이기 위해 보통 워드 단위보다는 구조체 멤버의 자료형들 중 가장 큰 멤버의 메모리 단위에 맞추어 
    //padding 작업을 한다.->구조체 내부에서 가장 큰 메모리 단위가 int면 메모리 크기가 4의 배수가 되도록, double이면 메모리의 크기가 8의 배수가 되도록
    struct Person f[4];

    printf("Sizeof a structure array %zd\n", sizeof(f));
    return 0;
}