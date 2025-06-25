#include<stdio.h>

int main(){
    
    int n = 199;
    int sum;

    while( n >= 10){
        sum = 0;
        while( n > 0){
            int digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        n = sum;
    }

    if(n == 1){
        printf("the number is magic number");
    }
    else{
        printf("the number is not magic number");
    }
    
    return 0;
}

