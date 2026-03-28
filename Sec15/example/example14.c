#include <stdio.h>

struct personal_owner{
    char rrn1[7];
    char rrn2[8];
};

struct company_owner{
    char crn1[4];
    char crn2[3];
    char crn3[6];
};

struct car_data{
    char model[15];
    int status;
    union {
        struct personal_owner po;
        struct company_owner co;
    };
};

void print_car(struct car_data);

int main(){
    struct car_data my_car={.model="BMW", .status=0, .po={"780512", "1190786"}};
    struct car_data company_car={.model="Santafe", .status=1, .co={"111", "22", "333333"}};

    print_car(my_car);
    print_car(company_car);

    //union을 유용성->변수를 여러 이름으로 접근할 수 있다.->벡터의 x,y를 i,j 그리고 배열로도 접근이 가능
    struct Vector2D{
        union {
            struct {double x,y;};
            struct {double i,j;};
            struct {double arr[2];};
        };
    };

    typedef struct Vector2D vec2;//구조제 struct Vector2D를 vec2로 줄여서 사용

    vec2 v={3.14, 2.67};

    //모두 동일한 메모리 공간을 공유하므로 같은 결과를 출력
    printf("%.2f %.2f\n", v.x, v.y);
    printf("%.2f %.2f\n", v.i, v.j);
    printf("%.2f %.2f\n", v.arr[0], v.arr[1]);

    for(int d=0;d<2;d++){
        printf("%.2f ", v.arr[d]);
    }

    return 0;
}

void print_car(struct car_data car){
    printf("----------------------------------\n");
    printf("Model : %s\n", car.model);

    if(car.status==0){
        printf("Personal Owner: %s-%s\n", car.po.rrn1, car.po.rrn2);
    }
    else{
        printf("Company Owner : %s-%s-%s\n", car.co.crn1, car.co.crn2, car.co.crn3);
    }
    printf("----------------------------------\n");
}

