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
    int a=0;
    printf("The sum of all the values in the array is: ");
    for(int i=0;i<b;i++)
    {
        a=a+arr[i];
    }
    printf("%d",a);
    return 0;
}