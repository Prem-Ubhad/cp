#include<stdio.h>

// TABLE OF 2, 7 AND 9 USING ARRAY

int main(){
    int table[10][3], j;
    for (int i = 0; i < 10; i++)
    {
        table[i][0] = 2 * (i+1);
        table[i][1] = 7 * (i+1);
        table[i][2] = 9 * (i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("2 x %d = %d\n",i+1,table[i][0]);
        
    }
    
    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {
       
        printf("7 x %d = %d\n",i+1,table[i][1]);
       
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
       
        printf("9 x %d = %d\n",i+1,table[i][2]);
    }
    printf("\n");
    
    return 0;
}