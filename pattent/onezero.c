#include<stdio.h>

int main() {

    int n = 5, a = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",a % 2);
            a++;
        }
        
        printf("\n");
    }

}