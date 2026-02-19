/*02. 텍스트 인코딩과 코드 페이지*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//SetConsoleOutputCP()->인코딩 방식과 관련된 함수

int main(){
    const UINT default_cp=GetConsoleOutputCP();//현재 사용하고 있는 코드 페이지가 무엇인지 알 수 있다.
    printf("%u\n", default_cp);

    int ch;
    FILE* fr;//파일 읽기용 포인터
    FILE* fw;//파일 쓰기용 포인터

    const char* in_filename="원본.txt";
    const char* out_filename="복사본.txt";

    unsigned long count=0;

    if((fr=fopen(in_filename, "r"))==NULL){
        printf("Cannot open %s\n", in_filename);
        exit(EXIT_FAILURE);
    }
    if((fw=fopen(out_filename,"w"))==NULL){
        printf("Cannot open %s\n", out_filename);
        exit(EXIT_FAILURE);
    }

    //console 화면에 문자 출력 시 사용한 코드 페이지를 텍스트 파일이 UTF-8방식으로 인코딩된 것을 사용하겠다고 설정
    SetConsoleOutputCP(CP_UTF8);

    while((ch=fgetc(fr))!=EOF){
        fputc(ch, stdout);
        fputc(ch, fw);
        count++;
    }

    fclose(fr);
    fclose(fw);

     //읽고 쓸 파일만 UTF-8 방식으로 console 화면에 출력 이후에 다시 사용자 환경은 원래 환경으로 복구. 아니면 사용자 환경의 문자가 깨지는 불상사 발생.
    SetConsoleOutputCP(default_cp);
   
    printf("FILE %s has %lu characters\n", in_filename, count);
    printf("Copied to %s\n", out_filename);

    printf("한글 출력 확인\n");

    return 0;
}