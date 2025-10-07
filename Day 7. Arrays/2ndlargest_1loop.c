#include<stdio.h>
#include<limits.h>
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
    int max=INT_MIN; 
    int smax=INT_MIN;
    for(int i=0;i<b;i++)
    {
        if(arr[i]>max)
        {
            smax=max; // smax is now previous max 
            max=arr[i]; // max is renewed
        }
        else if (arr[i]>smax && max!=arr[i]) //  this code only runs when the value in arr[i] is smaller than max and wont also run if max and arr[i] is same 
        {
            smax=arr[i];
        }
    } 
    printf("%d is the maximum value",max);
    printf("%d is the 2nd maximum value",smax);
    return 0;
}

// 1 loop but only works for increasing order array 

// if(arr[i]>max)
// {
//     smax=max; // smax is now previous max 
//     max=arr[i]; // max is renewed
// }

