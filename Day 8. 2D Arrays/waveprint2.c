#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j % 2 == 0)
            {
                for (int k = 2; k >= 0; k--)
                {
                    printf("%d ", arr[k][j]);
                }
                printf("\n");
            }
            else
            {
                for (int k = 0; k < 3; k++)
                {
                    printf("%d ", arr[k][j]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}
/* betterd by AI
#include <stdio.h>
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
*/