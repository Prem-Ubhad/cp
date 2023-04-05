#include<stdio.h>
#include<string.h>

    struct employee{
        int ID;
        char name[10];
        float salary;
    };

int main(){


    struct employee e1,e2,e3;

    printf("Enter the name of first employee : ");
    scanf("%s",e1.name);

    printf("Enter the ID of first employee : ");
    scanf("%d",&e1.ID);

    printf("Enter the salary of first employee : ");
    scanf("%f",&e1.salary);

    printf("\n");

    printf("Enter the name of second employee : ");
    scanf("%s",e2.name);

    printf("Enter the ID of second employee : ");
    scanf("%d",&e2.ID);

    printf("Enter the salary of second employee : ");
    scanf("%f",&e2.salary);

    printf("\n");


    printf("Enter the name of third employee : ");
    scanf("%s",e3.name);

    printf("Enter the ID of third employee : ");
    scanf("%d",&e3.ID);

    printf("Enter the salary of third employee : ");
    scanf("%f",&e3.salary);

    printf("\n");

    printf(" The name of first employee is : %s\n",e1.name);
    printf("The ID of first employee is : %d\n",e1.ID);
    printf("The salary of first employee is : %0.2f\n\n",e1.salary);
    
    printf("\n");

    printf("The name of second employee is : %s\n",e2.name);
    printf("The ID of second employee is : %d\n",e2.ID);
    printf("The salary of second employee os : %0.2f\n\n",e2.salary);
    
    printf("\n");
    
    printf("The name of third employee is : %s\n",e3.name);
    printf("The ID of third employee is : %d\n",e3.ID);
    printf("The salary of third employee is : %0.2f\n\n",e3.salary);
    

    return 0;
}