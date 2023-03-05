#include<stdio.h>

// Finding the average of three numbers.....    

float average(int a, int b, int c);

int main(){
     int x,y,z;
     printf("Enter first number \n");
     scanf("%d",&x);
     printf("Enter second number \n");
     scanf("%d",&y);
     printf("Enter third number \n");
     scanf("%d",&z);
     printf("The Average of three number is %f",average(x,y,z));
    return 0;
}
float average(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}
