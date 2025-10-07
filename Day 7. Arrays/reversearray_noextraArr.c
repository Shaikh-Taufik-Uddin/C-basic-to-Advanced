#include<stdio.h>
void reverse(int arr[],int a)
{
    int i=0;  // used pointer i that goes ahead gradually
    int j=a-1; // used pointer j that moves behind gradually
    // using for loop
    // for (int i=0,j=a-1;i<j;i++,j--) // multi conditioning 
    while(i<=j) // loop continues till they meet // using while loop bcz its easier for cases like this 
    {
        int temp =arr[i]; // swapping 
        arr[i]=arr[j];
        arr[j]=temp;
        i++; // i moves
        j--; // j moves 
    }
    for (int i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
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