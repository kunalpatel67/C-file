/* You are given positive integers n and m. 

Define two integers, sum1 and sum2, as follows: 
● sum1: The sum of all integers in the range [1, n] that are not 
divisible by m. 
● sum2: The sum of all integers in the range [1, n] that are divisible 
by m. 

Return the integer sum1 - sum2. 
Example 1: 
Input: n = 10, m = 3 
Output: 19 

Explanation: In the given example: 
- Integers in the range [1, 10] that are not divisible by 3 are [1,2,4,5,7,8,10], sum1 is the sum of those integers = 37. 
- Integers in the range [1, 10] that are divisible by 3 are [3,6,9], sum2 is the sum of those integers  = 18. 

We return 37 - 18 = 19 as the answer. */

#include<stdio.h>

int main(){

    int n = 10;
    int m = 3;
    int sum2 = 0;
    int sum1 = 0;

    for(int i = 1; i <= n; i++){
        if (i % m == 0){
            //printf("%d ",i); //3,6,9
            sum2 = sum2 + i;
        }
        else{
            //printf("%d ",i); //1,2,4,5,7,8,10
            sum1 = sum1 + i;
        }
    }
    printf("%d ",sum1 - sum2);
}