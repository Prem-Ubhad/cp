#include<stdio.h>

// Program  to calculate factorial of a number (Works fine only till number 12)

int main(){
    int num;
    int i=1;
    int factorial=1;

    printf("Enter the number: \n");
    scanf("%d",&num);
    
    while(i<=num){
         factorial *= i ;
         i++;
    }
    printf("%d",factorial);
    return 0;
}