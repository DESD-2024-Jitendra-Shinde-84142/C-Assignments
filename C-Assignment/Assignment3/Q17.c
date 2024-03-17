#include<stdio.h>

int main(void)
{	
	int i, j, patval;
	printf("\nPattern Count: ");
	scanf("%d",&patval);
	printf("\n------------------------------------------------------\n\n");	
	for(i=0 ; i < patval ; i++)
	{
		for(j=0 ; j < patval ; j++)
		{
		printf("*  ");
		}
		printf("\n");
	}
		
	printf("\n------------------------------------------------------\n");	
	
	return 0;
}
