#include<stdio.h>
int main ()
{
    // int m ;
    // int s ;
    // int l ;
    // int c ;
    int m,s,l,c;
    for(int i=1;i<=500;i++)
    {
        s=0 ;
        c=i ;
        while(c>0)
        {
        l=c%10;
        m=l*l*l;
        s=m+s ;
        c=c/10;
        }
        if(i==s)
        {printf("\n%d",i) ;}
        
    }
    return 0;
}

// #include <stdio.h>
// int main() {
//     int i, n, a, m, s;
//     for (i = 1; i <= 500; i++) {
//         n = i;     // copy of i
//         s = 0;     // reset sum for each number
//         while (n > 0) {
//             a = n % 10;         // extract last digit
//             m = a * a * a;      // cube of digit
//             s = s + m;          // add to sum
//             n = n / 10;         // remove last digit
//         }
//         if (i == s) {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }
