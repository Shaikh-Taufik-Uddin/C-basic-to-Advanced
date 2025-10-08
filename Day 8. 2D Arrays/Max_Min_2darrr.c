// WAP to find out the maximum and minimum element in a 2d array 
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int max = INT_MIN;
    int min = INT_MAX;
    int index1[2],index2[2] ;
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
                index1[0]=i;
                index1[1]=j;
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
                index2[0]=i;
                index2[1]=j;
            }
        }
    }
    printf("\n%d is the smallest value and its index is %d,%d",min,index2[0],index2[1]);
    printf("\n%d is the greatest value and its index is %d,%d",max,index1[0],index1[1]);
    return 0;
}
