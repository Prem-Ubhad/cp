#include <stdio.h>

void adress(int x);

int main()
{
    int i = 4;
    printf("The adress of i is %u\n", &i);
    adress(i);
    return 0;
}

void adress(int x)
{
    printf("The adress of the variable is %u ", &x);
}