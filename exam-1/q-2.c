#include<stdio.h>

int main() {

    int n = 10;

    int temp = n;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            printf("%d ",i);
        }
        else{
            printf("%d ",temp);
            if(temp == 2){
                return 0;
            }
            temp = temp - 2;
        }

    }
}

// #include<stdio.h>

// int main() {

//     int n = 10;

//     int a=1,b=10;

//     for(int i = 1; i <= 5; i++){
//         printf("%d ",a);
//         printf("%d ",b);

//         a = a +2;
//         b = b - 2;
//     }

// }