#include <stdio.h>
#include<string.h>
struct student {
    char name[50];
    int roll;
    float marks;
} ;

int main() {

    struct student s;
    strcpy(s.name,"aman");
    s.roll=2079;
    s.marks=30;
    printf("name %s",s.name);
    printf("roll %d",s.roll);
    printf("marks %0.2f",s.marks);


    return 0;
}
