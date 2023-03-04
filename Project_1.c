#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("This is random number %d\n", number);

    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Guess a Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Guess a Higher number please!\n");
        }
        else
        {
            printf("You have guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}