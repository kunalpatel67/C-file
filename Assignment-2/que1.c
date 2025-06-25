// Question 1: Print Numbers Divisible by 3 and 5 (1 to N) 

// Example 1: 
// Input: n = 20 
// Output: 15 

// Example 2: 
// Input: n = 100 
// Output: 15 30 45 60 75 90

#include<stdio.h>

int main(){

    int n = 100;

    for(int i = 1; i <= n; i++){

        if(i % 3 == 0 && i % 5 == 0){

            printf("%d ", i);
        
        }
 
    }

}
