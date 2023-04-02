#include <stdio.h>

// TABLE OF N, N AND N USING ARRAY

void printTable(int *table, int num, int n)
{
    printf("\nThe Multiplication Table of %d is\n\n ",num);
    for (int i = 0; i < n; i++)
    {
        table[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, table[i]);
    }
    printf("\n*************");
    printf("\n\n");
}


int main()
{   
    int p,q,r;
    int table[3][10];
    printf("Enter the numbers whose table you want : ");
    scanf("%d%d%d",&p,&q,&r);
    printTable(table[0], p, 10);
    printTable(table[0], q, 10);
    printTable(table[0], r, 10);

    return 0;
}