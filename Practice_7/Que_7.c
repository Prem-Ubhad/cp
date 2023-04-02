#include<stdio.h>

int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int *ptr = &arr[0];
    printf("The value of first element of array is : %d\n",*ptr);
    ptr = ptr + 2;
    // ptr++;
    // ptr++;
    printf("The value of third element of array is : %d",*ptr);
    return 0;
}