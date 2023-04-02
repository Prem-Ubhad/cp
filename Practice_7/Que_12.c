#include <stdio.h>

// TABLE OF 2, 7 AND 9 USING ARRAY

void printTable(int *table, int num, int n)
{
    printf("The Multiplication Table of %d is\n\n ",num);
    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }
    printf("\n**********");
    printf("\n\n");
}


int main()
{
    int table[3][10];

    printTable(table[0], 2, 10);
    printTable(table[1], 7, 10);
    printTable(table[2], 9, 10);

    // int j;
    // for (int i = 0; i < 10; i++)
    // {
    //     table[0][i] = 2 * (i+1);
    //     table[1][i] = 7 * (i+1);
    //     table[2][i] = 9 * (i+1);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("2 x %d = %d\n",i+1,table[0][i]);

    // }

    // printf("\n");

    // for (int i = 0; i < 10; i++)
    // {

    //     printf("7 x %d = %d\n",i+1,table[1][i]);

    // }

    // printf("\n");

    // for (int i = 0; i < 10; i++)
    // {

    //     printf("9 x %d = %d\n",i+1,table[2][i]);
    // }
    // printf("\n");

    return 0;
}