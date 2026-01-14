/*06. 블록 영역의 정적 변수*/
#include <stdio.h>

void count(){
    int ct=0;//스택에 저장
    printf("count=%d %lld\n",ct,&ct);
    ct++;
}//해당 블록이 종료되면 변수 ct는 더이상 접근이 불가->스택에서 사라지므로

void static_count(){
    //스택이 아닌 데이터나 BSS에 저장(static하게 유지가 되는 메모리에 저장)
    static int ct=0;//초기화가 한 번만 가능
    printf("static count=%d %lld\n", ct, &ct);
    ct++;
}
void count_caller(){
    count();
}
void static_count_caller(){
    static_count();
}
int main(){
    count();
    count();
    count_caller();

    static_count();
    static_count();
    static_count_caller();
    
    return 0;
}