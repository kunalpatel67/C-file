// check the number is prime or not
#include<stdio.h>

int main(){

    int n = 17;
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        printf("the number is prime");
    }
    else{
        printf("the number is not prime");
    }

}
