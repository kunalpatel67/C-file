/*

 n=5
5432*
543*1
54*21
5*321
*4321

*/

#include<stdio.h>

int main(){

    int n = 5;

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= 1; j--){
            if(i == j){
                printf("* ");
            }
            else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }

}