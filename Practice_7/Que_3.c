#include <stdio.h>

int main()
{
  float i = 3.0, j = 2.5;
  
  float *ptr = &i, *pt = &j;

  int c;

  printf("The value of ptr is %u\n", ptr);
  printf("The value of pt is %u\n", pt);

  c = ptr - pt;

  printf("The value of c is %d\n", c);

  return 0;
}