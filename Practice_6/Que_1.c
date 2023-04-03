#include<stdio.h>

int main(){
    int i=32;
    int *j = &i;
    int **k;
    k = &j; 

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n\n",*j);

    printf("The adress of i is %d\n",j);
    printf("The adress of i is %u\n",&i);
    printf("The adress of i is %d\n\n",*(&j));

    printf("The adress of j is %d\n",&j);
    printf("The adress of j is %d\n\n",k);

    printf("The value of i is %d\n",**k);
    printf("The adress of k is %d\n\n",&k);

    return 0;
}