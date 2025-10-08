#include<stdio.h>
int main()
{
    int row;
    int coloumn;
    printf("enter no of rows: ");
    scanf("%d",&row);
    printf("enter no of coloumns: ");
    scanf("%d",&coloumn);
    int array[row][coloumn]; // declaration of 2d array with row X coloumn dimensions
    // input methods in a 2d array 
    /* 
    // Suppose a 2d array of 2x2 so 
    // type 1:
    arr[0][0]=1;arr[0][1]=2;arr[1][0]=3;arr[1][0]=4;
    // 12
    // 34
    //the array looks like above now 
    // type 2:
    int arr[2][2]={{1,2},{3,4}}; // as every line of a 2d array is an array itself so we enterd value for whole row 1 array {1,2} and for row 2 array {3,4}
    // 12
    // 34
    //the array looks like above
    // in actuality of 2d array for example arr[2][4] an array of 2 sections with index 0 & 1 is created now the 0 th index rather storing a value stores another array of 4 sections with index 0,1,2,3 
    //and the second index 1 also stores another array of 4 sections with index 0,1,2,3 rather than a number 
    // Type 3:
    int arr[2][2]={1,2,3,4};
    //12
    //34
    // the array look like above
    //type 4:
    int arr[][3]={1,2,3,4,5,6}; // in this case the compiler sees that the coloumn number is 3 and inputs are 6 so the row number has to be 6 
    //123
    //456
    // the array look like above 
    */
    return 0;
}