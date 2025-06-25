#include <stdio.h>

int isprime(int n)
{
    if(n < 2){
        return 0; //not prime
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0; // not prime
        }
    }
    return 1; // prime
}

int ispelindrom(int n){

    int temp = n;
    int rev = 0;

    while(n > 0){
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    if(temp == rev){
        return 1; //pelindrom
    }
    else{
        return 0; //not pelindrom
    }
}


int main() {
    
    int left = 1, right = 1000;

    for (int j = left; j <= right; j++) {

        int ans = ispelindrom(j) && isprime(j);
        
        if (ans == 1) {
            printf("%d ", j);
        }
    }

    return 0;
}


// print first 10 prime-pelindrom number 
// int main()
    // {
    //     int n = 10, num = 1, count = 0;

    //     while(n > count){

    //         if(isprime(num) == 1 && ispelindrom(num) == 1){
    //             printf("%d ",num);
    //             count++;
    //         }

    //         num++;
    //     }

    //     return 0;
    // }