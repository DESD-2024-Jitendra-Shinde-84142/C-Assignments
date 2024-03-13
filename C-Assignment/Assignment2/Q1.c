#include<stdio.h>

int main()
{
	int num1, num2;
	printf("\nEnter the No1: ");
	scanf("%d",&num1);
	printf("\nEnter the No2: ");
	scanf("%d",&num2);
	if(num2==0)
	printf("\nDivide by zero error. ");
	else
	printf("N1/N2: %d",num1/num2);
	return 0;
}
