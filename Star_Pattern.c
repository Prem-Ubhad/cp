#include <stdio.h>

int main()
{
    // for (int i = 5; i >= 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("* ");
    //     }
    //         printf("\n");

    // }
    
    int i, j, k = 0;
    for (int i = 1; i <= 5; ++i , k = 0)
    {
        for (j = 1; j <= 5 - i; ++j)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}