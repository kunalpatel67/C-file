#include<stdio.h>

int main() {

    int a = 10;
    int b = 20;
    int c = a;
    a = b;
    b = c;

    printf(" a: %d ",a);
    printf(" b: %d ",b);
    return 0;

}

// without any variable

// #include<stdio.h>

// int main(){

//     int a = 10;
//     int b = 20;

//     a = a + b; // a=30,b=20
//     b = a - b; // a=30,b=10
//     a = a - b; // a=20,b=10

//     printf("a: %d ",a);
//     printf("b: %d ",b);

// }