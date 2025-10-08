#include<stdio.h>
int main()
{
    // array defining part 

    int a;
    int b;
    printf("Enter no. of rows: ");
    scanf("%d",&a);
    printf("Enter no. of coloumns: ");
    scanf("%d",&b);
    int arr[a][b];

    // input part 

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("Enter the value for %d,%d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    
    // output part 

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}