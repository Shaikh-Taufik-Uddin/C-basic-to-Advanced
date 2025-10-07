// arrays are for storing many values ; its like a collection of values 
#include<stdio.h>
int main()
{
    // int a[5]; // this line acts like int a.b.c.....n times . to store 50 values ; but this one can store 5 values in itself 
    int arr[5] = {1,2,3,4,5}; // initializaton + declaration // int a[5] = {1,2,3,4,5}; usually we name it arr insted of a for our own ease of understanding 
    // order of storing the values in an array is always same as it is declaired ; so here the storing order is 1 2 3 4 5
    // now each element in an array has its own index (unique roll number type thing) which is unique to it . e.g. here 1 has index 0 then 2-> 1 , 3-> 2 , 4->3 , 5->4'
    // index always runs from 0 to n-1 ; for n no. of elements in an array 
    // we can call values by their indices 
    printf("\n%d",arr[2]); // here we called index no. 2 to be printed so 3 should be printed 
    // we can also update any value in an array by referencing to its index number
    arr[2]=100 ; // so we have replaced the postition of index 2 with 100 (previously 3)
    printf("\n%d",arr[2]);
    //  printf("%d",arr[10 or -1]); index of 10 doesn't exist so we get a error which is called "index out of bound" error
    // we can make float arrys charecter and all like this too 
    float a[5]={1.1,2.2,3.3,4.4,5.5};
    printf("\n%f",a[2]);
    // other tecchniques to declair array and putting value in them 
    int b[3]; // first the array b is declaired 
    b[0]=1; // then values are given to each positions index wise 
    b[1]=2;
    b[2]=3;
    b[3]=4;
    printf("\n%d",b[0]);
    int c[2+3];// array declaration like this is also possible 
    int d=5;
    int e[d];// also this is possible
    return 0;
}
// address of an array == address of the 1st element of the array