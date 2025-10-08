// WAP to add all the digits of a n x m matrix
#include<stdio.h>
int main()
{
    int arr1 [3][3]={1,2,3,4,5,6,7,8,9};
    int sum1=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum1=sum1+arr1[i][j];
        }
    }
    printf("%d",sum1);
    return 0;
}