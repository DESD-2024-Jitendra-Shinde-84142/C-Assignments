#include<stdio.h>

int main(void)
{
	long int num, reminder=0, reverse=0;
	printf("\n=====================================\n");
	printf("\n Enter the number: ");
	scanf("%ld",&num);
	printf("\n Reverse Number: ");
	while(num != 0)
	{
		reminder = num % 10;
		reverse = reverse*10 + reminder;
		num = num/10;
	}
	printf("%ld",reverse);
	printf("\n\n=====================================\n");
}
