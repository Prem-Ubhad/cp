#include<stdio.h>

// Recurssive Program to calculate sum of first n natural numbers.....

int sum(int n);

int main(){
    int i;
    printf("Enter the number: \n");
    scanf("%d",&i);
    printf("The sum of first %d natural numbers is %d",i,sum(i));
    
    return 0;
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}