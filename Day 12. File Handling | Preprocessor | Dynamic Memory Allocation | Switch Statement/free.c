#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);  // frees the memory
    arr = NULL; // moves the now clueless pointer to a null address which is 0x0
    // free() cannot be used for a pointer that is already moved 
    return 0;
}