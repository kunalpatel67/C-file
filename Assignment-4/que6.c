/*Convert Binary to Decimal 
Example 1: 
Input: n = 1101 
Output: 13*/

#include<stdio.h>

int main(){
    int n = 1101;
    int sum = 0 , power = 1;

    while(n > 0){

        int rem = n % 10;
        sum = sum + (rem * power); // 1,1,5,13
        power = power * 2; // 2,4,8
        n = n / 10;
    }
    
    printf("%d",sum);
}   