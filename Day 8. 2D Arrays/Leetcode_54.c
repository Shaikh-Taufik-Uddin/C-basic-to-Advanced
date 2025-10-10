// spiral printing
#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int minr = 0;       // minimum no. of rows
    int maxr = 2;       // maximum no. of rows
    int minc = 0;       // minimum no. of coloumns
    int maxc = 2;       // maximum no. of coloumns
    int tne = 3 * 3;    // total number of elements
    int count = 0;      // element counter
    while (count < tne) // ending condition of loop
    {
        for (int j = minc; j <= maxc; j++) // loop will run from min coloumn to max coloumn to print all the values in minimum row
        {
            printf("%d ", arr[minr][j]); // printing minimum row
            count++;                     // counts printed element
        }
        minr++;           // min row will go down (increase) by 1 as the loop ends
        if (count >= tne) // if count is equaling or exceeding tne then stop loops
            break;
        for (int i = minr; i <= maxr; i++) // loop will run from now min row to max row to print all the values in max coloumn
        {
            printf("%d ", arr[i][maxc]); // printing max coloumn
            count++;                     // counts printed element
        }
        maxc--;           // max coloumn will move back  (decrease) by 1 as the loop ends
        if (count >= tne) // if count is equaling or exceeding tne then stop loops
            break;
        for (int j = maxc; j >= minc; j--) // loop runs from maxc to minc to print the values in now max row in reverse order
        {
            printf("%d ", arr[maxr][j]); // printing max row
            count++;                     // counts printed element
        }
        maxr--;           // max row goes up by 1 (decreases)
        if (count >= tne) // if count is equaling or exceeding tne then stop loops
            break;
        for (int i = maxr; i >= minr; i--) // loop runs from maxr to minr to print the values in now min coloumn in reverse order
        {
            printf("%d ", arr[i][minc]); // printing min coloumn
            count++;                     // counts printed element
        }
        minc++; // min coloum forwards by 1 (increases)
    }
    return 0;
}