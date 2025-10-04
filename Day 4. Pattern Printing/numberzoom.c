// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     int min;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(i>j){min=j;}
//             else{min=i;}
//             printf("%d",min);
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int min=0;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int a=i;
            if(i>n) a=2*n-i;
            int b=j;
            if(b>n) b=2*n-j;
            if(a<b) min=a;
            else min=b;
            printf("%d",(n+1)-min); // min only will print 111111.... 222222 like that . the n-1 thingy is used to make 1->5 and so on
        }
        printf("\n");
    }
}

// Line-by-line explanation (with what the program prints)

// Nice — this is the classic concentric-numbers pattern. I’ll walk through every line and then show a small example (so you can see the logic in action).

// #include<stdio.h>


// Tells the compiler to include the Standard I/O header so you can use printf and scanf.

// int main()
// {


// Starts the main function (the program entry point). It returns an int (by convention you should return 0 at the end, but C lets you omit it in some standards).

//     int n;


// Declares an integer variable n which will hold the number the user types.

//     printf("enter a number : ");


// Prints the prompt enter a number : to the screen. (No \n, so the cursor stays on the same line.)

//     scanf("%d",&n);


// Reads an integer from the user and stores it in n. &n passes the address of n so scanf can write into it.

//     int min=0;


// Declares an integer min and initializes it to 0. (This variable will be reused inside the loops to hold the smaller of two numbers; it would be a bit clearer to declare it inside the inner loop.)

//     for(int i=1;i<=2*n-1;i++)
//     {


// Outer loop: i goes from 1 to 2*n-1 inclusive. So the number of rows printed is 2*n-1. This makes a square pattern of size (2*n-1) × (2*n-1).

//         for(int j=1;j<=2*n-1;j++)
//         {


// Inner loop: j goes from 1 to 2*n-1. Each iteration prints one character/number of the current row. So the pair (i,j) enumerates every cell of the square.

//             int a=i;


// Set a equal to the current row index i.

//             if(i>n) a=2*n-i;


// If i is past the center row (i>n), replace a with 2*n - i.
// Effectively a becomes the distance-from-the-edge value that increases toward the center:

// For rows 1..n, a = i.

// For rows n+1..2n-1, a = 2*n - i.
// So a produces the sequence 1,2,...,n,...,2,1 as i goes from 1 to 2*n-1. You can think of a as how close the current row is to the center (larger a means closer to center).

//             int b=j;


// Set b equal to the current column index j.

//             if(b>n) b=2*n-j;


// Same as for a, but for columns: b becomes 1,2,...,n,...,2,1 as j goes across. It measures closeness of the column to the center.

//             if(a<b) min=a;
//             else min=b;


// min gets the smaller of a and b. So min is the closer-to-center value in the smaller dimension for that cell. (If row closeness a is smaller than column closeness b, min=a, otherwise min=b.)

//             printf("%d",(n+1)-min);


// Print the number (n+1) - min for the current cell, without any space.
// Why this expression? Because:

// min ranges from 1 (outermost) up to n (center).

// (n+1)-min maps min=1 → n, and min=n → 1.
// So outermost cells print n, inner rings print smaller numbers, and the center prints 1. This produces concentric number rings.

//         }
//         printf("\n");
//     }
// }


// Close inner loop. printf("\n"); moves to the next line after finishing a row.

// Close outer loop and main.