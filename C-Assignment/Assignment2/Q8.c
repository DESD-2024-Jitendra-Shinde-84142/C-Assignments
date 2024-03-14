#include<stdio.h>


int main()
{
	float quant, price, Discount;
	printf("Note: Quantity over 30: 10%% Discount\n");
	printf("      Quantity over 50: 15%% Discount\n");
	printf("-------------------------------------\n");
	printf("Enter the quantity of the product: ");
	
	scanf("%f",&quant);
	
	if(quant>=30 && quant<50)
	{
		price = quant*5;
		Discount = (price*10)/100;
		printf("\nPrice = %f with Discount of 10%% = %f",price,Discount);
		printf("\n");
	}

	else if(quant>50)
	{
		price = quant*5;
		Discount = (price*15)/100;
		printf("\nPrice = %f with Discount of 15%% = %f",price,Discount);
		printf("\n");
	}

	else
	{
		price = quant*5;
		printf("\nPrice = %f with No Discount",price);
		printf("\n");
	}

	return 0;

}

