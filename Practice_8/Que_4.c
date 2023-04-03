#include <stdio.h>

int length(char *arr)
{   char *ptr = arr;
    int n=0;
    while (*ptr != '\0')
    {
        n = n + 1;
        ptr++;
    }
    return n;
}

int main()
{
    char str[] = "Bitch";
    int p = length(str);
    
    printf("The length of the string is : %d", p);

    return 0;
}