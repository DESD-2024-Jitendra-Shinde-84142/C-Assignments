#include<stdio.h>
#include"header.h"

int max_arr(int arr[], int len);

int main()
{
	int len;
	printf("\nEnter the length of the array: ");
	scanf("%d", &len);
	int arr[len];
	accept_arr(arr,len);
	print_arr(arr,len);
	int max = max_arr(arr,len);
	printf("\nMaximum No. in the array: %d\n\n",max);

	return 0;
}

int max_arr(int arr[], int len)
{
	int temp=0;
	for(int i=0; i<len ;i++)
	{
		if(arr[i]>temp)
			temp = arr[i];
	}
	return temp;
}
