// given an integer array arr , move all 0's to the end of it
//  while maintaining the relative order of the non zerp elements
// do it without using extra array

#include <stdio.h>
int main()
{
    int arr[] = {5, 0, 0, 5, 5, 2, 0, 6, 0};
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j + 1];
                arr[j + 1] = 0;
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}