#include<stdio.h>
#include"header.h"

int duplicate_arr(int arr[], int len);
int main()
{
	int len;
	printf("\nEnter the length of the array: ");
	scanf("%d", &len);
	int arr[len];
	accept_arr(arr,len);
	print_arr(arr,len);
	duplicate_arr(arr,len);
	return 0;
}

int duplicate_arr(int arr[], int len)
{
	for(int i=0 ; i<len ; i++)
	{
		for(int j=i+1 ; j<len ; j++)
		{
			if ( arr[i] == arr[j])  
            {  
                for (int k=j; k < len-1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                len--;  
                j--;
			}
		}
	}

	printf ("\nArray elements after removing duplicate elements: ");

    for (int i = 0; i < len; i++)
    {
        printf ("%d\t",arr[i]);
    }
	printf("\n");

	return 0;
}

