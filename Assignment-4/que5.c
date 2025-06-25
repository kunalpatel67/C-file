/*Print the Sum of Series: 1 - 2 + 3 - 4 + 5 ... ±N 
Example 1: 
Input: n = 5 
Output: 3 
Explanation: 1 - 2 + 3 - 4 + 5 = 3 */

#include<stdio.h>

int main(){

    int n = 5;
    int ans = 0;

    for(int i = 1; i <= n; i++){

        if(i % 2 == 0){
            ans = ans - i;
        }
        else{
            ans = ans + i;
        }
        
    }
    printf("%d ",ans);

}