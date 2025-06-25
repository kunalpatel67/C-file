#include<stdio.h>

int main(){
    
    int n = 1234525;
    int count = 0;

    while (n > 0){
        int digit = n % 10; //last digit
        
        n = n / 10;
        count++;

    }
    printf("%d ", count);
    return 0;
}


// for loop
// #include<stdio.h>

// int main(){
    
//     int n = 12345;
//     int i;
    
//     for(i = 1; i <= n; i++){
//         int digit = n % 10;
//         n = n / 10;
//     }
//     printf("%d ", i);
//     return 0;
// }