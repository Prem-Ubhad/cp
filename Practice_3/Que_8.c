#include <stdio.h>

// Program to find whether a number is prime or not

int main()
{
    int prime = 1, n;

    printf("Enter the number: \n");
    scanf("%d", &n);

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if (prime == 0)
    // {
    //     printf("This is not a prime number");
    // }
    // else
    // {
    //     printf("This is a prime number");
    // }



    //                                      USING DO WHILE



    int i = 2;
    // do
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    //     i++;
    // } while (i < n);

    // if (prime == 0 && n != 2)
    // {
    //     printf("This is not a prime number");
    // }
    // else
    // {
    //     printf("This is a prime number");
    // }


    //                                        USING WHILE


    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    }

    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}