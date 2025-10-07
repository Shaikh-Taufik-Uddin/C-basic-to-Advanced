// count the number of elements in given array greater than a given number X

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int x =3;
    int count =0;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}