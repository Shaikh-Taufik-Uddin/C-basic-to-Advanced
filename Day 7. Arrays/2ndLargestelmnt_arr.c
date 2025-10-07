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
    for(int i=0;i<b;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i=0;i<b;i++)
    {
        if(arr[i]!=max && arr[i]>smax) // excluded previous maximum value form entering the loop 
        {
            smax=arr[i];
        }
    }
    printf("%d is the maximum value",max);
    printf("%d is the 2nd maximum value",smax);
    return 0;
}


// AI suggestion for all similar number 
// if(smax == INT_MIN) {
//     printf("\nAll elements are equal, no distinct second maximum value");
// } else {
//     printf("\n%d is the 2nd maximum value", smax);
// }