#include<stdio.h>

int main()
{
	int num;
	printf("-----------------------------------\n");
	printf("\nInput : ");
	scanf("%d",&num);

	printf("\nOutput: ");

	int i=0;
	while(i<10)
	{
	i++;
	int product = num * i;
	printf("\n %d  X  %d = %d",num,i,product);
	}	
	printf("\n-----------------------------------\n");
	return 0;
}

