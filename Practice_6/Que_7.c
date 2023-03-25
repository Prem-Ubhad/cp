#include<stdio.h>

int main(){
    int i = 10;
    int *j = &i;
    int **h = &j;
    printf("The value of the variable i is %u", **h);
    return 0;
}