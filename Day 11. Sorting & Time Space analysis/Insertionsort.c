/*Start from the second element (index 1) since the first element is trivially sorted.

Compare the current element (key) with the elements in the sorted portion to its left.

Shift all elements that are greater than the key to one position ahead.

Insert the key at the correct position in the sorted subarray.

Repeat until all elements are sorted.

O(n2) for worst and avg cases but O(n) for best case (sorted array)

insertion sort is stable */

#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 3, 2, 1, 0};
    int n = 6;
    for (int i = 1; i < n; i++) // i=1 taken because by default the 1st element is considerd sorted for arr of size 1
    {
        // loop runs index[1] to index[n-1] (because <n)
        int j = i;                           // j is set to value of i bcz as iterations go the arrays before ith index is already considerd sorted
        while (j > 0 && arr[j] < arr[j - 1]) // j>0 because index (0-1) would throw error // j and its previous value is compared if j smaller -> swapped with j-1
        {
            // swapper code
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--; // j is moved to continue checking for respective prevoius elements until it is the least value
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}