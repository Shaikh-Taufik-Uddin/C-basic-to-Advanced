#include<stdio.h>
void array(int a[]) // no need to declair size here its just for passing an array in the fucntion
// address of an array == address of the 1st element of the array
{
    a[0]=10;
    return ;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printf("\n%d",arr[0]); // we know this would give 1 
    array(arr); // array is passed to the function ; no need to specify the type too ! it just passes whatever 'arr' is to the function
    printf("\n%d",arr[0]); // !! this updates the value in arr[0] despite no pointers were used here !!
                           // because arrays use "pass by reference" by default
    return 0;
}