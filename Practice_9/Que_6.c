#include<stdio.h>

typedef struct bank
{
    char name[10];
    int Ac_No;
    int year;
    int money;
}$;


int main(){
    $ coustmer[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of no. %d coustomer : \n",i+1);
        scanf("%s",coustmer[i].name);
        printf("Enter the Account no. of no. %d coustomer : \n",i+1);
        scanf("%d",&coustmer[i].Ac_No);
        printf("Enter the year in which no. %d coustomer opened account : \n",i+1);
        scanf("%d",&coustmer[i].year);
        printf("Enter the amount of money no. %d coustomer have : \n",i+1);
        scanf("%d",&coustmer[i].money);

        printf("\n");
    }
    
    return 0;
}