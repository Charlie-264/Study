#include <stdio.h>
#define MAX 100

void BubbleSort(int a[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = n - 1; j > i; j--){
            if(a[j] < a[j - 1]){
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
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

int main(){
    int a[MAX], n;
    InputArray(a, &n);
    BubbleSort(a, n);
    printf("Dãy số đã được sắp xếp: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    
}