#include<stdio.h>

int main(){
    int a ;
    FILE *ptr;
    ptr = fopen("pr02.txt","w");
    
    printf("Enter the number whose table you want : ");
    scanf("%d",&a);
    
    fprintf(ptr,"Multiplication Table of %d\n\n",a);
    
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n", a, i, a * i);
    }
    
    fclose(ptr);
    
    return 0;
}