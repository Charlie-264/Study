#include <stdio.h>
#define MAX 100

void Find(int i, int x, int a[], int n){
    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++){
        if (a[i] == x){
            printf("Phần tử %d được tìm thấy tại vị trí %d trong dãy.\n", x, i);
            return;
        }
        else if (a[i] != x && i == n - 1){
            printf("Phần tử %d không tồn tại trong dãy.\n", x);
            return;
        }
    }
}

void Input(int *n, int a[]){
    printf("Nhập số phần tử của dãy: ");
    scanf("%d", n);
    printf("Nhập %d phần tử của dãy:\n", *n);
    for (int i = 0; i < *n; i++){
        scanf("%d", &a[i]);
    }
}

int main(){
    int n, x, i, a[MAX];
    Input(&n, a);
    Find(i, x, a, n);
    return 0;
}