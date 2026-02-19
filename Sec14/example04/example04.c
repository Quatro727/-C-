/*04. Binary 파일 입출력*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //바이너리 파일 쓰기 예제
    {
        FILE* fp=fopen("Binary_file", "wb");

        double d=1.0/3.0;
        int n=123;
        int* parr=(int*)malloc(sizeof(int)*n);
        if(!parr)exit(1);//메모리 할당 실패 시 프로그램 종료

        //동적 할당된 배열에 값 할당
        for(int i=0;i<n;i++){
            *(parr+i)=i*2;
        }

        fwrite(&d, sizeof(d), 1, fp);//변수 d의 주소에서 시작해서 변수 d의 크기(8byte)크기만큼 1개를 fp를 이용해 파일에 저장
        fwrite(&n, sizeof(n), 1,fp);
        fwrite(parr, sizeof(int), n, fp);

        fclose(fp);
        free(parr);

        //전체 크기: 8*1+4*1+123*1=504바이트
    }
    //바이너리 파일 읽기 예제
    {
        FILE* fp=fopen("binary_file", "rb");
        double d;
        int n;
        fread(&d, sizeof(d), 1, fp);//fp를 통해 파일에서 8byte 크기 1개를 읽어 d에 저장
        fread(&n, sizeof(n), 1, fp);

        int* parr=(int*)malloc(sizeof(int)*n);
        if(!parr)exit(1);

        fread(parr, sizeof(int), n, fp);

        //feof()함수는 EOF에 도달 시, 0이 아닌 값을 return한다.
        printf("feof=%d\n", feof(fp));//파일 끝에 도달했는지 Check->data는 다 읽었으나 아직 EOF는 아님

        printf("%f\n", d);
        printf("%d\n", n);
        for(int i=0;i<n;i++){
            printf("%d ", *(parr+i));
        }
        printf("\n");

        printf("feof=%d\n", feof(fp));//아직 EOF 아니므로 0 return

        fread(&n, sizeof(n), 1, fp);//EOF 도달을 위해 강제로 한 번 더 파일 읽기 실행
        printf("feof=%d\n", feof(fp));//EOF 도달->0 return
        printf("ferror=%d\n", ferror(fp));//파일 작업 중 권한 문제나 모드 불일치 등으로 error 발생 여부를 check하는 ferror()함수->error가 없으면 0 return

        fwrite(&n, sizeof(n), 1, fp);//error 발생을 위해 강제로 쓰기 실행(현재는 읽기 모드로 연 상태)
        printf("ferror=%d\n", ferror(fp));//error 발생->0이 아닌 값 return

        fclose(fp);
        free(parr);
    }
    return 0;
}