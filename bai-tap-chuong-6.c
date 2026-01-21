#include <stdio.h>

int main(){
    int a[] = {12, 2, 8, 5, 1, 6, 4, 15};
    int n = sizeof(a) / sizeof(a[0]);

    int temp, i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Dãy số tăng dần: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}