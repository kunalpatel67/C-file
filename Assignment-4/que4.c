/*Check a Number for “Strong Number” 
Example 1: 
Input: n = 145 
Output: Yes 
Explanation: A number is strong if the sum of the factorial of its digits equals the number. 
Ex. 145 = 1! + 4! + 5!*/

#include<stdio.h>

int main(){

    int n = 145;
    int temp = n;
    int sum = 0;

    while (n > 0){

        int digit = n % 10;
        int fact = 1;
        
        for(int i = 1; i <= digit; i++){
            
            fact = fact * i;
       
        }

        sum = sum + fact;
        n = n / 10;
          
    }

    if(sum == temp){
        printf("yes,the number is strong");
    }
    else{
        printf("no,the number is not strong");
    }


    return 0;
}