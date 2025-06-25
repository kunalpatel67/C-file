#include<stdio.h>


int main(){

    int n = 370;
    int temp = n;
    int sum = 0;
    
    while(n > 0){
        int digit = n % 10;
        sum = sum + (digit*digit*digit); 
        n = n / 10;
    }
    if(temp == sum ){
        printf("the number is Armstrong");
    }
    else{
        printf("the number is not Armstrong");
    }
}       