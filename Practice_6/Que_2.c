#include <stdio.h>

// Program to swap numbers.....

void swap(int *a, int *b);

int main()
{
    int x, y;
    printf("Enter first number: \n");
    scanf("%d", &x);
    printf("Enter second number: \n");
    scanf("%d", &y);
    printf("Before swaping the numbers are %d and %d \n", x, y);
    swap(&x, &y);
    printf("After swaping the numbers are %u and %u \n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
