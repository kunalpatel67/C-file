// Question 3: Count even - odd digits in a number 

// Example 1: 
// Input: n = 4435676 
// Output: Even: 4, Odd:3 
// Explanation: Even: 4466, Odd: 357

#include<stdio.h>

int main(){

    int n = 4435676;
    int even = 0;
    int odd = 0;

    while(n > 0){
        int digit = n % 10;

        if(digit %2 == 0){
            even++;
        }
        else{
            odd++;
        }

        n = n / 10;
    }
    printf("Total odd num: %d\n",odd);
    printf("Total even num: %d\n",even);
}