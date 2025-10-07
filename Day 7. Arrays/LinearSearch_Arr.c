// Given an array & a number X find out if X lies  in the array or not , if yes then print the index 
/*#include<stdio.h>
int main()
{
    int a;
    int x;
    int check = 0 ; // 0 means element not present = false 
    printf("Enter the length of the array : ");
    scanf("%d",&a);                                      
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Search a number: ");
    scanf("%d",&x);
    int i;
    for (i=0; i<a; i++)
    {
        if (arr[i]==x)
        {
            printf("%d exists in %d index ",x,i);
            check=1; 
        } 
    }
    if(check!=1)
        {
            printf("The number doesn't exist in the array");
        }
    return 0;
}*/

// for finding the same number with biggest index // multiple same number is give 
// for (int i=a; i>=0; i--)
//     {
//         if (arr[i]==x)
//         {
//             printf("\n%d exists in %d index ",x,i);
//             break;
//         }
//     }

// using bool 

#include<stdio.h>
#include<stdbool.h> // header file necessary for using bool datatype 
int main()
{
    int a;
    int x;
    bool flag = false ; // bool datatype can only hold true or false 
    printf("Enter the length of the array : ");
    scanf("%d",&a);                                      
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Search a number: ");
    scanf("%d",&x);
    int i;
    for (i=0; i<a; i++)
    {
        if (arr[i]==x)
        {
            printf("\n%d exists in %d index ",x,i);
            flag=true; 
        } 
    }
    if(flag==false)
        {
            printf("The number doesn't exist in the array");
        }
    return 0;
}

