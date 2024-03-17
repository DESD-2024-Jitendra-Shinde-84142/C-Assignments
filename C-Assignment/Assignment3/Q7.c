#include<stdio.h>

int main(void)
{
	int num, i = 0, j, res, temp;
	printf("\n--------------------------------------\n");
	printf("\nInput: ");
	scanf("%d",&num);
	printf("Output: \n");
	temp = num;
	j = num;
	while(j != 0)
	{
		res = num % j;
		if(res==0)
		{
			i++;
			int mul = i*j;
			if(temp==mul)
			printf("%d *  %d = %d\n",i,j,mul);	
		}
		j--;	
	}
	
	printf("\n---------------------------------------\n");
		
		return 0;

}
