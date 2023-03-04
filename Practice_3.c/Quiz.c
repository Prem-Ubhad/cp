#include <stdio.h>

// Program to print natural numbers from 10 to 20 while taking input as 0

// int main()
// {
//     int i = 0;
//     while (i >= 0 && i <= 10)
//     {
//         printf("%d\n", i + 10);

//         i++;
//     }


                        //  OR


    int main()
    {
        int i = 0;
        while (i <= 20)
        {
            if (i >= 10)
            {
                printf("%d\n", i);
            }
            i++;
        }

    return 0;
}

// for (int i = 0; i < 100; i++)
// {
//     for (int j=0; j < i; j++)
//     {
//         printf("*");
//     }
//     printf("\n");
// }
