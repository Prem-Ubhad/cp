#include <stdio.h>
#include <string.h>
struct employee
{
    char empname[30];
    int empid;
    float empsalary;
};
int main()
{
    // char m[20];

    struct employee emp;
    // strcpy(emp.empname,m);
    emp.empid = 104;
    emp.empsalary = 100000;
    scanf("%s", emp.empname);
    printf("name of employee is %s\n", emp.empname);
    printf("id of employee is %d\n", emp.empid);
    printf("salary of employee is %f\n", emp.empsalary);

    return 0;
}