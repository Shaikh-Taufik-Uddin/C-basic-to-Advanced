// find the unique number ina given array where all the elements are being repeated twice 

#include<stdio.h>
#include<stdbool.h>
void search(int arr[]) {
    for (int i = 0; i < 7; i++) {  
        bool flag = false;                     

        for (int j = 0; j < 7; j++) {          
            if (i != j && arr[i] == arr[j]) {  
                flag = true;                   
                break;                         
            }
        }

        if (flag == false) {                  
            printf("%d is the unique number\n", arr[i]);
            return;                            
        }
    }

    printf("No unique number found\n");      
} 
int main()
{
    int arr[7]={1,2,3,4,3,2,1};
    search(arr);
    return 0;
}

//  better version by AI
/*Step-by-step run for int arr[] = {5, 7, 7, 5, 3, 3, 4};

i=0 → arr[0]=5
Inner loop scans all other indices → finds another 5 at index 3 → flag=true → not unique.

i=1 → arr[1]=7
Finds another 7 at index 2 → flag=true → not unique.

i=2 → arr[2]=7
Finds duplicate at index 1 → flag=true → not unique.

i=3 → arr[3]=5
Finds duplicate at index 0 → flag=true → not unique.

i=4 → arr[4]=3
Finds duplicate at index 5 → flag=true → not unique.

i=5 → arr[5]=3
Finds duplicate at index 4 → flag=true → not unique.

i=6 → arr[6]=4
Scans all others → no duplicates found → flag=false → prints:*/

/*void search(int arr[], int size) {
    for (int i = 0; i < size; i++) {          // Loop through every element
        bool flag = false;                    // assume arr[i] is unique

        for (int j = 0; j < size; j++) {      // compare with every other element
            if (i != j && arr[i] == arr[j]) { // skip itself, check duplicates
                flag = true;                  // found a duplicate
                break;                         // no need to check further
            }
        }

        if (flag == false) {                   // if no duplicate found
            printf("%d is the unique number\n", arr[i]);
            return;                             // stop after finding one
        }
    }

    printf("No unique number found\n");        // runs if no unique element
}
*/

// worse code  // only checks duplicate elememt after index of i // 
// int arr[7] = {5, 7, 7, 5, 3, 3, 4};
// Step-by-step of code:
// i=0 → arr[0]=5 → finds another 5 later → not unique.

// i=1 → arr[1]=7 → finds another 7 later → not unique.

// i=2 → arr[2]=7 → finds another 7 later → not unique.

// i=3 → arr[3]=5 → no 5 after index 3 → flagged as unique → prints:

// void search(int arr[])
// {
//     for(int i=0;i<7;i++)
//     {
//         bool flag =false;
//         for(int j=i+1;j<7;j++)
//         {
//             if(arr[i]==arr[j])
//             flag=true;
//         }
//         if(flag==false)
//         {
//             printf("%d is the unique number",arr[i]);
//             break;
//         }
//     }
//     return;
// }