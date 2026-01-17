/*05. 구조체와 포인터*/
#include <stdio.h>
#define LEN 20

struct names{
    char given[LEN];
    char famiy[LEN];
};
struct friend{
    struct names full_name;
    char mobile[LEN];
};

int main(){
    struct friend my_friends[2]={
        {{"Ariana", "Grande"}, "1234-1234"},
        {{"Taylor", "Swift"}, "6550-8888"}
    };

    struct friend *girl_friend;

    girl_friend=&my_friends[0];

    printf("%zd\n", sizeof(struct friend));
    printf("%lld %s\n", girl_friend, girl_friend->full_name.given);
    //구조체 포인터는 ->연산자를 사용
    girl_friend++;

    printf("%lld %s\n", girl_friend, (*girl_friend).full_name.given);
    //(*girl_friend)와 girl_friend-> 이 두 가지 연산자는 동일한 연산을 의미


    return 0;
}
