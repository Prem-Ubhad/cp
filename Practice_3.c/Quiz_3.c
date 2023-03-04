#include <stdio.h>

int main()
{

    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The first %d natural numbers are\n", n);
    for (int a = 0; a < n; a++)
    {
        printf("%d\n", a + 1);
    }
    return 0;
}