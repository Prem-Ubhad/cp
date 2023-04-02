#include<stdio.h>

// TABLE OF N USING ARRAY

int main(){
    int table[10];
    int n;
    
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i+1);
        printf("%d x %d = %d\n",n,i+1,table[i]);
    }
    
    return 0;
}