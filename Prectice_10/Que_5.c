#include<stdio.h>

int main(){
    char name1[10];
    int salary1;
    char name2[10];
    int salary2;
    FILE *ptr;
    ptr = fopen("Pr05.txt","w");

    printf("Enter the name of the first employee : ");
    scanf("%s",name1);

    printf("Enter the salary of the first employee : ");
    scanf("%d",&salary1);


    printf("Enter the name of the second employee : ");
    scanf("%s",name2);

    printf("Enter the salary of the second employee : ");
    scanf("%d",&salary2);

    fprintf(ptr,"%s, %d\n",name1, salary1);
    fprintf(ptr,"%s, %d",name2, salary2);

    fclose(ptr);
    return 0;
}