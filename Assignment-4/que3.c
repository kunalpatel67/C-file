/*Calculate Frequency of Digits in a Number 
Example 1: 
Input: n = 882398 
Output: 8:3, 2:1, 3:1, 9:1 
*/

#include<stdio.h>

int main(){

    int n = 882398, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;

    while( n > 0){

        int digit = n % 10;
        
        if(digit == 1){
            one++;
        }
        else if(digit == 2){
            two++;
        }
        else if(digit == 3){
            three++;
        }
        else if(digit == 4){
            four++;
        }
        else if(digit == 5){
            five++;
        }
        else if(digit == 6){
            six++;
        }
        else if(digit == 7){
            seven++;
        }
        else if(digit == 8){
            eight++;
        }
        else if(digit == 9){
            nine++;
        }
        else if(digit == 0){
            zero++;
        }

        n =  n / 10;

    }

    if(zero > 0){
        printf("0:%d ",zero);
    }

    if(one > 0){
        printf("1:%d ",one);
    }

    if(two > 0){
        printf("2:%d ",two);
    }

    if(three > 0){
        printf("3:%d ",three);
    }

    if(four > 0){
        printf("4:%d ",four);
    }

    if(five > 0){
        printf("5:%d ",five);
    }

    if(six > 0){
        printf("6:%d ",six);
    }

    if(seven > 0){
        printf("7:%d ",seven);
    }

    if(eight > 0){
        printf("8:%d ",eight);
    }

    if(nine > 0){
        printf("9:%d ",nine);
    }
 
}