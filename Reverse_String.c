#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "lufituaeB gninromdooG";
	char *p = str + strlen(str);
	p--; 

	for (int i = 0; i < strlen(str); i++, p--)
	{
		printf("%c", *p);
	}

	return 0;
}