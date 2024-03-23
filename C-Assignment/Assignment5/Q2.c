#include<stdio.h>

void accept_arr( int arr[],int len);
void print_arr(int arr[],int len);

int total=0;

int main()
{
	int len;
	printf("\nEnter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	accept_arr(arr,len);
	print_arr(arr,len);

	return 0;
}

void accept_arr(int arr[], int len)
{  
	
	for(int i = 0 ; i < len ; i++)
	{
		printf("\nEnter the array arr[%d]: ",i);
		scanf("%d",arr + i);
	}
 
}

void print_arr(int arr[],int len)
{
	printf("\nArray:  ");
    for(int i = 0 ; i < len ; i++)
	{
		printf(" %-4d ",arr[i]);
	}
	printf("\n\n");
}
