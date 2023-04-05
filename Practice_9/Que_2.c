#include<stdio.h>
#include<string.h>

typedef struct employee{
        char name[10];
        int code;
        float salary;
}rem;

void show(struct employee emp){
    printf("name is %s \n",emp.name);
    printf("code is %d \n",emp.code);
    printf("salary is %f \n",emp.salary);
}

int main(){
    rem e1;
    rem *ptr;
    ptr = &e1;

    strcpy(ptr -> name, "Prem");
    ptr -> code = 101;
    ptr -> salary = 50025.64;

    show(e1);
    
    return 0;
}