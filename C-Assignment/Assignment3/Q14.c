#include<stdio.h>

int main()
{
	int num, i, j, res;
	printf("\n--------------------------------------\n");
	printf("\nEnter the number: ");
	scanf("%d",&num);
	
	for(i=2; i<=num ; i++)
	{
		res = num % i;
		if(res==0)
		{
			if(num==i)
			{
				printf("Given no. is a Prime Number.\n");
				j=0;
			}

			else if(num != i)
			{	
				printf("Given no. is not a Prime Number.\n");
				j=1;
			}
		}
		if(j==1)
			goto HERE;
			
	}

HERE:	printf("\n---------------------------------------\n");
		
		return 0;

}
