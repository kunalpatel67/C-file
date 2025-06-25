    #include<stdio.h>

    int main() {

        int n = 128;
        int temp = n;
        int count = 0;
        int digitcount = 0;

        while(n > 0){

            int digit = n % 10;
            if (temp % digit == 0 && digit != 0){
                count++;
            }

            digitcount++;
            n = n / 10;
        }

        if(count == digitcount){
            printf("the number is self-dividing");
        }
        else{
            printf("the number is not self-dividing");
        }

    }