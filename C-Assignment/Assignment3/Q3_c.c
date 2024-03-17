#include<stdio.h>

int main()
{
	long int  num, reverse=0, reminder,temp;
	printf("\n=============================================\n");
	printf("\nEnter the number: ");
	scanf("%ld", &num);
	temp=num;
	printf("Output: ");
	while(num != 0)
	{
		reminder = num % 10;
		reverse = reverse*10 + reminder;
		num = num/10;
	}

	if(temp == reverse)
		printf("%ld is a numeric palindrom",temp);
	
	else
		printf("%ld is not a numeric  palindrom",temp);
	
	printf("\n\n=============================================\n");

	return 0;
}
