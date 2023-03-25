#include<stdio.h>

int main(){
    int first[3][3],second[3][3],result[3][3];
    printf("Enter the element of first array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        
    }
    printf("Enter the element of second array:\n");
    // int first[3][3],second[3][3],result[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j]=first[i][j]+second[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
        
    }
    

    

    return 0;
}