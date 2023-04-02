#include<stdio.h>

void display(int ptr[3][3],int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",ptr[i][j]);
           
        }
        printf("\n");
    } 
}

int main(){
    int students = 3;
    int subjects = 3;       
    int marks[3][3];

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            printf("Enter the marks of student %d in %d subject\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    printf("\n");
    display(marks,3,3);
    
    return 0;
}