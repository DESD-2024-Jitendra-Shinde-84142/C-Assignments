#include<stdio.h>

int main()
{
	long int  num, add = 0, reminder = 0 ,cube = 0, temp;
	printf("\n=============================================\n");
	printf("\nEnter the number: ");
	scanf("%ld", &num);
	temp=num;
	printf("Output: ");
	while(num != 0)
	{
		reminder = num % 10;
		cube = reminder*reminder*reminder;
		add = cube + add;
		num = num/10;
	}

	if(temp == add)
		printf("%ld is an Armstrong number",temp);
	
	else
		printf("%ld is not an Armstrong number",temp);
	
	printf("\n\n=============================================\n");

	return 0;
}
