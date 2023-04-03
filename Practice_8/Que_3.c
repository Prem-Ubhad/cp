#include<stdio.h>

// ALTERNATE FUNCTION FOR STRCPY()

void copy(char *st , char *sp){
    char *ptr = sp;
    char *op = st;
    while(*ptr != '\0'){
         *op = *ptr;
         ptr++;
         op++;
    }
    *op = '\0';
}
int main(){
    char source[] = "MyNameIsPrem";
    char target[34];
    copy(target,source);
    printf("The copied string is : %s",target);
    return 0;
}