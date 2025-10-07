// one duplicate element is there in an array
#include<stdio.h>
void search(int arr[],int a)
{
	for(int i=0; i<a; i++)
	{
		for(int j=i+1; j<a; j++)
		{
			if(arr[i]==arr[j])
			printf("\nmatching element found %d & %d",arr[i],arr[j]);
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
	for(int i=0; i<a; i++)
	{
		printf("Enter the value no %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	search(arr,a);
	return 0;
}