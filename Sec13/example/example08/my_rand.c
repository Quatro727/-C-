static unsigned int next=1;//외부에서 해당 변수에 접근을 못하게 막는 것

int my_rand(){
    next=next*1103515245+1234;
    next=(unsigned int)(next/65536)%32768;

    return (int)next;
}
void my_srand(unsigned int seed){
    next=seed;
}