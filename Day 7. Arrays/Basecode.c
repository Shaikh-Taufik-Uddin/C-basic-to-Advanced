#include<stdio.h>
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
    for (int i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}