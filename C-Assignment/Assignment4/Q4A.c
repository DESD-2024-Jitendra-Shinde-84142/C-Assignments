#include<stdio.h>

float calculator(float, char, float);
int flag=0;

int main()
{
	float num1,num2;
	char opr;

	printf("\nEnter No.1 : ");
	scanf("%f",&num1);
	printf("\nEnter Operand : ");
	scanf("%*c%c",&opr);
	printf("\nEnter No.2 : ");
	scanf("%f",&num2);
	float result = calculator(num1,opr,num2);
	if(flag==1)
	{
		printf("Divide by 0 error.\n");
		flag=0;
	}
	else
		printf("\nResult: %.2f\n",result);

	return 0;
}

float calculator(float num1, char opr, float num2)
{
	float res;
	switch(opr)
	{
		case '+' : 
			res = num1 + num2 ;
		break;
		
		case '-' : 
			res = num1 - num2 ;
		break;
		
		case '*' : 
			res = num1 * num2 ;
		break;

		case '/' :
			if( num2 != 0 )
				res = num1 / num2;

			else
				flag = 1;
		break;

		default : 
			printf("Invalid Operand \n");
		break;
	}

	return res;
}


