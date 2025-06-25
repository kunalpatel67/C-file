// Question 2: Find Factorial of a Number

// Example 1: 
// Input: n = 5 
// Output: 120 

// Example 2: 
// Input: n = 7 
// Output: 5040 


#include <stdio.h>

int main() {

    int n = 5;
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    
    printf("%d ",fact);
    return 0;
}
