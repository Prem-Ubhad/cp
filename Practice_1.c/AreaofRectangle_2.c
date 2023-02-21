#include<stdio.h>

int main(){
    int length, breadth;

    printf("The length of rectangle is: ");
    scanf("%d",&length);

    printf("The breadth of rectangle is: ");
    scanf("%d",&breadth);

    printf("The Area of rectangle is: %d",length * breadth);
    return 0;
}