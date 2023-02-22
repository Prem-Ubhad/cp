#include<stdio.h>
// Program to find the greatest of 4 number
void Prem(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        printf("%d is the greatest number\n",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the greatest number\n",b);
    }
    else if(c>a && c>b && c>d){
     printf("%d is the greatest number\n",c);   
    }
    else if(d>a && d>b && d>c){
        printf("%d is the greatest number\n",d);   
    }
    else
    {
        printf("inapropriate input..");
    }

}
int main(){
    int a,b,c,d;
    printf("Enter the numbers a,b,c,d: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Prem(a,b,c,d);
    
    
    return 0;
}