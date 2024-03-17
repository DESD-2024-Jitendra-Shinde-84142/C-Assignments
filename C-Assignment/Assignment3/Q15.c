#include<stdio.h>

int main()
{
	
	
	float num1,num2,res;
	char opr, ch;
	do
	{
		
HERE:	printf("\n------------------------------------\n");
		printf("\nEnter N0.1: ");
		scanf("%f",&num1);
		printf("Enter Operand: ");
		scanf("%*c%c",&opr);
		printf("Enter num2: ");
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
		
BACK:	printf("\nDo you want to continue (y/n): ");
		scanf("%*c%c",&ch);
		printf("\n------------------------------------\n");
		if(ch == 'y' || ch == 'Y')
			goto HERE;
		else if(ch == 'n' || ch == 'N')
			break;
		else
			printf("Enter Correct Input.");
			goto BACK;
	}while(1);

}


