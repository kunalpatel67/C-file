#include<stdio.h>

int main() {

    int n = 5;

    for(int i = 5; i >= 1; i--){
        for(int j = i; j <= n; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

}