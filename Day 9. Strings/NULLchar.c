// printing charecter array with NULL (\0) charecter
#include <stdio.h>
int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e', '\0'}; // null charecter is given at the back of the array
    int i = 0;                                    // index is initalized to be 0 ;
    while (arr[i] != '\0')                        // this condition removes the tideous process of determining the array size manually
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}