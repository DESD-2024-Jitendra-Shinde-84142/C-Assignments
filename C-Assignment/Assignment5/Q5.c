#include<stdio.h>
#include"header.h"

int max_arr(int arr[], int len);
int min_arr(int arr[], int len);

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

	int min = min_arr(arr,len);
	printf("\nMinimum No. in the array: %d\n\n",min);
	return 0;
}

int max_arr(int arr[], int len)
{
	int temp1;
	for(int i=0; i<len ;i++)
	{
		if(arr[i]>temp1)
			temp1 = arr[i];
	}
	return temp1;
}

int min_arr(int arr[], int len)
{
	int temp2;
	for(int i=0; i<len ;i++)
	{
		if(arr[i]<temp2)
			temp2 = arr[i];
	}
	return temp2;
}
