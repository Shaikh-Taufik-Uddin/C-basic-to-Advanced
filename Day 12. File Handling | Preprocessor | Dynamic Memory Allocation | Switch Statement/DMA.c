// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n]; // size is getting allocated in runtime not compile time
//     return 0;
// }

// but this type of allocation is not robust and can give unexpected errors

// thats where dynamic memory allocation comes in

// int* marks = (int *)malloc(n * sizeof(int));
/*A pointer to a single contiguous block of memory,large enough to hold n integers
visually : marks array looks like [ int ][ int ][ int ][ int ] ... (n elements)
very similr to arr[n] where n was user input but more robust */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int a = sizeof(int); // how many bytes int take ?
    // int *marks; // a pointer to point
    int n; // to take input of the size of the array
    printf("Enter the size of you array: ");
    scanf("%d", &n);
    int *marks = (int *)malloc(n * sizeof(int)); // array marks is declared
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d : ", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }
    // (int*) for typecasting the return type of malloc function
    // n*sizeof(int) to calculate the size for n no of integers that is to be allocated
    // now an array of dynamic size is created successfully and it behaves exactly like an array
    return 0;
}
