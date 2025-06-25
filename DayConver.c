#include<stdio.h>

int main(){

    int days = 1035;

    int year = days / 365;
    printf("Year: %d ",year);
    days = days % 365;
    
    int month = days / 30;
    printf("Month: %d ",month);
    days = days % 30;

    printf("Days: %d ",days);


    return 0;
}