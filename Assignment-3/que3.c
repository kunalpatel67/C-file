// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

// Example 1:
// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15

#include <stdio.h>

int main()
{

    int n = 234;
    int multy = 1;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        multy = multy * digit; 
        sum = sum + digit; 
        n = n / 10;
    }
    // printf("multyply of number:%d ",multy);
    // printf("sum of number:%d ",sum);
    printf("%d ", multy - sum);
}