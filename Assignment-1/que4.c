// find the avarage of number's digit

#include<stdio.h>

int main() {

    int n = 12345;
    int sum = 0;
    int count = 0;

    while(n > 0){

        int digit = n % 10; // last digit of n
        sum = sum + digit; // n store
        n = n / 10;
        count++;

    }

    float avg = (float)sum / count;
    printf("Avarage is: %f ", avg);

}