#include<stdio.h>

int fibonacci(int num);

int main(){
    int n;
    printf("Enter the number of elements to be in series: \n");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
    printf("%d, ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int num){
    if(num == 0){
       return 0; 
    }
    else if(num == 1){
        return 1;
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
