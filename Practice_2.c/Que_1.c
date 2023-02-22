#include <stdio.h>

//Program to tell whether you failed or passed the exam

int main()
{
    int Maths;
    int Physics;
    int Chemistry;
    float total;;

    printf("Marks obtained in maths = ");
    scanf("%d", &Maths);

    printf("Marks obtained in physics = ");
    scanf("%d", &Physics);

    printf("Marks obtained in chemistry = ");
    scanf("%d", &Chemistry);

    total=(Maths+Chemistry+Physics)/3;

    if ((Maths >= 33) && (Physics >=33 ) && (Chemistry >=33 ) && (total >= 47))
    {
        printf("You Passed and your percentage is %f",total);
    }
    else
    {
        printf("You have Failed!");
    }

    return 0;
}