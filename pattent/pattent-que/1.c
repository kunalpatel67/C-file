/*

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>

int main(){

    int n = 5;

    for(int i = 1; i <= n; i++){ //row
        for(int j = 1; j <= i; j++){ //colomn
            printf("* ");
        }
        printf("\n");
    }

}