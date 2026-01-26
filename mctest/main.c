#include <stdio.h>

void Input(int n){
    do{
        printf("Continue? [1-Y / 2-N]: ");
        scanf("%d", &n);
    } while(n != 1 && n != 2);
    if (n == 1){
        printf("You chose to continue.\n");
    } else {
        printf("You chose to stop.\n");
        return 0;
    }
}

int main(){
    int n;
    Input(n);
    return 0;
}