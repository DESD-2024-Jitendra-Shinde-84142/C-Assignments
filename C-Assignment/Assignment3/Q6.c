#include<stdio.h>

int main()
{
	int num, i = 0, j, res;
	printf("\n--------------------------------------\n");
	printf("\nInput: ");
	scanf("%d",&num);
	printf("Output: All Factors: ");
	int count = num/2;
	while(i<=count)
	{
		i++;
		res = num % i;
		if(res==0)
		{
			printf("  %d,",i);	
		}
			
	}
	
	printf("\n---------------------------------------\n");
		
		return 0;

}
