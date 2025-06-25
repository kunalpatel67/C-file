#include <stdio.h>

int main() {
    
    int n = 3;

    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print left half stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        // Print right half stars (i - 1)
        for(int j = 1; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
