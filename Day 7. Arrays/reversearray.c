// wap to copy the contents of one array into another in the reverse order 
#include<stdio.h>
void reverse (int arr[],int a)
{
    int temp[a];
    for(int i=0;i<a;i++)
    {
        temp[i]=arr[a-1-i]; // inserting reversed array elements 
    }
    for(int i=0;i<a;i++)
    {
        arr[i]=temp[i]; // altering the actual array with the elements 
    }
    for (int i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }

    
}
int main()
{
    int a;
    printf("Enter the length of the array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,a);
    return 0;
}