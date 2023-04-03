#include<stdio.h>

// PROGRAM TO DECRYPT A STRING 

void decrypt(char *arr){
    char *ptr = arr;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}

int main(){
    char st[] = "[ibuv!Ubonbz";
    decrypt(st);

    printf("The decrypted string is : %s",st);
    return 0;
}