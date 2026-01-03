/*11. 최대, 최소, 평균 구하기*/
#include <stdio.h>
#include <float.h>

int main(){
    float max=-FLT_MAX;
    float min=FLT_MAX;
    float sum=0.0f;
    int input;
    int n=0;

    while(scanf("%d", &input)==1){
        /*
        //0보다 작고 100보다 큰 수를 입력하게 되면 무시하는 코드
        if(input<0.0f||input>100.0f)
            continue;
        */
       max=(input>max)?input:max;
       min=(input<min)?input:min;
       sum+=input;
       n++;
    }
    if(n>0){
        printf("min=%f, max=%f, avg=%f\n", min, max, sum/n);
    }
    else{
        printf("No input\n");
    }

    return 0;
}