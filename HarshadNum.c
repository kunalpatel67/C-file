#include<stdio.h>

int main(){

    int n = 18;
    int temp = n;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if(temp % sum == 0){
        printf("this number is Harshad (Niven) Number");
    }
    else{
        printf("this number not is Harshad (Niven) Number");
    }

    return 0;
}

/*1 to 100

#include<stdio.h>

int isharshad(int n){

    int temp = n;
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if(temp % sum == 0){
        return 1;
    }
    else{
        return 0;
    }

}


int main(){

    int left = 1, right = 100;

    for(int i = 1; i <= right; i++){

        int ans = isharshad(i);

        if(ans == 1){
            printf("%d ",i);
        }
    }
    

    return 0;
}*/