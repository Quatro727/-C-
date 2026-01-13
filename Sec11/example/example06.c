/*06. 배열을 함수에 전달하는 방법*/
#include <stdio.h>

//배열을 함수호 받을 때 함수의 프로토 타입->함수로 받을 때는 항상 배열의 첫 번째 원소의 주소만 받기 때문에 배열의 크기를 따로 반드시 전달해줘야 한다.
double average(double arr[], int n);
//double average(double *arr, int n);
//double average(double *, int n);
//double average(double [], int n);

int main(){
    double arr1[5]={10, 13,12,7,8};
    double arr2[3]={1.8, -0.2, 6.3};

    printf("Address: %p\n",arr1);
    printf("Size=%zd\n", sizeof(arr1));
    printf("Avg=%lf\n", average(arr1,5));

    printf("Address: %p\n",arr2);
    printf("Size=%zd\n", sizeof(arr2));
    printf("Avg=%lf\n", average(arr2,3));

    return 0;
}
double average(double arr[], int n){
    double avg=0.0;
    for(int i=0;i<n;i++){
        avg+=arr[i];
    }
    avg/=(double)n;
    return avg;
}