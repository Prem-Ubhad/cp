#include <stdio.h>
void morning();
void afternoon();
void evening();

int main()
{
    morning();
    afternoon();
    evening();
    return 0;
}

void morning()
{
    printf("GOOD MORNING!\n");
}
void afternoon()
{
    printf("GOOD AFTERNOON!\n");
}
void evening()
{
    printf("GOOD EVENING!\n");
}