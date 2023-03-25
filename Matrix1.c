#include <stdio.h>

int main()
{
    int x = 4;
    int a[10][10], b[10][10],resul[10][10];
    printf("Enter first matrix\n ");
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            printf("A [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Enter second matrix\n ");
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            printf("Enter matrix [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            resul[i][j]=0;
            for (int k = 0; k < x; k++)
            {
                resul[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d\t",resul[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}