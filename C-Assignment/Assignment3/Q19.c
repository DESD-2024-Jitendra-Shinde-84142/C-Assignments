#include<stdio.h>

int main(void)
{	
	int i, j, range1, range2;
	printf("\nEnter the range of table: ");
	printf("\nStarting Range: ");
	scanf("%d",&range1);
	printf("Ending Range: ");
	scanf("%d",&range2);

	printf("\n------------------------------------------------------\n\n");	
	for(i= 1 ; i <= 10  ; i++)
	{
		for(j=range1 ; j <= range2 ; j++)
		{
		printf("%-4d",i*j);
		}
		printf("\n");
	}
		
	printf("\n------------------------------------------------------\n");	
	
	return 0;
}
