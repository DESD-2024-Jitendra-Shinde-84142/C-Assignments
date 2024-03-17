#include<stdio.h>

int main()
{
	long int  num, add=0, reminder=0;
	printf("\n=================================\n");
	printf("\nEnter the number: ");
	scanf("%ld", &num);
	printf("\nSum of digits: ");
	while(num != 0)
	{
		reminder = num % 10;
		add = reminder + add;
		num = num/10;
	}
	
	printf("%ld", add);
	
	printf("\n\n================================\n");

	return 0;
}
