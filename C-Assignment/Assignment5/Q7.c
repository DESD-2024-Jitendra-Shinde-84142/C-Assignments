#include<stdio.h>
#include"header.h"

void sort_arr(int arr[],int len);

int main()
{
	int len;
	printf("\nEnter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	accept_arr(arr,len);
	print_arr(arr,len);
	sort_arr(arr,len);
	printf("\nSorted");
	print_arr(arr,len);

	return 0;
}

void sort_arr(int arr[],int len)
{
	for(int i=0; i<len ; i++)
	{
		for(int j=i+1; j<len-1 ; j++)
		{	
			if(arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
