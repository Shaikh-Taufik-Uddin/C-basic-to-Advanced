// WAP to store 10 at every index of 2d matrix with 5 rows and 5 coloumns 
#include<stdio.h>
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            arr[i][j]=10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}