/*Given a positive integer n, return the smallest positive integer that is a 
multiple of both 2 and n 
Example 1: 
Input: n = 5 
Output: 10 
Explanation: The smallest multiple of both 5 and 2 is 10 */

#include<stdio.h>

int main(){

    int n = 5;

    for(int i = 1; ; i++){
        
        if(i % 2 == 0 && i % n == 0){
            printf("%d ", i);
            break;
        }
    }

}