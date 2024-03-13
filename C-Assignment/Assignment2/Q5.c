#include<stdio.h>

int main()
{
	int num1, num2, num3;
	printf("\nEnter the No1: ");
	scanf("%d",&num1);
	printf("\nEnter the No2: ");
	scanf("%d",&num2);
	printf("\nEnter the No3: ");
	scanf("%d",&num3);
	if(num1 > num2 && num2 > num3)
	printf("\nNo1 is Greater. ");
	else if(num2 > num3 && num3 > num1)
	printf("\nNo2 is Greater. ");
	else
	printf("No3 is Greater. \n");

	return 0;
}
