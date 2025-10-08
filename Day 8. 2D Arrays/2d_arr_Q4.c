// given a matrix having 0 & 1 only , find the row with maximum number of 1s
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[3][3] = {0, 1, 1, 0, 0, 0, 1, 1, 1};
    int count, counter[3];
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        counter[i] = count;
    }
    int max = INT_MIN;
    int row;
    for (int i = 0; i < 3; i++)
    {
        if (counter[i] > max)
        {
            max = counter[i];
            row = i + 1;
        }
    }
    printf("Row %d has the maximum number of 1 that is %d", row, max);
    return 0;
}