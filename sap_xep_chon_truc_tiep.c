#include <stdio.h>

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

int main (){
    
    int a[] = {12, 2, 8, 5, 1, 6, 4, 15};
    int n = sizeof(a) / sizeof(a[0]);
    SelectionSort(a, n);
    printf("Dãy số tăng dần: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}