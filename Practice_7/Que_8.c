#include<stdio.h>

// TABLE OF 5 USING ARRAY

int main(){
    int table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i] = 5 * (i+1);
        printf("%d x %d = %d\n",5,i+1,table[i]);
    }
    return 0;
}