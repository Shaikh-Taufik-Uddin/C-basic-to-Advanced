// given an array of integers with 1 to n elements and the size of the array if n+1
// one element is occuring more than once i.e duplicate number is present
// find the duplicate element

// most optimized version with time complexity O(n)
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 10};
    int sum1 = (10 * (10 + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum2 += arr[i];
    }
    int duplicate = sum2 - sum1;
    printf("%d", duplicate);
    return 0;
}