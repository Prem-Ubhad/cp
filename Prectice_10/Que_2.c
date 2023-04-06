#include<stdio.h>

int main(){
    FILE *ptr;
    int num, num2, num3;
    ptr = fopen("pr01.txt","r");
    fscanf(ptr,"%d%d%d",&num, &num2, &num3);
    fclose(ptr);
    printf("The three integers written in file are %d %d %d",num,num2,num3);
    return 0;
}