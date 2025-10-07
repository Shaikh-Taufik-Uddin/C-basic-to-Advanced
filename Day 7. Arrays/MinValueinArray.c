#include<stdio.h>
int main()
{
    int b;
    printf("Enter the length of the array : ");
    scanf("%d",&b);
    int arr[b];
    for(int i=0;i<b;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0]; 
    for(int i=0;i<b;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d is the minimum value",min);
    return 0;
}