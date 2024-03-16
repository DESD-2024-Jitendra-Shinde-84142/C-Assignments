#include<stdio.h>

int main()
{
	int num, i = 2, j, res;
	printf("\n--------------------------------------\n");
	printf("\nInput: ");
	scanf("%d",&num);
	printf("Output: %d = ",num);
	int count = num/2;
	while(i<=count)
	{
		res = num % i;
		if(res==0)
		{
			num = num / i;
			printf(" %d *",i);
		}
		else
		{
			i++;
		}
			
	}
	
	printf("\n---------------------------------------\n");
		
		return 0;

}
