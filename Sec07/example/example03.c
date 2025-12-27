/*03. while문의 진입 조건 루프*/
#include <stdio.h>

int main(){
    /*
    while(expression){
        statement
    }
    */

   int i;

   //무한 루프:i값을 변화시키지 않으므로 계속해서 i=1이므로 무한 루프
   while(i<5){
    printf("Hi!\n");
   }
   //i=1;
   //while(--i<5){
   //   printf("Hi!\n");
   //}

   //일반적인 while문
   //i=1;
   //while(i<5){
   // printf("i before = %d\n", i);
   // i++;
   // printf("i after = %d\n", i);
   //}

   //처음부터 진입 조건에 걸리는 while문
   //i=10;
   //while(i++<5){
   // printf("Hi!\n");
   //}

   /*흔히 하는 실수들*/

   //{} 오류
   //i=0;
   // while(i<3)
   //     printf("%i\n", i);
   //     i++;

   //;오류
   //i=0;
   //while(i++<3);
   //    printf("%i\n", i);

   return 0;
}