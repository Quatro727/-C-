/*12. 제논의 역설 for문으로 시뮬레이션하기*/
#include <stdio.h>

int main(){
    /*
    const double speed=1.0;
    const unsigned repeat_max=10;

    double dt=1.0;
    double time=0.0;
    double dist=0.0;

    for(unsigned i=0; i<repeat_max;++i){
        dist+=speed*dt;
        time+=dt;

        printf("Elapsed time=%.10fs. Distance=%.10fm\n", time, dist);
        dt=dt/2.0;//제논의 역설 부분 추가
    }
    */

    const double speed=1.0;
    const double repeat_max=50;

    double time=0.0;//흐른 시간
    double dist_arch=0.0;//아킬레우스가 움직인 거리
    double dist_turtle=100.0;//거북이가 움직인 거리(아킬레우스보다 100m 앞에서 시작)
    double speed_arch=10.0;//아킬레우스의 속도
    double speed_turtle=1.0;//거북이의 속도
    double dt=(dist_turtle-dist_arch)/speed_arch;//첫 번째 dt: 아킬레우스가 거북이의 출발 지점에 도달하는 데 걸리는 시간
    unsigned i;

    printf("Time=%lfs, dt=%lfs, Archilleus=%lfm, turtle=%lfm\n", time, dt, dist_arch, dist_turtle);

    for(i=0; i<repeat_max; ++i){
        dist_arch+=speed_arch*dt;
        dist_turtle+=speed_turtle*dt;
        time+=dt;

        printf("Time=%lfs, dt=%fs, Archilleus=%lfm, turtle=%lfm\n", time, dt, dist_arch, dist_turtle);

        dt=(speed_turtle*dt)/speed_arch;//거북이가 이동한 거리에 아킬레우스가 도달하는 시간
    }

    return 0;
}