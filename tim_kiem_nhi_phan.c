#include <stdio.h>
#define MAX 100

void Find(int L, int R, int a[], int n, int x){
    
    printf("Nhập phần tử cần tìm: ");
    scanf("%d", &x);

    L = 0;
    R = n - 1;
    while (L <= R){
        int mid = (L + R) / 2;
        if (a[mid] == x){
            printf("Phần tử %d được tìm thấy tại vị trí %d trong dãy.\n", x, mid);
            return;
        }
        else if (a[mid] < x){
            L = mid + 1;
        }
        else if (a[mid] > x){
            R = mid - 1;
        }
    }
    printf("Phần tử %d không tồn tại trong dãy.\n", x);

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
    int L, R, n, x, i, a[MAX];
    Input(&n, a);
    Find(L, R, a, n, x);
    return 0;
}