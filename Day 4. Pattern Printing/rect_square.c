#include <stdio.h>
int main ()
{   
    int row ;
    int col ;
    printf("enter the number of rows ");
    scanf("%d",&row);
    printf("enter the number of coloumns ");
    scanf("%d",&col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("*");
        }
        printf("\n");    }
    return 0 ;
}