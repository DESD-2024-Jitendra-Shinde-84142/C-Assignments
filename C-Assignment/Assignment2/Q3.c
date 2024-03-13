#include<stdio.h>

int main()
{
	int num1;
	printf("\nEnter the No: ");
	scanf("%d",&num1);
	if(num1>0)
	printf("\nPositive Number. ");
	else if(num1==0)
	printf("\nNumber is Zero. ");
	else
	printf("\nNegative Number. ");
	return 0;
}
