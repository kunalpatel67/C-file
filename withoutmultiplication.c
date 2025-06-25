#include <stdio.h>

    int main() {
        
        int a = 8;
        int b = 10;
        int sum = 0;

        // without using *(multiplication) multiply 2 value
        
        for(int i = 1; i <= a; i++){
            
            sum = sum + b;
            
        }
        
        printf("%d ",sum);
        
        return 0;
    }