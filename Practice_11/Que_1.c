#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int n;
    
    printf("Enter the size of array :\n");
    scanf("%d",&n);

    ptr = (float *) malloc(n * sizeof(float));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d \n",i+1);
        scanf("%f",&ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %0.2f\n",i+1,ptr[i]);
    }
    
    free(ptr);
    return 0;
}