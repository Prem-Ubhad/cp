#include<stdio.h>

int main(){
    int principal,years;
    float rate;
    printf("Enter principal rate years\n");
    scanf("%d%f%d",&principal,&rate,&years);
    float SimpleIntrest=(principal * rate * years)/100;
    printf("Simple Intrest= %0.2f",SimpleIntrest);
    return 0;
}