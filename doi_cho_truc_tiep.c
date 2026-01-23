#include <stdio.h>
#define MAX 100

void SortArray(int a[], int n){
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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
    int a[MAX], n, i;
    InputArray(a, &n);
    SortArray(a, n);
    printf("Dãy số sắp xếp: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}