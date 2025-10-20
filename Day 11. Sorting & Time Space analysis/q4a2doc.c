#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ------------------------------
    // 1️⃣ Initialization
    // ------------------------------
    int arr[] = {5, 5, 5, 1, 1, 1, 1};
    int n = 7;

    // Variables to store concatenated numeric representations
    int number = 0;  // smallest number (digits joined)
    int number2 = 0; // second smallest number
    int number3 = 0; // number used when all elements are same

    bool flag2 = true; // initially assume all elements are same

    // ------------------------------
    // 2️⃣ Check if all elements are same
    // ------------------------------
    for (int i = 0; i < n; i++)
    {
        if (arr[0] != arr[i])
        {
            flag2 = false; // found one different element → not all same
        }
    }

    // ------------------------------
    // 3️⃣ CASE 1: All elements are same
    // ------------------------------
    if (flag2 == true)
    {
        printf("\nAll the elements in the array are same");

        printf("\nThe array is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        // Form a number by joining all elements
        for (int i = 0; i < n; i++)
        {
            number3 = number3 * 10 + arr[i];
        }

        printf("\n%d is both the smallest and 2nd smallest number", number3);
        printf("\n%d is the sum of your smallest and 2nd smallest number", number3 * 2);
    }

    // ------------------------------
    // 4️⃣ CASE 2: Elements are not all same
    // ------------------------------
    else
    {
        printf("The unsorted array is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        // ------------------------------
        // 5️⃣ Sorting the array using Bubble Sort
        // ------------------------------
        for (int i = 0; i < n; i++)
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

        // Display the sorted array
        printf("\nThe sorted array is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        // ------------------------------
        // 6️⃣ Form the "smallest number" by concatenating non-zero elements
        // ------------------------------
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                continue; // skip zeros
            }
            number = number * 10 + arr[i];
        }
        printf("\n%d is the smallest number", number);

        // ------------------------------
        // 7️⃣ Create a variant of the array for the 2nd smallest number
        //     → Perform swap from the right side where a difference is found
        // ------------------------------
        bool flag = false;
        int x = 2; // start comparing from the end

        while (flag == false)
        {
            if (arr[n - x] != arr[n - x + 1])
            {
                // swap those two values
                int temp = arr[n - x];
                arr[n - x] = arr[n - x + 1];
                arr[n - x + 1] = temp;
                flag = true; // done swapping once
            }
            else
            {
                // move further left if both elements are same
                x++;
            }
        }

        // ------------------------------
        // 8️⃣ Print the modified array again (after the swap)
        // ------------------------------
        printf("\nThe new array again is : ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }

        // ------------------------------
        // 9️⃣ Form the "2nd smallest number" by concatenating non-zero digits again
        // ------------------------------
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            number2 = number2 * 10 + arr[i];
        }

        printf("\n%d is the 2nd smallest number", number2);

        // ------------------------------
        // 🔟 Print the sum of both constructed numbers
        // ------------------------------
        printf("\nThe summation of them is %d", number + number2);
    }

    // ------------------------------
    // ✅ Program ends
    // ------------------------------
    return 0;
}
