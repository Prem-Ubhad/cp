#include<stdio.h>
#include<math.h>

int main(){
    int b;

    printf("Enter the value of b\n");
    scanf("%d",&b);

    if(b<5){
        printf("b is less than 5");
    }
    else{
        printf("b is greater than 5");
    }
    return 0;
}