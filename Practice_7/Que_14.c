#include<stdio.h>

int main(){
    int arr[2][3][4][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
               for (int l = 0; l < 5; l++)
               {
                 printf("The address of element [%d][%d][%d][%d] is : %d\n",i,j,k,l,&arr[i][j][k][l]);
               }
               
            }
            
        }
        
    }
    
    return 0;
}