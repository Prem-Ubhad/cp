#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n = 7;

    ptr = (int *) malloc(10 * sizeof(int));

        for (int i = 0; i < 10; i++)
        {
            ptr[i] = n * (i+1);
        }

        printf("The multiplication Table of %d is \n\n",n);
        
        for (int i = 0; i < 10; i++)
        {
        printf("%d x %d = %d\n",n, i+1, ptr[i]);
        }
    
    printf("\n\n");

    ptr = realloc(ptr,15 * sizeof(int));

        for (int i = 0; i < 15; i++)
        {
            ptr[i] = n * (i+1);
        }

        printf("The multiplication Table of %d is \n\n",n);
        
        for (int i = 0; i < 15; i++)
        {
        printf("%d x %d = %d\n",n, i+1, ptr[i]);
        }

    free(ptr);
    return 0;
}