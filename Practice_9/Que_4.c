#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[10];
    int Id;
    float marks;
}Stu;

int main(){
    Stu S1;
    Stu *ptr;
    ptr = &S1;

    // strcpy((*ptr).name,"Harry");
    // (*ptr).Id = 100;
    // (*ptr).marks = 79.85;

    strcpy(ptr -> name,"Harry");
    ptr -> Id = 100;
    ptr -> marks = 79.85;

    printf("name is %s \n",S1.name);
    printf("Id is %d \n",S1.Id);
    printf("marks is %0.2f \n",S1.marks);


    return 0;
}