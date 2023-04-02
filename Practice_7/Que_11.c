#include<stdio.h>
 
//  PROGRAM TO COUNT NUMBER OF POSITIVE INTEGERS IN AN ARRAY

void positive(int *array, int n){
    int PosInt = 0;
  for (int i = 0; i < n; i++)
  {
    if(array[i] > 0){
         PosInt = PosInt + 1;
   }
  }
   printf("%d",PosInt);
}

int main(){
    int array[]= {1,-2,-6,9,-8,9};
    positive(array,6);
    return 0;
}