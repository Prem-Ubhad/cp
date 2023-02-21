#include <stdio.h>

int main()
{
    int radius = 3;
    float pi = 3.14;
    printf("The Area of this circle is: %f\n", pi * radius * radius);
    int height = 5;
    printf("The Volume of Cylinder is: %f\n", pi * radius * radius * height);
    printf("The area of semicircle is: %f",pi * radius * radius / 2);
    return 0;
}