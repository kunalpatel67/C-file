/*Find the Missing digit in a Sequence 
Example 1: 
Input: n = 1245 
Output: 3 
Example 2: 
Input: n = 34678 
Output: 5*/

#include<stdio.h>

int main(){

    int n = 34678;
    int prevalue = n % 10;
    n = n / 10;

    while(n > 0){
        int currvalue = n % 10;

        if(prevalue - currvalue > 1){
            printf("%d", currvalue + 1);
            return 0;
        }

        prevalue = currvalue;
        n = n / 10;
    }

    printf("No digit missing");
    return 0 ;

}