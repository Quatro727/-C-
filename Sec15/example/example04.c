/*04. 구조체를 다른 구조체의 멤버로*/
#include <stdio.h>

#define LEN 20

struct names{
    char given[LEN];
    char family[LEN];
};
struct reservation{
    struct names guest;
    struct names host;
    char food[LEN];
    char place[LEN];

    int year;
    int month;
    int day;
    int hours;
    int minutes;
};
int main(){
    struct reservation res={
        .guest={"Nick", "Carraway"},
        .host={"Jay", "Gatsby"},
        .place={"the Gatsby mansion"},
        .food={"Escargot"},
        .year=1925,
        .month=4,
        .day=10,
        .hours=18,
        .minutes=30
    };
    const char *formatted=
        "Dear %s %s, \nI would like to serve you %s.\nPlease visit %s on %d/%d/%d at %d:%d.\nSincerely, \n%s %s";
    printf(formatted, res.guest.given, res.guest.family, res.food, res.place, res.day, res.month, res.year, res.hours, res.minutes,
    res.host.given, res.host.family);

    return 0;

}