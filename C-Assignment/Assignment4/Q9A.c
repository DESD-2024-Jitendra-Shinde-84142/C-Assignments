#include<stdio.h>

int prime(int);

int main()
{
	int num;
	printf("\n--------------------------------------\n");
	printf("\nEnter the number: ");
	scanf("%d",&num);
	prime(num);

	return 0;

}
int prime(int num)
{
	int i, j, res;

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


