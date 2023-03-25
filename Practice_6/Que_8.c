#include <stdio.h>

// Program to make the value of a variable 10 times of it's original value.....

void value(int a, int b);

int main()
{
    int x = 10;
    int y;
    value(x, y);
    printf("Ten times the value of x is %d", y);
    return 0;
}

void value(int a, int b)
{
    b = 10 * (a);
}