#include<stdio.h>

int main()
{
	float num1,num2,res;
	char opr;

	printf("\nEnter No.1 : ");
	scanf("%f",&num1);
	printf("\nEnter Operand : ");
	scanf("%*c%c",&opr);
	printf("\nEnter No.2 : ");
	scanf("%f",&num2);

	switch(opr)
	{
		case '+' : 
			res = num1 + num2 ;
			printf("Ans : %.2f \n",res);
		break;
		
		case '-' : 
			res = num1 - num2 ;
			printf("Ans = %.2f \n",res);
		break;
		
		case '*' : 
			res = num1 * num2 ;
			printf("Ans : %.2f \n",res);
		break;

		case '/' :
			if( num2 != 0 )
			{
				res = num1 / num2;
				printf("Ans : %.2f \n",res);
			}
		else
			printf("Divide by 0 error.\n");
		break;

		default : 
			printf("Invalid Operand \n");
		break;
	}

	return 0;
}


