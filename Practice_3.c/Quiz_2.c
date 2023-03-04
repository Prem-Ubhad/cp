#include <stdio.h>
// Program to find first n natural numbers
int main()
{
    int i = 0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    do
    {
        printf("The first natural numbers are %d\n ", i + 1);
        i++;
    } while (i < n);
    return 0;
}