// Question 4: // Calculate Sum of Even Numbers Between 1 to N 

// Example 1: 
// Input: n = 10 
// Output: 30 
// Explanation: 2+4+6+8+10 = 30 

#include<stdio.h>

int main(){

    int n = 10;
    int sum = 0;

    for(int i = 2; i <= n; i = i + 2){
        
        sum = sum + i;
    
    }

    printf("%d",sum);
}