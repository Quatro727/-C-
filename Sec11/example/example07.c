/*07. 2개의 포인터로 배열을 함수에게 전달하는 방법*/
#include <stdio.h>

double average(double *, double *);
int main(){
    double arr1[5]={10,13,12,7,8};

    printf("Avg=%lf\n",average(arr1, arr1+5));

    return 0;
}
double average(double *start, double *end){
    int cnt=0;
    double avg=0.0;
    while(start<end){
        avg+=*start++;
        cnt++;
    }
    avg/=(double)cnt;

    return avg;
}