// find the difference between the sum of elements at even indices to the sum of elements at odd indices 

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int sum1=0;
    int sum2=0;
    for(int i=0;i<=4;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+arr[i];
        }
        else
        {
            sum2=sum2+arr[i];
        }
    }
    printf("%d",sum2-sum1);
    return 0;
}