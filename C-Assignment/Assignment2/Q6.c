#include<stdio.h>

int main()
{
	long int  num, reverse=0, reminder,temp;
	printf("Enter the number: ");
	scanf("%ld", &num);
	temp=num;

	while(num != 0)
	{
		reminder = num % 10;
		reverse = reverse*10 + reminder;
		num = num/10;
	}

	if(temp == reverse)
	printf("Given number is palindrom. ");
	else
	printf("Number is not palindrom. ");
	
	printf("\n");

	return 0;
}
