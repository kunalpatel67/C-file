#include<stdio.h>

int main(){

    int a = 100;
    int b = 100;
    int c = 100;

    if(a > b && a > c){
        printf("a is big");
    }
    else if(b > a && b > c){
        printf("b is big");
    }
    else if(c > a && c > b){
        printf("c is big");
    }
    else if(a == b && a > c){
        printf("a and b is big");
    }
    else if(b == c && b > a){
        printf("b and c is big");
    }
    else if(c == a && c > b){
        printf("c and a is big");
    }
    else{
        printf("All are same");
    }

    
    return 0;
}