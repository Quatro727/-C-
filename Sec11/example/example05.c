/*05. 2차원 배열 연습문제*/
#include <stdio.h>

#define MONTHS 12
#define YEARS 3
int main(){
    double year2016[MONTHS]={-3.2, 0.2, 7.0, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2};
    double year2017[MONTHS]={-1.8, -0.2 , 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};
    double year2018[MONTHS]={-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};

    double temp_data[YEARS][MONTHS]={
        {-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2},
        {-1.8, -0.2 , 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9},
        {-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6}
    };
    //Step2: 연도별 각월의 온도 2차원 배열로 출력하기
    printf("[Temperature Data]\n");

    printf("Year index: ");
    for(int m=0;m<MONTHS;m++){
        printf("\t%d ", m+1);
    }
    printf("\n");

    for(int y=0;y<YEARS;y++){
        printf("Year %d     : ",y+2016);
        for(int m=0;m<MONTHS;m++){
            printf("\t%.1f ", temp_data[y][m]);
        }
        printf("\n");
    }
    printf("\n");

    //Step 03: 각 연도별 평균 기온 구하기
    printf("[Yearly average temperatures of 3years]\n");
    for(int y=0;y<YEARS;y++){
        double avg_temp=0.0;

        for(int m=0;m<MONTHS;m++){
            avg_temp+=temp_data[y][m];
        }
        avg_temp/=(double)MONTHS;

        printf("Year %d: average tmperature=%.1f\n", y+2016, avg_temp);
    }
    printf("\n");

    //Step 04: 3년 동안 각 월의 평균 기온 구하기
    printf("[Monthly average temperature for 3years]\n");
    printf("Year index: ");
    for(int m=0;m<MONTHS;m++){
        printf("\t%d", m+1);
    }
    printf("\n");

    printf("Avg temp: ");
    for(int m=0;m<MONTHS;m++){
        double avg_temp=0;
        for(int y=0; y<YEARS;y++){
            avg_temp+=temp_data[y][m];
        }
        avg_temp/=(double)YEARS;
        printf("\t%.1f ", avg_temp);
    }
    printf("\n");
    return 0;
}