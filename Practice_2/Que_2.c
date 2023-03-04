#include<stdio.h>
// Program to check whether the Year is a Leap Year.
int main(){
    int year;

    printf("The year is = ");
    scanf("%d",&year);

    if(year%400==0||year%100==0||year%4==0){
        printf("The Year %d is Leap Year and it has 366 days.",year);
    }
    // else if(year%100==0){
    //     printf("The Year %d is Leap Year and it has 366 days.",year);
    // }
    // else if(year%4==0){
    //     printf("The Year %d is Leap Year and it has 366 days.",year);
    // }
    else{
        printf("The Year %d is not a Leap year and it has 365 days.",year);
    }
}