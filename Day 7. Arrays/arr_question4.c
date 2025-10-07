// find the total number of pairs in the array whose sum is equal to the given value x 

#include<stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int x = 6;
    int count = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }
    
    printf("Total pairs: %d\n", count);
    return 0;
}