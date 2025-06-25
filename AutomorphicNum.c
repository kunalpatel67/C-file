#include<stdio.h>

int main(){

    int n = 76;
    int tempn = n;
    int rev = 0;
    int count = 0;

    while(n > 0){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        count++;
        n = n / 10;
    }
    
    int multy = tempn * tempn;
    int temp = multy;
    int revmulty = 0;
    
    for(int i = 1; i <= count; i++) {
        int digit = multy % 10;
        revmulty = (revmulty * 10) + digit;
        multy = multy / 10;
    }
    
    if(rev == revmulty){
        printf("the number is Automorphic");
    }
    else{
        printf("the number is not Automorphic");
    }
    

    return 0;
}