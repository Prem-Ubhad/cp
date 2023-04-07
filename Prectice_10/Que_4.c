#include <stdio.h>

int main()
{
    char c;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("Pr04_1.txt", "r");
    ptr2 = fopen("Pr04_2.txt", "w");

    c = fgetc(ptr);

    while (c != EOF)
    {
        fputc(c, ptr2);
        c = fgetc(ptr);
    } 


    fclose(ptr);
    fclose(ptr);

    return 0;
}