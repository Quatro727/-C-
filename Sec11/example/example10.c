/*10. 포인터의 배열과 2차원 배열*/
#include <stdio.h>

int main(){
    //2개의 1차원 배열들
    int arr0[3]={1,2,3};
    int arr1[3]={4,5,6};

    int *parr[2]={arr0, arr1};//포인터의 배열

    for(int j=0;j<2;j++){
        for(int i=0;i<3;i++){
            printf("%d(==%d) ", parr[j][i], *(parr[j]+i));
        }
        printf("\n");
    }
    printf("\n\n");

    //2차원 배열
    int arr[2][3]={{1,2,3}, {4,5,6}};

    int *parr0=arr[0];
    int *parr1=arr[1];

    for(int i=0;i<3;i++){
        printf("%d ", parr0[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%d ", parr1[i]);
    }
    printf("\n");

    //포인터의 배열은 2차원 배열처럼 동작
    int *parr2[2];
    parr2[0]=arr[0];
    parr2[1]=arr[1];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d %d %d %d\n",arr[i][j],parr2[i][j], *(parr2[i]+j), *(*(parr2+i)+j));
        }
        printf("\n");
    }
    printf("\n\n");

    printf("%p\n",&parr2[0]);
    printf("%p\n",parr2[0]);
    printf("%p\n",arr);
    printf("%p\n",&arr[0]);
    printf("%p\n",arr[0]);
    printf("%p\n",&arr[0][0]);

    //다양한 길이를 가진 문자열들의 배열
    char *name[]={"Aladin", "Jasmine", "Magic Carpet", "Genie"};

    const int n=sizeof(name)/sizeof(char*);

    for(int i=0;i<n;i++){
        printf("%s at %u\n", name[i], name[i]);
    }
    printf("\n");

    char aname[][15]={"Aladin", "Jasmine", "Magic Carpet", "Genie","Jafar"};

    const int an=sizeof(aname)/sizeof(char[15]);

    for(int i=0;i<n;i++){
        printf("%s at %u\n", aname[i], &aname[i]);
    }
    printf("\n");

    return 0;
}