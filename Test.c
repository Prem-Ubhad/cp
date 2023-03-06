#include <stdio.h>

void printpattern(int x);

int main()
{
    int i = 4;
    printpattern(i);
    return 0;
}

void printpattern(int x)
{
    if (x == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(x - 1);
    for (int n = 0; n < (2 * x - 1); n++)
    {
        printf("*");
    }
    printf("\n");
}