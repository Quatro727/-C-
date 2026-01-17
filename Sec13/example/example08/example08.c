/*08. 난수 생성기 예제*/
#include <stdio.h>
#include <stdlib.h>//srand()
#include <time.h>//time()
#include "my_rand.h"

/*
int main(){
    srand((unsigned int)time(0));//time()를 이용해 난수 생성
    for(int i=0;i<10;i++){
        printf("%d\n", rand());
    }
    return 0;
}
*/

int main(){
my_srand((unsigned int)time(0));

for(int i=0;i<10;i++){
    printf("%d\n", my_rand()%6+1);
}
return 0;
}
