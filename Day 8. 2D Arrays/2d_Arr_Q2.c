// given a matrix 'a' of dimension nxm and 2 coordinates (l1,r1) and (l2,r2).
// return the sum of the rectangle from (l1,r1) to (l2,r2)
#include<stdio.h>
int main()
{
    int arr1 [3][3]={1,2,3,4,5,6,7,8,9};
    //123
    //456
    //789
    int sum1=0; 
    for(int i=0;i<2;i++) // for summing 2356
    {
        for(int j=1;j<3;j++)
        {
            sum1=sum1+arr1[i][j];
        }
    }
    printf("%d",sum1);
    return 0;
}