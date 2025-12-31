/*18. loop안에서 함수의 returen 값 이용하기*/
#include <stdio.h>

/*EX 01)일반적인 반복문
int main(){
    int base, exp;
    int result=1;

    scanf("%d %d", &base, &exp);

    for(int i=0; i<exp; i++)
        result*=base;
    printf("Result=%d\n", result);

    return 0;
}
*/
/*EX 02)scanf의 return값을 이용
int main(){
    int base, exp;
    int result;
    
    while(scanf("%d %d", &base, &exp)==2){
        result=1;
        for(int i=0; i<exp; i++)
            result*=base;
        printf("Result=%d\n",result);
    }

    return 0;
}
*/
//EX 03)일반 함수의 return값을 이용해서 반복하기
int square(int base, int exp);//함수의 prototype->compile 시, main()에게 이런 함수가 있다고 고지

int main(){
    int base, exp;
    int result;

    while(scanf("%d %d", &base, &exp)==2){
        result=square(base, exp);//square()의 return 값을 변수 result에 할당
        printf("Result=%d\n", result);
    }
    return 0;
}
//square() 함수는 main() 함수와 분리되서 compile되고, linking 과정에서 이 기능들이 main()함수에서 동작하도록 연결해준다.
int square(int base, int exp){
    int result=1;//square()함수의 변수 result, main() 함수의 변수 reault와 다른 값
    for(int i=0; i<exp; i++){
        result*=base;
    }
    return result;//결과값 return
}

