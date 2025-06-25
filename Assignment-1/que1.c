// print n numbers with different incremental.

#include<stdio.h>

int main() {

    int n = 5;
    int current = 1;


    for(int i = 1; i <= n; i++){

        printf("%d ",current);
        current = current + i;
        
    }

}