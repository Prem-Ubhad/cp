#include <stdio.h>
void premusingswitch(int marks)
{
    switch (marks)
    {
    case 90 ... 100:
        printf("Your grade is A\n");
        break;
    case 80 ... 89:
        printf("Your grade is B\n");
        break;
    case 70 ... 79:
        printf("Your grade is C\n");
        break;
    case 60 ... 69:
        printf("Your grade is D\n");
        break;
    case 101 ... 10000000:
        printf("Enter valide value\n");
        break;

    default:
        printf("You have failed the exam");
        break;
    }
}
void premusinginelse(int marks)
{
    if ((marks > 90) && (marks <= 100))
    {
        printf("Your ie grade is A\n");
    }
    else if ((marks < 90) && (marks >= 80))
    {
        printf("Your ie grade is B\n");
    }
    else if ((marks < 80) && (marks >= 70))
    {
        printf("Your ie grade is C\n");
    }
    else if ((marks < 70) && (marks >= 60))
    {
        printf("Your ie grade is D\n");
    }
    else if (marks > 100)
    {
        printf("Plese enter valid input\n");
    }

    else
    {
        printf("You have failed the exam");
    }
}
int main()
{
    int marks;
    // Program to give grade to the student according to the marks obtained

    printf("Enter the marks obtained = ");
    scanf("%d", &marks);
    premusingswitch(marks);
    // premusinginelse(marks);
    return 0;
}