#include<stdio.h>

struct datetime{
    int day;
    int month;
    int year;
    int sec;
    int minute;
    int hour;
};

int compare(struct datetime td1, struct datetime td2){
   
    if (td1.year>td2.year)
    {
        return 1;
    }
    if (td1.year<td2.year)
    {
        return -1;
    }
   
    if (td1.month>td2.month)
    {
        return 1;
    }
    if (td1.month<td2.month)
    {
        return -1;
    }
   
    if (td1.day>td2.day)
    {
        return 1;
    }
    if (td1.day>td2.day)
    {
        return -1;
    }

    if (td1.hour>td2.hour)
    {
        return 1;
    }
    if (td1.hour<td2.hour)
    {
        return -1;
    }
   
    if (td1.minute>td2.minute)
    {
        return 1;
    }
    if (td1.minute<td2.minute)
    {
        return -1;
    }
   
    if (td1.sec>td2.sec)
    {
        return 1;
    }
    if (td1.sec>td2.sec)
    {
        return -1;
    }

    else {
        return 0;
    }
}

int main(){
    // dd/mm/yy/hour/minute/sec
    struct datetime td1 = {5,4,23,19,2,23};    
    struct datetime td2 = {5,4,22,19,2,23};

   int result = compare(td1, td2); 

   printf("The datetime comparison function returns : %d",result);   
    return 0;
}