#include<stdio.h>
int main()
{
    int range ;
    printf("enter the range: ");
    scanf("%d",&range);
    int arr[range];
        for (int i=0,j=1;i<range,j<=range;i++,j++) // auto feeding values 
        {
            arr[i]=j;
        }
        for(int i=0;i<range;i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}