#include<stdio.h>

int main(){
    int vaibhav[7],aman=89;
    for (int i = 0; i < 7; i++)
    {
        vaibhav[i]=aman;
        ++aman;
    }
    
    for (int i = 0; i < 7; i++)
    {
    printf("%d\n",vaibhav[i]);
        
    }
    
    return 0;
}