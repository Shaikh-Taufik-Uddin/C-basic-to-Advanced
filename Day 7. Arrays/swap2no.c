#include<stdio.h>
void swapper(int arr[]) // address of an array == address of the 1st element of the array
{
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main()
{
    int arr[2]={1,2};
    printf("\n%d",arr[0]);
    printf("%d",arr[1]);
    swapper(arr);
    printf("\n%d",arr[0]);
    printf("%d",arr[1]);
    return 0;
}