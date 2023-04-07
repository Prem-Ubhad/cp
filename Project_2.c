#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RockPaperScissor(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }
    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));

    int number = rand() % 100 + 1;
    
    if (number < 33)
    {
        comp = 'r';
    }
        if (number < 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("Enter 'r' for rock, 'p' for paper, 's' for scissor\n");
    scanf("%c",&you);

    int result = RockPaperScissor(you, comp);

    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You Win!\n");
    }
    else{
        printf("You Lose!\n");
    }

    printf("You choose %c and computer choose %c\n",you,comp);
    
    return 0;
}