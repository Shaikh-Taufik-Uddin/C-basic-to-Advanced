// rotate a given array by k steps where k is non negetive ( k can be greater than the size for the array )

// e.g. [1,2,3,4,5,6,7] , k=3 -> [5,6,7,1,2,3,4]

// e.g [1,2,3,4] , k=6 -> [3,4,1,2] == k->2 [3,4,1,2] so (k % size) times rotation actually ! 

/*#include<stdio.h>
void rotate(int arr[],int a,int b,int c) // this function reverses the array from a given index to another 
{
    while(b<=c) 
    {
        int temp =arr[b]; // swapping 
        arr[b]=arr[c];
        arr[c]=temp;
        b++; // b moves
        c--; // c moves 
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
    int b;
    int c;
    printf("Enter the length of the array : ");
    scanf("%d",&a);                                      
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value b: ");
    scanf("%d",&b);
    printf("Enter the value c: ");
    scanf("%d",&c);
    rotate(arr,a,b,c);
    return 0;
}*/

// steps for rotatig upto k for any array 
// if k is bigger than size of array , smaller k by k=k%n
// reverse the whole array first 
// reverse from index 0 to k-1
// reverse from index k to n-1

/*#include<stdio.h>
void rotate(int arr[],int a,int b,int c) 
{
    while(b<=c) 
    {
        int temp =arr[b]; // swapping 
        arr[b]=arr[c];
        arr[c]=temp;
        b++; // b moves
        c--; // c moves 
    }
    //this below line prints what happend step by step 
    for (int i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
int main()
{
    int a;
    int k;
    printf("Enter the length of the array : ");
    scanf("%d",&a);                                      
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value k: ");
    scanf("%d",&k);
    k=k%a ; // in case if k is bigger 
    rotate(arr,a,0,a-1);
    rotate(arr,a,0,k-1);
    rotate(arr,a,k,a-1);
    return 0;
}*/
#include<stdio.h>
void rotate(int arr[],int a,int b,int c) 
{
    while(b<=c) 
    {
        int temp =arr[b]; // swapping 
        arr[b]=arr[c];
        arr[c]=temp;
        b++; // b moves
        c--; // c moves 
    }
    return;
}
int main()
{
    int a;
    int k;
    printf("Enter the length of the array : ");
    scanf("%d",&a);                                      
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value k: ");
    scanf("%d",&k);
    k=k%a ;
    rotate(arr,a,0,a-1);
    rotate(arr,a,0,k-1);
    rotate(arr,a,k,a-1);
    printf("The rotated array is ");
    for (int i=0; i<a; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}