#include<stdio.h>
int main(){

    int n = 5, a = 0, b = 1;

    for(int i = 1; i <= n; i++){
        printf("%d ",a);

        int sum = a + b;

        a = b;
        b = sum;
    }

}