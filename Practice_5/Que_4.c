#include<stdio.h>

// Program to calculate gravitational force on a body

float force(int mass);

int main(){
    int m;
    printf("Enter the value of mass in Kg \n");
    scanf("%d",&m);
    printf("The Gavitational Force on %d mass is %f",m,force(m));
    return 0;
}

float force(int mass){
    return (float)mass * 9.81;
}
