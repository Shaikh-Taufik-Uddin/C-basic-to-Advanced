// change the value of all odd indexed elements to its 2nd multiple and increment all even indexed value by 10 

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("Original array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<=4;i++)
    {
        if(i%2!=0)
        {
            arr[i]=2*arr[i];
        }
        else
        {
            arr[i]=arr[i]+10;
        }
        
    }
    printf("Modified array: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}