/*Sum of Digits Until Single Digit 
Example 1: 
Input: n = 9875 
Output: 2 
Explanation : Keep summing the digits until a single digit is obtained. 
Ex. 9875 → 9+8+7+5=29 → 2+9=11 → 1+1=2 */

#include<stdio.h>

int main() {

    int n = 9875;

    while(n >= 10){
        int sum = 0;
        int temp = n;
    
        while(temp > 0){
            int digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }

        n = sum;
    }
    printf("%d ",n);
    return 0;
}
