// write roll program to store the roll number and marks obtained by 4 students side by side in roll matrix
#include<stdio.h>
int main()
{
    int arr[4][2];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the marks for roll %d subject %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}