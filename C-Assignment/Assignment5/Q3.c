#include<stdio.h>
#include"header.h"

void reverse_arr(int arr[], int len);

int main()
{
	int len;
	printf("\nEnter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	accept_arr(arr,len);
	reverse_arr(arr,len);
	print_arr(arr,len);
	
	return 0;

}

void reverse_arr(int arr[], int len)
{
	int i,j;
	int temp = 0 ;
	for(i = 0, j = len -1;i < j ; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}


