#include<stdio.h>
void pallindrome(int arr[],int a)
{
    int i=0; 
    int j=a-1; 
    for (int i=0,j=a-1;i<j;i++,j--) 
    {
        if(arr[i]!=arr[j])
        {
            printf("This array is not palindrome");
            break;
        }
    }
    return;
}
int main()
{
    int a;
    printf("Enter the length of the array : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("Enter the value no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    pallindrome(arr,a);
    return 0;
}

/*#include<stdio.h>

void palindrome(int arr[], int a)
{
    int i = 0;
    int j = a - 1;

    for (i = 0, j = a - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            printf("This array is not palindrome\n");
            return;     // exit the function immediately
        }
    }
    // If loop completes without returning, it's a palindrome
    printf("This array is palindrome\n");
}

int main()
{
    int a;
    printf("Enter the length of the array : ");
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the value no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    palindrome(arr, a);
    return 0;
}
*/