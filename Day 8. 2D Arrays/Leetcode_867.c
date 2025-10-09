// write a program to change a matrix to its transpose
#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6,7,8,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++) // to avoid reswap we started j from i 
        {
            // if(i!=j) diagonal swap isn't concern 
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }

        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*better version by functions and pointers
#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Transpose in-place
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++) // start from i+1 to avoid reswapping
        {
            swap(&arr[i][j], &arr[j][i]); // pass addresses of elements
        }
    }

    // Print transposed matrix
    printf("Transpose of matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*#include <stdio.h>
int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int trans[3][2];
    for (int i = 0; i < 3; i++) // to store and print the transpose
    {
        for (int j = 0; j < 3; j++)
        {
            trans[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 2;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
        return 0;
}*/

/*#include<stdio.h> // for only printing transpose
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/