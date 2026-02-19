/*08. 문자열의 포인터를 정렬하기*/
#include <stdio.h>
#include <string.h>

void swap(char** xp, char** yp);
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);

int main(){
    char* arr[]={"Apple", "Banana", "Pineapple", "Peach", "Pear", "Applepie"};
    int n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    printStringArray(arr, n);

    return 0;
}

void printStringArray(char* arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%s ", arr[i]);
    }
    printf("\n");
}

void swap(char** xp, char **yp){
    char *temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void selectionSort(char* arr[], int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(strcmp(arr[j], arr[min_idx])<0){
                min_idx=j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
    }
}