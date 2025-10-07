// #include<stdio.h>
// int main()
// {
//     int arr[5];
//     printf("enter 1st element: ");
//     scanf("%d",&arr[0]);
//     printf("enter 2nd element: ");
//     scanf("%d",&arr[1]);
//     printf("enter 3rd element: ");
//     scanf("%d",&arr[2]);
//     printf("enter 4th element: ");
//     scanf("%d",&arr[3]);
//     printf("enter 5th element: ");
//     scanf("%d",&arr[4]);
//     printf("The array is : ");
//     printf("%d ",arr[0]);
//     printf("%d ",arr[1]);
//     printf("%d ",arr[2]);
//     printf("%d ",arr[3]);
//     printf("%d ",arr[4]);
//     return 0;
// }

// upper method of printing is very inefficient , so we use loops instead 

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printf("The array is : ");
//     for(int i=0;i<=4;i++) // i goes from 0 to 4 beacause for this array of 5 the indexing goes form 0 to 4 
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// } 

// improving input methods too this array

#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter the numbers: \n");
    for(int i=0;i<=4;i++) // i goes from 0 to 4 beacause for this array of 5 the indexing goes form 0 to 4 
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is : \n");
    for(int i=0;i<=4;i++) 
    {
        printf("%d ",arr[i]);
    }
    return 0;
} 