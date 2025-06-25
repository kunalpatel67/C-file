// check the given number format is binary or not

#include<stdio.h>

int main(){

    int n = 1001001;

    while(n > 0){

        if(n % 10 != 0 && n % 10 !=1){
            printf("The number is not in binary format");
            return 0;
        }
        n = n /10;

    }

    printf("the number is in binary format");
    return 0;
}