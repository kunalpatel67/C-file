/*Find the Second Largest Digit in number 
Example 1: 
Input: n = 459638 
Output: 8*/

#include<stdio.h>

int main(){

    int n = 459638;
    int maxdigit = -1, secondmax = -1; // -1 ki jagah 0 nahi le sakte. 0 lenge to user ek digit ka number dalega to by default second max = 0 print hoga.

    while(n > 0){

        int digit = n % 10; 

        if(digit > maxdigit){  
            secondmax = maxdigit; 
            maxdigit = digit; 
        }
        else if(maxdigit > digit && secondmax < digit){
            secondmax = digit;
        }

        n = n / 10;
    }

    if(secondmax == -1){ // when user input only one digit then always secondmax = -1.
        printf("Second max digit not found");
    }
    else{
        printf("%d",secondmax);
    }

}