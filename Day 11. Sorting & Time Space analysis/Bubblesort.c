// after one total pass the maximum element reaches the end
// for n elememts in the array n-1 passes are needed (maximum)
// O(n2) time complexity
// but optimized for sorted or nearly sorted arrays
// o(n) time complexity for sorted arrays
// relative order of duplicate elememnts(if any) in unsorted state of array should be same while sorted
// bubble sort is stable too!

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    // bubble sort
    for (int i = 0; i < n - 1; i++) // passes of loop
    {
        // sorted or not checker
        bool flag = true; // true assumes the array is sorted at first

        for (int j = 0; j < n - 1 - i; j++) // scans 1 index less than previous (value of i increases -> loop reduces) loop .. as the last indices are automatically in order as they store the greatest numbers respetively in their loop
        // for (int j = 0; j < n - 1; j++) // scanning every index of array everytime (inefficient)
        {
            if (arr[j] > arr[j + 1]) // checker
            {
                int temp = arr[j]; // swapper
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = false; // if operations are perfromed then it changes flag to flase (not sorted yet)
            }
        }
        if (flag == true) // checks if the array is confirmed to be sorted (if no changes has been done till the beginning of loop)
        {
            break; // ends further loops
        }
    }
    for (int i = 0; i < 5; i++) // prints
    {
        printf("%d", arr[i]);
    }
    return 0;
}

//  Why n - 1 ? for i loop ?
//  Because After each pass,
//  one element(the largest of the unsorted part) reaches its final correct position.
//  After doing this(n - 1) times,
//  the remaining element(at index 0) is automatically sorted.

//   Why n - 1 ? for j loop ?
//   Let’s assume your array has n = 7 elements.That means valid indexes are : 0,1, 2, 3, 4, 5, 6
//   But your loop runs while : j < 7
//   So when the loop reaches the last iteration,
//   j = 6, and then this line executes :
//   arr[j + 1] → arr[6 + 1] → arr[7]
//   But arr[7] does not exist
//   Accessing arr[7] means you’re reading memory outside your array’s valid space.This is called out - of - bounds access,
//   and it causes undefined behavior.