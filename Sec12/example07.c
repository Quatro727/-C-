/*07. 선택 정렬*/
#include <stdio.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main(){
    int arr []={74, 87, 21, 30, 11, 9, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    printArray(arr, n);

    return 0;
}

void printArray(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int* xp, int* yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void selectionSort(int arr[], int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}
