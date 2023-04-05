#include<stdio.h>

    void slice(char *s,int n, int m){
        int i = 0;
        while ((n+i)<m)
        {
            s[i] = s[n+i];
            i++;
        }
        s[i] = '\0';
    }

int main(){
    char str[] = "Asphodia";
    slice(str,1,7);
    printf("The sliced string is : %s",str);
    return 0;
}