// write a program to print the row number having the maximum sum in a given matrix 
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr1 [3][3]={1,2,3,4,5,6,7,8,9};
    int sum1,sum2[3];
    for(int i=0;i<3;i++)
    {
        sum1=0;
        for(int j=0;j<3;j++)
        {
            sum1=sum1+arr1[i][j];
        }
        sum2[i]= sum1;
    }
    int max= INT_MIN;
    int row;
    for(int i=0;i<3;i++)
    {
        if(sum2[i]>max)
        {
            max=sum2[i];
            row=i+1;
        }
    }
    printf("Row %d has the maximum sum value of %d",row,max);
    return 0;
}