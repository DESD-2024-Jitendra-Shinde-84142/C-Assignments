#include<stdio.h>
#include"header.h"

int search_arr(int arr[],int len,int num);

int main()
{
	int len,num;
	printf("\nEnter the length of the array: ");
	scanf("%d",&len);
	int arr[len];
	accept_arr(arr,len);
	print_arr(arr,len);
	printf("\nEnter No. to be search: ");
	scanf("%d",&num);
	int index = search_arr(arr,len,num);
	if(index==-1)
		printf("\nElement is not found:");
	else
		printf("\nIndex: %d\n",index);
	
	return 0;
}

int search_arr(int arr[],int len,int num)
{
	for(int i=0; i<len ; i++)
	{
		if(arr[i]==num)
		return i;
	}
	
	return -1;
}
