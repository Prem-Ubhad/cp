#include <stdio.h>
struct employee
{
    char name [30];
    int emp id;
    float salary;
};
int main()
{
    struct mployee emp;
    printf("\n Enter Details:\n");
    printf("Name?:");
    printf("ID:");
    scanf("%d",&emp.empid);
    printf("Salary?:");
    scanf("%f",&empsalary);
    /*Print Employee Details*/
    printf("\n Entered Details is:");
    printf("Name:%s",empname);
    printf("ID:%d",emp.empid);
    pintf("Salary:%f\n",emp.salary);
    return 0;
}