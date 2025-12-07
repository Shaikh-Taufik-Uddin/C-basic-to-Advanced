#include <stdio.h>

void printrow(int r)
{
    int element = 1;
    printf("%d ", element);

    for (int c = 1; c < r; c++)   // loop for printing row
    {
        element = element * (r - c) / c;
        printf("%d ", element);
    }
}

int main()
{
    int n;
    printf(" Enter number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = n - i;

        for (int j = a; j >= 1; j--)   // loop for printing upside-down triangle
        {
            printf(" ");
        }

        printrow(i);   // row printer
        printf("\n");
    }

    return 0;
}


// better method (but maths heavy) 
// below part is only for the actual triangle not the spaces too !

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);

//     for (int i = 0; i <= n; i++) {
//         int first = 1;
//         printf("%d ", first);

//         for (int j = 0; j <= i; j++) {
//             printf("%d ", first);
//             first = first * (i - j) / (j + 1);
//         }
//         printf("\n");
//     }

//     return 0;
// }


