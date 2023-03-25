#include <stdio.h>

// int avg(int *a, int *b);

// int main(){
//     int i = 10, j = 20;
//     avg(&i,&j);
//     return 0;
// }
// int avg(int *a, int *b){
//     return printf("Sum of two numbers is %d\nAverage of two numbers is %f",*a + *b,(float)(*a + *b)/2);
// }

// OR

void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}
int main()
{
    int i = 3, j = 6;
    int sum;
    float avg;

    sumAndavg(i, j, &sum, &avg);

    printf("Sum of two numbers is %d\n", sum);
    printf(" Average of two numbers is %0.2f", avg);
    return 0;
}
