// calloc() and malloc() works exactly same except calloc() fills allocated memory blocks with 0's
// while malloc() fills  those memory blocks with garbage values
// both has same syntax except the * in malloc is replaced by , in calloc
// example

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    // int *p = arr;
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d : ", i + 1);
        // scanf("%d", &(*arr));
        // arr++;
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        // printf("%d ", *p);
        // p++;
    }
    free(arr); // frees the memory
    arr = NULL; // moves the now clueless pointer to a null address which is 0x0
    return 0;
}