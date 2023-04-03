#include <stdio.h>

int main()
{
    char str[10];
    char str2[10];
    char c;
    int i = 0;

    printf("Enter the value of str : ");
    scanf("%s", str);


    printf("Enter the value of str2 : ");

    while (c != '\n') 
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i] = c;
        i++;
    }
    str2[i] = '\0';

    printf("The value of str is %s\n", str);

    printf("The value of str2 is %s\n", str2);

  
    return 0;
}
