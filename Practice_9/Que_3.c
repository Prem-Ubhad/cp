#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}Vec;

Vec SumVector(Vec v1, Vec v2){
     struct vector result;
     result.x = v1.x + v2.x;
     result.y = v1.y + v2.y;
     return result;
}

int main(){
    Vec v1,v2,sum;
    v1.x = 5;
    v1.y = 6;

    v2.x = 2;
    v2.y = 9;

    sum = SumVector(v1, v2);
    printf("The x dimension of vector is %d and the y dimension of vector is %d ",sum.x,sum.y);
    return 0;
}