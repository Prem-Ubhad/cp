#include <stdio.h>

void check(char *str, int num)
{
    char *ptr = str;
    char letter = 'u';
    int i = 0;

    while (*ptr != '\0')
    {
        if (*ptr == letter)
        {
            i++;
        }
        ptr++;
    }

    if (i >= 1)
    {
        printf("Character '%c' is present in the string", letter);
    }
}

int main()
{
    char hunk[] = "Dumbluck";
    check(hunk, 8);
    return 0;
}



