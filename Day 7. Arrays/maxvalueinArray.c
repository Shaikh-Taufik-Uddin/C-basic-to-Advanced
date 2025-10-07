// #include<stdio.h>
// int main()
// {
//     int b;
//     printf("Enter the length of the array : ");
//     scanf("%d",&b);
//     int arr[b];
//     for(int i=0;i<b;i++)
//     {
//         printf("Enter the value no %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max=-1; // only works for +ve integers
//     for(int i=0;i<b;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("%d is the maximum value",max);
//     return 0;
// 

// improved code

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
    int max=arr[0]; 
    for(int i=0;i<b;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d is the maximum value",max);
    return 0;
}

// using header file 
//
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int b;
//     printf("Enter the length of the array : ");
//     scanf("%d",&b);
//     int arr[b];
//     for(int i=0;i<b;i++)
//     {
//         printf("Enter the value no %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN; 
//     for(int i=0;i<b;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     printf("%d is the maximum value",max);
//     return 0;
// }