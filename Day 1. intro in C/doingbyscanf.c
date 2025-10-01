#include<stdio.h>
int main ()

{
 int physics  ;
 int math  ;
 int chem ;
 int english ;
 int cse  ;
 printf ("physics ");
 scanf ("%d",&physics);
 printf("math ");
 scanf ("%d",&math);
 printf("chem ");
 scanf ("%d",&chem);
 printf("english ");
 scanf ("%d",&english);
 printf("cse ");
 scanf ("%d",&cse);
 int average = (physics + math + chem + english + cse)/5;
 printf ("\n%d is the average of your marks",average);
 return 0 ;
}