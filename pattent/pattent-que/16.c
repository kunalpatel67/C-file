/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include<stdio.h>

int main(){

  int n = 5, a = n;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n - i; j++){
      printf(" ");
    }
    for(int k = 1; k <= i; k++){
      printf("*");
    }
    for(int k = 1; k < i; k++){
      printf("*");
    }
    printf("\n");
  }

  n--;

  for(int i = n; i >= 1; i--){
    for(int j = 1; j <= a - i; j++){
      printf(" ");
    }
    for(int k = 1; k <= i; k++){
      printf("*");
    }
    for(int k = 1; k < i; k++){
      printf("*");
    }
    printf("\n");
  }

  
}
