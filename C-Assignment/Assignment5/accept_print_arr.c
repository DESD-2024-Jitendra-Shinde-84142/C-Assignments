#include<stdio.h>

void accept_arr(int *parr, int len)
{  
	int *ptr = parr;
	for(int i = 0 ; i < len ; i++)
	{
		printf("\nEnter the array arr[%d]: ",i);
		scanf("%d",ptr + i);
	}
 
}

void print_arr(int *parr,int len)
{
	int *ptr = parr;
	printf("\nArray:  ");
    for(int i = 0 ; i < len ; i++)
	{
		printf(" %-4d ",*(ptr + i));
	}
	printf("\n\n");
}
