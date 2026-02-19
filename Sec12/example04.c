/*04. 문자열을 입력받는 다양한 함수들*/
#include <stdio.h>

#define STRLEN 81

char *custom_string_input(char* st, int n);

int main(){
    //char *name="";->런타임에 에러 발생
    char name[128];
    int result=scanf("%s", name);
    /*
    char *name=""의 경우 C99에서 보통 문자열의 경우 프로그램이 실행될 때 메모리의 상수 영역(Read-only Data Section)에 저장된다.
    그래서 입력받은 함수를 이용해 수정하려는 경우 문제가 발생한다.
    따라서 compile 과정에서는 문제가 생기지는 않지만 run-time에서는 수정이 불가한 상수 영역에 접근해 입력받은 데이터를 이용해 수정하려는 경우
    OS가 막아버려 run-time 에러가 발생한다.
    */
   //입력을 받으려면, 위의 char name[128]처럼 아예 입력받을 data를 저장할 공간을 확보하고 그 공간에서 input을 받아야 올바르게 input을 받고 해당 data를 사용할 수 있다.

   /*scanf() vs gets()*/
   //scanf()->한 단어만 read 가능
   //gets()->한 줄을 통째로 읽을 수 있다. 또한  enter키를 누르는 순간 gets()는 버퍼에 있는 입력 data를 읽고, 이때 \n문자를 제거하고 문자열 끝에 null문자를 추가해준다.
   char words1[5];
   gets(words1);//pointer값을 매개변수로 사용
   printf("START\n");
   printf("%s", words1);//printf()는 마지막에 수동적으로 \n을 추가해줘야 줄바꿈을 해준다.
   puts(words1);//puts()는 출력함수로 알아서 끝에 \n을 추가해준다.
   puts("END.");

   /*fgets()와 fputs()*/
   char words2[STRLEN]="";
   fgets(words2, STRLEN, stdin);
   /*
   fgets() 함수는 원래는 파일 입출력에 사용하는 함수. 매개변수로 pointer와 최대 사용 가능한 메모리 공간 크기, stdin을 사용한다.
   매개변수로 stdin()을 사용해 원래는 파일 입력에만 사용 가능했지만 console 입력도 가능해졌다.
   fgets()는 gets()와 다르게 문자열을 입력받을 때 마지막에 \n을 제거해주지 않는다.
   */
  //fgets()로 입력 받은 데이터에서 \n을 \0으로 바꾸기
  int i=0;
  while(words2[i]!='\0'&&words2[i]!='\n'){
    i++;
  }
  if(words2[i]=='\n')
    words2[i]='\0';

  fputs(words2, stdout);//출력함수로 마지막에 \n을 추가해주지 않는다.
  fputs("END", stdout);

  /*입력 공간이 작을 때*/
  char small_arr[5];
  puts("Enter long strings:");
  fgets(small_arr, 5, stdin);
  printf("%p\n", small_arr);
  printf("%p\n", fgets(small_arr, 5, stdin));
  fputs(small_arr, stdout);
  /*
  fgets()는 정상 입력을 받으면 입력받은 pointer을 return하고, error가 있으면 null문자를 return하다.
  */

  /*scanf()*/
  char str1[6], str2[6];
  int count=scanf("%5s %5s", str1, str2);
  //int count=scnaf("%5s %5s", str1, str2);->Error 발생
  //선언할 때 는 공간이 6개이지만 문자열 배열의 경우 자동적으로 null문자를 문자열의 끝에 사용하므로 실제 사용가능한 공간은 5개이다.
  int count2=scanf_s("%5s %5s", str1, 6, str2, 6);
  //scanf_s()는 포인터와 최대로 받을 수 있는 사이즈를 지정해서 출력
  printf("%s | %s\n", str1, str2);

  return 0;
}