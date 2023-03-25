#include<stdio.h>

int main(){
    int x=4,y=4;
    int first[x][y],second[x][y],resultes[x][y];
    printf("Enter the first matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i][j]);
        }
        
    }
    printf("Enter the secound matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i][j]);
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            resultes[i][j]=0;
            for (int k = 0; k < y; k++)
            {
                resultes[i][j]+=first[i][k]*second[k][j];
            }
            
        }
        
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d\t",resultes[i][j]);
            
        }
        printf("\n");
    }
    
    
    return 0;
}