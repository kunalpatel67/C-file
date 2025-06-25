#include<stdio.h>

int main() {

    int n = 1024;
    int rev = 0;
    
    while(n > 0){
        int rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }

    printf("%d ", rev);
}

//without store only print the number
// #include<stdio.h>

// int main() {

//     int n = 1024;
    
//     while(n > 0){
//         int rem = n % 10;
//         printf("%d ", rem);
//         n = n / 10;
//     }

// }