#include <stdio.h>
// Program to find Income Tax
int main()
{
    float tax = 0, income;
    printf("Enter your income = ");
    scanf("%f", &income);

    if (income <= 500000 && income >= 250000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
   else if (income <= 1000000 && income >= 500000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("The tax on your income is %f", tax);
    return 0;
}