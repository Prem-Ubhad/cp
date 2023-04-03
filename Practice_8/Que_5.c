#include<stdio.h>

// PROGRAM TO ENCRYPT A STRING 

void encrypt(char *arr){
    char *ptr = arr;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}

int main(){
    char st[] = "Zhatu Tanmay";
    encrypt(st);

    printf("The encrypted string is : %s",st);
    return 0;
}