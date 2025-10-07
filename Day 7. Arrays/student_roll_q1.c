#include<stdio.h>
int main()
{
    int Marks[5];
    for(int i=0; i<=4; i++)
    {
        printf("enter the marks of student %d: ",i+1);
        scanf("%d",& Marks[i]);
    }
    for(int i=0;i<=4;i++)
    {
        if( Marks[i]<35)
        {
            printf("student of roll number %d has got marks less than 35\n",i);
        }
    }
    return 0;
}