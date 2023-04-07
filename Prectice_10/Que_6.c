#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("Pr06_1.txt","r");
    ptr2 = fopen("Pr06_2.txt","w");

    fscanf(ptr,"%d",&num);

    fprintf(ptr2,"%d",num * 2);
    
    fclose(ptr);
    fclose(ptr2);
    return 0;
}