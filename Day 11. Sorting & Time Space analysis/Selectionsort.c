// selection sort
// we find for minimum elements in the unsorted part in every round
// for each round (each element sorted) the remaining array downsizes by 1
// for n no of elements we need n-1 rounds
// 0(n2) complexity for best/worst case 
// selection sort is not stable
// it takes O(n) swaps 

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    // Selection Sort
    for (int i = 0; i < n - 1; i++)
    {                      // loop runs n-1 times
        int min = INT_MAX; // start with max possible int
        int mindex;

        for (int j = i; j < n; j++)
        { // loop to find the smallest element in the remaining (unsorted) array
            if (arr[j] < min)
            {                 // checks the individual elements
                min = arr[j]; // updates value in min
                mindex = j;   // marks the index of the smallest element
            }
        }

        // Swap only once per pass (after finding the min)
        int temp = arr[i];
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}