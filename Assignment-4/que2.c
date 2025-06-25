/*Convert a Decimal Number to Binary 
Example 1: 
Input: n = 13 
Output: 1101 */

#include <stdio.h>

int main() {
    int n = 13, ans = 0, placevalue = 1; //op:- 100

    while(n > 0){

        int rem = n % 2;
        ans = ans + rem * placevalue; 
        n = n / 2; 
        placevalue = placevalue * 10; //10,100,1000

    }   

    printf("%d ",ans);

    return 0;
}