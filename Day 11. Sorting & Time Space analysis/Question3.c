// Given an array and an integer array and an integer K where k<= size of array
// we need to return the Kth smallert element of the array

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {4, 6, 1, 8, 3, 2, 9};
    int n = 7;
    int k = 3;
    for (int i = 0; i < k; i++) // k time loops to find kth smallest value
    {
        int min = INT_MAX;
        int mindex;
        for (int j = i; j < n; j++) // loop for smallest value finder in each iteration of previous loop
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindex = j;
            }
        }
        int temp = arr[i]; // swapper
        arr[i] = arr[mindex];
        arr[mindex] = temp;
    }
    {
        printf("%d", arr[k - 1]); // prints the k-1 th index that is the k the element (kth smallest)
    }
    return 0;
}