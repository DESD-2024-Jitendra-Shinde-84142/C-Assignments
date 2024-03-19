#include<stdio.h>

int power(int, int);

int main()
{
	int base, pow, res;
	printf("\n--------------------------------------\n");
	printf("Input: \n");
	printf("\nBase: ");
	scanf("%d",&base);
	printf("\nPower: ");
	scanf("%d",&pow);
	res = power(base,pow);

	printf("\nOutput: %d",res);
	printf("\n---------------------------------------\n");
	return 0;
}	


int power(int base,int pow)
{
	int i,mul=1;
	for(i=0; i<pow ; i++)
	{
		mul = base*mul;
	}
	return mul;
}

