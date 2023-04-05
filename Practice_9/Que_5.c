#include<stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;



    void display(comp c){
        printf("The value of real part is %d\n",c.real);
        printf("The value of imaginary part is %d\n",c.imaginary);
    }



int main(){
    comp c[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("The value of c[%d].real is \n: ",i);
        scanf("%d",&c[i].real);
        printf("The value of c[%d].imaginary is \n: ",i);
        scanf("%d",&c[i].imaginary);
        
    }
    for (int i = 0; i < 5; i++)
    {
        display(c[i]);
    }
     
    return 0;
}