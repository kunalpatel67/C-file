#include<stdio.h>

int main(){

    int n = 12521;
    int temp = n;
    int rev = 0;

    while(n > 0){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    
    if(temp == rev){
        printf("The number is pelindrom");
    }
    else{
        printf("The number is not pelindrom");
    }

    return 0;
}