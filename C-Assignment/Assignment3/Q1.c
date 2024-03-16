#include<stdio.h>

int main()
{
	char ch;
	int num;
	printf("-----------------------------------\n");
	printf("Input : \n");
	printf("\nEnter character: ");
	scanf("%c",&ch);

	printf("\nEnter Number: ");
	scanf("%d",&num);

	printf("\nOutput: ");
	int i=0;
	while(i< num)
	{
	i++;
	printf("	%c",ch);
	}	
	printf("\n-----------------------------------\n");
	return 0;
}

