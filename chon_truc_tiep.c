#include <stdio.h>
#define MAX 100

void SelectionSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void InputArray(int a[], int *n){
    printf("Nhập số phần tử của dãy số: ");
    scanf("%d", n);
    printf("Nhập %d phần tử của dãy số:\n", *n);
    for(int i = 0; i < *n; i++){
        scanf("%d", &a[i]);
    }
}

int main (){
    
    int a[MAX], n;
    InputArray(a, &n);
    SelectionSort(a, n);
    printf("Dãy số đã sắp xếp: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}