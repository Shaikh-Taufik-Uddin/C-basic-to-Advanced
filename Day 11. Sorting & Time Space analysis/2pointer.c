// given an array of integers number that is already sorted in non-decreasing order
// find two numbers such that they add up to a specific target number 
// (sort means put in ascending order until told otherwise)

// O(n) complexity 

#include<stdio.h>
int main()
{
    int target = 7;
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0,j = 8;
    while(i<j)
    {
        if (arr[i] + arr[j]==target)
        {
            printf("\nMatch found %d & %d", arr[i], arr[j]);
            i++; 
            j--;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}