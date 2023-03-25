#include <stdio.h>
#define Max_SIZE 100

int main()
{
    int arr[Max_SIZE];
    int i, size, tosearch, found;
    printf("Enter the size of arr: ");
    scanf("%d", &size);
    printf("Enter element of array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &tosearch);
    found = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == tosearch)
        {

            found = 1;
            break;
        }
    }
    // printf("%d",i);
    if (found == 1)
    {
        printf("%d is found at position %d", tosearch, i + 1);
    }
    else
    {
        printf("%d is not found ", tosearch);
    }

    return 0;
}
