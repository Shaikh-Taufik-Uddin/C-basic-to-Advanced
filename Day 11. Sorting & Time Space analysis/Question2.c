// given an integer array arr , move all 0's to the end of it
//  while maintaining the relative order of the non zerp elements

#include <stdio.h>
int main()
{
    int arr[] = {5, 0, 0, 5, 5, 2, 0, 6, 0};
    int ans[9];
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            ans[j] = arr[i];
            j++;
        }
    }
    while (j != 9)
    {
        ans[j] = 0;
        j++;
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}