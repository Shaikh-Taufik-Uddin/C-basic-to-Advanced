#include<stdio.h>
int main()
{
    int arr[2][2]={{1,2},{3,4}};
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<2;c++)
        {
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}

/* #include<stdio.h>
int main()
{
    int arr[2][3];
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<3;c++)
        {
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }

    return 0;
} */