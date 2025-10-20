#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 2, 2};
    int n = 7;
    int number = 0;
    int number2 = 0;
    int count = 0;
    printf("The unsorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        number = number * 10 + arr[i];
    }
    printf("\n%d is the smallest number", number);
    bool flag = false;
    int x = 2;
    while (flag == false)
    {
        if (arr[n - x] != arr[n - x + 1])
        {
            int temp = arr[n - x];
            arr[n - x] = arr[n - x + 1];
            arr[n - x + 1] = temp;
            flag = true;
        }
        else
        {
            x++;
        }
    }
    printf("\nThe new array again is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        number2 = number2 * 10 + arr[i];
    }
    printf("\n%d is the 2nd smallest number", number2);
    printf("\nThe summation of them is %d", number + number2);
    return 0;
}

// only fail case if all elements are same e.g 1,1,1,1,1,1,1