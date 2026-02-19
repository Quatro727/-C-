/*06. 텍스트 파일을 이진 파일처럼*/
#include <stdio.h>
#include <windows.h>

int main(){
    FILE* fp=fopen("text.txt", "rb");//텍스트 파일을 이진 읽기 모드로 열음

    unsigned char ch;

    SetConsoleOutputCP(CP_UTF8);//윈도우의 한글 인코딩 방식을 UTF-8로 변경

    //fread() 함수의 return값은 읽어들인 데이터의 양 
    while(fread(&ch, sizeof(unsigned char), 1, fp)>0){
        printf("%hhu %c\n", ch, ch);
    }
    fclose(fp);

    return 0;
}

/*
SetConsoleOutputCP(CP_UTF8):
윈도우 터미널(콘솔)의 안경을 UTF-8로 바꿔 끼워주는 함수
윈도우 콘솔은 텍스트를 화면에 뿌릴 때 코드 페이지 규칙을 따른다. 기본적으로는 949를 사용한다.
그러나 해당 함수를 호출하게 되면 콘솔의 출력 규칙이 65001(UTF-8)로 바뀐다.

즉 프로그램이 내보내는 데이터가 UTF-8 형식의 이진 데이터일 때, 콘솔이 이를 올바르게 해석해서 화면에 한글이나
특수문자를 깨짐 없이 출력하게 하는 것이 목적이다.

기본적으로 컴퓨터는 한글을 표현하는 방식이 인코딩 방식에 따라 다르다.
-MS949 방식
-UTF-8 방식
만약 프로그램이 UTF-8로 한글을 해석했는데 콘솔은 MS949 안경, 즉 MS949 방식의 번역서를 들고 있다면 해석 규칙이
달라 해당 한글을 아예 엉뚱한 글자로 해석해서 문자가 깨지는 상황이 발생하게 된다.
그로 인해 SetConsoleOutputCP()같은 함수를 이용해 콘솔의 해석 방식을 변경해 주는 것이다.
*/