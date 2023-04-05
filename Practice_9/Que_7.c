#include<stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int compare(struct date d1, struct date d2){
   
    if (d1.year>d2.year)
    {
        return 1;
    }
    if (d1.year<d2.year)
    {
        return -1;
    }
   
    if (d1.month>d2.month)
    {
        return 1;
    }
    if (d1.month<d2.month)
    {
        return -1;
    }
   
    if (d1.day>d2.day)
    {
        return 1;
    }
    if (d1.day>d2.day)
    {
        return -1;
    }

    else {
        return 0;
    }
}

int main(){
    struct date d1 = {5, 4, 23};    
    struct date d2 = {5, 4, 23};

   int result = compare(d1, d2); 

   printf("The date comparison function returns : %d",result);   
    return 0;
}