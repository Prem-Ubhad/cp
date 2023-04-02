#include<stdio.h>

int main(){
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("\n");
    printf("The matrix is :\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
            
        }
        printf("\n");
        
    }
    
    return 0;
}