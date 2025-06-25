#include<stdio.h>

int main(){

    int n = 634787;
    int maxdigit = 0;

    while(n > 0){

        int digit = n % 10; 
        
        if(digit > maxdigit){

            maxdigit = digit;
        
        }

        n = n / 10;

    }
    printf("%d ",maxdigit);
    return 0;

}