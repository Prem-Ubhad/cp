#include<stdio.h>

// Program to convert temperature from celsius tp fahrenheit.....

float fahrenheit(float a);

int main(){
   int c;
   printf("Enter the Temperature in Celsius \n");
   scanf("%d",&c);
   printf("The Temperature in Fahrenheit is: %f",fahrenheit(c)); 
    return 0;
}

float fahrenheit(float a){  
    return (a * 9/5) + 32;
}