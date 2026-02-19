/*03. 여러 가지 텍스트 파일 입출력 함수들*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

int main(){
    //파일을 다루기 위한 파일 포인터 fp
    FILE* fp;
    char words[MAX]={'\0',};//입력받을 문자열 배열

    const char* filename="record.txt";//대상 파일 이름 지정

    //대상 파일을 a+모드로 열음
    if((fp=fopen(filename,"a+"))==NULL){
        fprintf(stderr, "Cannot open \"%s\" file.\n", filename);//file을 열 때 error 발생 시, 표준 에러(stderr) 스트림으로 메세지 전송
        exit(EXIT_FAILURE);//프로그램 비정상 종료
    }
    //표준 입력(srdin) 스트림에서 최대 MAX개 읽고, words 배열에 저장
    while((fgets(words, MAX, stdin)!=NULL)&&(words[0]!='.')){
        //words 배열에 담긴 문자열 fp가 가리키는 파일에 write
        fputs(words, fp);
    }

    //파일의 시작 지점으로 다시 돌아가는 함수
    rewind(fp);

    //fp를 통해 최대 MAX개의문자를 읽고 배열 words에 저장
    while(fgets(words, MAX, fp)!=NULL){
        //words에 담긴 문자열을 표준 출력(stdout)스트림으로 출력
        fputs(words, stdout);
    }

    //파일이 정상적으로 안 닫힌 경우(fclose(fp)!=0), 표준 에러(stderr)스트림으로 지정된 메세지 출력
    if(fclose(fp)!=0){
        fprintf(stderr, "Error closing file\n");
    }
    return 0;
}