/*05. 파일의 임의 접근*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int ch;
    long cur;

    FILE* fp=fopen("test.txt", "r");

    cur=ftell(fp);//ftell(fp): 현재 파일 포인터를 기준으로 어느 위치에서 읽을 준비를 하고 있는가(아직 읽지는 않음)
    printf("ftell()=%ld\n", cur);

    fseek(fp, 2L, SEEK_SET);//시작점(SEEK_SET)으로부터 2byte떨어진 곳으로 이동하고 읽을 준비
    cur=ftell(fp);
    printf("ftell()=%ld\n", cur);
    ch=fgetc(fp);//fp가 위치한 곳에서 읽음
    printf("%d %c\n", ch, ch);//읽은 문자
    cur=ftell(fp);
    printf("ftell()=%ld\n", cur);

    fseek(fp, -2L, SEEK_CUR);//현재 위치(SEEK_CUR)에서 거꾸로 2byte만큼 이동한 후 읽을 준비
    cur=ftell(fp);
    printf("ftell()=%ld\n", cur);
    ch=fgetc(fp);
    printf("%d %c\n", ch,ch);//읽기를 준비한 곳에서 읽은 문자

    fseek(fp, 0L, SEEK_END);//끝에서 시작해 0byte만큼 이동 후 읽을 준비
    ch=fgetc(fp);//읽을 준비를 한 곳에서 문자 읽음
    printf("%d %c\n",ch, ch);

    fseek(fp, -1L, SEEK_END);
    ch=fgetc(fp);
    printf("%d %d\n", ch,ch);

    fseek(fp, -2L, SEEK_END);
    ch=fgetc(fp);
    printf("%d %c\n", ch, ch);

    return 0;
}