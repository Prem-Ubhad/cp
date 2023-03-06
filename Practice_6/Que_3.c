 #include<stdio.h>
 
 int main(){
    int a=52;
    int *j;
    j = &a;
    printf("The adress of the variable a is %u\n",&a);
    printf("The adress of the variable a is %u\n",j);
    printf("The value of the variable a is %u",*j);

    return 0;
 }