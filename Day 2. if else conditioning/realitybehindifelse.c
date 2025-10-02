#include <stdio.h>
int main ()
{
// if (here being a  condition is not must )
// if(here can also be any statement or anything else than a condition)
//if (actually if there is an even an expression which gives the value except 0 {1 means true in boolean and 0 means false} then the thing after if() will work)
//examples are given below 
if(3+2%5)
//(3+2%5) will give 2%5=2 and then 3+2=5
printf("\nthis will work");
if(69)
printf("\nworks too");
if(0)
printf("\nwont work");
else
printf("\nelse statement will be printed");
int a ;
if (a=10)
printf("\neven this works");
if('c')
// see this 'c' is a charecter but as comuter sees its ASCII value so its not 0 and hence this works
printf("\nwill this work!! damn ");

return 0;
}
