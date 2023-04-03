#include <stdio.h>

// PROGRAM TO COUNT THE OCCURANCES OF A CHARACTER

int occurance(char arr[], char c)
{
    char *ptr = arr;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[] = "Grrrrrrr.....";
    int p = occurance(st, 'r');
    printf("The occurance of i in string is %d times", p);
    return 0;
}