/* Given an array of digits (values are from 0 to 9),the task is to
find the minimum possible sum of two numbers formed from digits of the array
please note that all digits of the array must be used to form the two numbers*/

#include <stdio.h>
int main()
{
    int arr[] = {5, 4, 0, 3, 2, 6, 1};
    int n = 7;
    int number = 0;
    int number2 = 0;
    printf("The unsorted array is : ");
    for (int i = 0; i < n; i++) // prints the input array
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++) // sorts array by bubble sort (non optimized version)
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
    for (int i = 0; i < n; i++) // prints sorted array
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++) // makes the smallest number from sorted array
    {
        number = number * 10 + arr[i];
    }
    printf("\n%d is the smallest number", number); // prints smallest number
    // swaps the last two indices of the sorted array to make 2nd smallest number
    int temp = arr[n - 2];
    arr[n - 2] = arr[n - 1];
    arr[n - 1] = temp;
    printf("\nThe new array again is : ");
    for (int i = 0; i < n; i++) //  prints the newly changed array
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n; i++) // makes 2nd smallest number from the new array
    {
        number2 = number2 * 10 + arr[i];
    }
    printf("\n%d is the 2nd smallest number", number2);        // prints the generated number
    printf("\nThe summation of them is %d", number + number2); // prints the sum of smallest and 2nd smallest number
    return 0;
}