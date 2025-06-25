#include <stdio.h>

int main() {
    
    int b = 5;
    int p = 4;
    int ans = 1;

    for(int i = 1; i <= p; i++){
        ans = ans * b;
    }
    printf("%d ",ans);

    return 0;
}
