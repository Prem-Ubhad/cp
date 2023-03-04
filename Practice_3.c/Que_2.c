#include<stdio.h>

int main(){
    int n=10;
    for(int i=10; i; --i){
        printf("%d x %d = %d\n",n,i,i*n);
    }
    return 0;
}