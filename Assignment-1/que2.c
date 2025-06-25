// print prime number in given range

#include <stdio.h>

int isprime(int n)
{
    if (n < 2){
        return 1; //not prime
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 1; // not prime
        }
    }
    return 0; // prime
}

void main()
{
    int left = 1, right = 50;
    for (int j = left; j <= right; j++)
    {
        int ans = isprime(j);

        if (ans == 0)
        {
            printf("%d ", j);
        }
    }
}