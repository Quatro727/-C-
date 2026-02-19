#include <stdio.h>

int main(){
    //이진 파일 만들기
    {
        FILE* fp=fopen("binary", "wb");
        for(int i=0;i<100;i++){
            double d=i*1.11;
            fwrite(&d, sizeof(double), 1, fp);
        }
        fclose(fp);
    }

    //파일 읽기
    FILE* fp=fopen("binary", "rb");

    long cur;
    double d;

    //파일 읽기 전 포인터 위치 파악
    cur=ftell(fp);
    printf("Before Reading: %ld\n", cur);

    //파일 읽기
    fread(&d, sizeof(double), 1, fp);

    //읽은 후 포인터 위치 파악
    cur=ftell(fp);
    printf("After Rading: %ld\n", cur);

    printf("%f\n", d);

    fread(&d, sizeof(double), 1, fp);
    printf("%f\n", d);

    cur=ftell(fp);
    printf("After Reading: %ld\n", cur);

    fseek(fp, 32L, SEEK_SET);
    fread(&d, sizeof(double), 1, fp);
    printf("%f\n", d);

    fclose(fp);

    return 0;
}