/*11. 콤마(,) 연산자*/
#include <stdio.h>

int main(){
    /*
    for(int n=1, nsqr=n*n;n<10;n++, nsqr=n*n){
        printf("%d %d\n", n,nsqr);
    }
    */
    int i,j;
    i++, j=i;
    printf("%d %d\n", i,j);

    int x,y,z;
    z=x=1, y=2;
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    z=(x=1), (y=2);
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    z=((x=1), (y=2));
    printf("x=%d, y=%d, z=%d\n",x,y,z);

    int my_money=(123,456);
    printf("%d\n", my_money);

    return 0;

}