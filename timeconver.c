#include<stdio.h>

int main() {

    int second = 52892;

    int hour = second / 3600;
    printf("Hour: %d ",hour);
    second = second % 3600;

    int minute = second / 60;
    printf("Minute: %d ",minute);
    second = second % 60;

    printf("Second: %d ",second);

}