#include <stdio.h>

// Sum of all the numbers of multiplication table of 8

int main()
{
    int i = 1;
    int n = 8;
    int m = 0;

    while (i <= 10)
    {
        m += n * i;
        i++;
    }
    printf("The sum of all the numbers of multiplicaton table of 8 is: %d\n", m);
    return 0;
}