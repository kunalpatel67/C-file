#include<stdio.h>


int main(){
    
    int n = 6;
    int sum = 0;

    for(int i = 1; i < n; i++){

        if(n % i == 0){
            sum = sum + i;
        }
    }
    
    if(sum == n){
        printf("the number is perfect number");
    }

    else{
        printf("the number is not perfect number");
    }
}



/* 1 to 1000 */
    // #include<stdio.h>

    // int isperfect(int n){

    //     int sum = 0;

    //     for(int i = 1; i < n; i++){

    //         if(n % i == 0){
    //             sum = sum + i;
    //         }
    //     }
        
    //     if(sum == n){
    //         return 1;
    //     }

    //     else{
    //         return 0;
    //     }

    // }


    // int main(){
        
    //     int left = 1, right = 1000;

    //     for(int j = left; j <= right; j++){
    //         int ans = isperfect(j);

    //         if(ans == 1){
    //             printf("%d ",j);
    //         }
    //     }
        
    // }