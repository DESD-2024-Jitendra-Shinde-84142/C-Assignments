#include<stdio.h>

int main(void)
{	
	int i, j;
	printf("\nTable: ");
	printf("\n------------------------------------------------------\n\n");	
	for(i=1 ; i <= 10  ; i++)
	{
		for(j=1 ; j <= 10 ; j++)
		{
		printf("%-4d",i*j);
		}
		printf("\n");
	}
		
	printf("\n------------------------------------------------------\n");	
	
	return 0;
}
