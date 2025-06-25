/*A self-dividing number is a number that is divisible by every digit it contains.

● For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

Example 1:
Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22] */

#include <stdio.h>

int isself(int n)
{
    int temp = n;

    while (n > 0)
    {

        int digit = n % 10;

        if ( digit == 0 || temp % digit != 0)
        {
            return 0;
        }

        n = n / 10;
    }

    return 1;
}

int main()
{

    int left = 1, right = 22;
    for (int j = left; j <= right; j++)
    {
        int ans = isself(j);

        if (ans == 1){
            printf("%d ",j);
        }
    }
}