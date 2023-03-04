#include <stdio.h>

// Program to find table of any number

int main()
{
    int i = 1;
    int n;
    int r;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    printf("Enter the range \n");
    scanf("%d", &r);

    while (i <= r)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}