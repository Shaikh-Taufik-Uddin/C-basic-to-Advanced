// used to change the allocation allocated by calloc or malloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    arr=realloc(arr,10*sizeof(int)); // realloc 
    for (int i = 0; i < n; i++)
    {
        printf("\nenter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}