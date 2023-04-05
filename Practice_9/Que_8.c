#include<stdio.h>

struct time{
    int sec;
    int minute;
    int hour;
};

int compare(struct time t1, struct time t2){
   
    if (t1.hour>t2.hour)
    {
        return 1;
    }
    if (t1.hour<t2.hour)
    {
        return -1;
    }
   
    if (t1.minute>t2.minute)
    {
        return 1;
    }
    if (t1.minute<t2.minute)
    {
        return -1;
    }
   
    if (t1.sec>t2.sec)
    {
        return 1;
    }
    if (t1.sec>t2.sec)
    {
        return -1;
    }

    else {
        return 0;
    }
}

int main(){
    struct time t1 = {18,51,23};    
    struct time t2 = {19, 15, 26};

   int result = compare(t1, t2); 

   printf("The time comparison function returns : %d",result);   
    return 0;
}