#include<stdio.h>

int main(){

    int n = 563487, rev = 0, rev2 = 0, revodd = 0;
    int temp = n;
    
    while(n > 0){
        int digit = n % 10;
        if(digit % 2 != 0){

            rev = (rev * 10) + digit; //735
        }
        n = n / 10;
    }

    while(rev > 0){
        int rem = rev % 10;
        revodd = (revodd * 10) + rem; //537
        rev = rev / 10;
    }

    while(temp > 0){
        int digit2 = temp % 10;
        if(digit2 % 2 == 0){

            rev2 = (rev2 * 10) + digit2; //846
        
        }
        temp = temp / 10;
    }

    while(rev2 > 0){
    
        int rem2 = rev2 % 10;
        revodd = (revodd * 10) + rem2; //537648
        rev2 = rev2 / 10;
    }

    printf("%d",revodd);

}