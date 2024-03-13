#include<stdio.h>

int main()
{
	char select;
	printf("\nPress A for (C to F conversion) and B for (F to C Conversion): ");
	scanf("%c",&select);

	switch(select)
	{
		case 'A':
		float temp;
		printf("\nEnter Temperature in Celsius: ");
		scanf("%f",&temp);
		float val= 32 + (temp*9/5);
		printf("\nF = %f ",val);
		printf("\n");
		break;

		case 'B':
		float temp1;
		printf("\nEnter Temperature in Fahrenheit: ");
		scanf("%f",&temp1);
		float val1= (temp1-32)*5/9;
		printf("\nC = %f ",val1);
		printf("\n");
		break;

	}

}
