/*08. const와 배열 그리고 포인터*/
#include <stdio.h>

int main(){
    const double PI=3.141592;
    
    const int arr[5]={1,2,3,4,5};
    //arr[1]=123;

    const double arr2[3]={1.0, 2.0,3.0};
    //arr2[0]=100.0;

    //이미 배열을 상수로 선언하였기 때문에 포인터를 이용해 우회해서 접근해 변경하려면 컴파일 과정에서 경고창이 뜨게 된다.
    const double *pd=arr2;//pd에는 arr2의 첫 번째 원소의 시작 주소가 들어가게 된다.
    //*pd=3.0;//pd[0]=3.0; arr2[0]=3.0
    //pd[2]=1024.0;//arr[2]=1024.0

    printf("%lf, %lf\n", pd[2], arr[2]);
    pd++;

    return 0;
}