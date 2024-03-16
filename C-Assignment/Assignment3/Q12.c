#include<stdio.h>

int main()
{
	int base, index, i, res=1;
	printf("\n--------------------------------------\n");
	printf("Input: \n");
	printf("\nBase: ");
	scanf("%d",&base);
	printf("\nIndex: ");
	scanf("%d",&index);
	
	for(i=0; i<index ; i++)
	{
		res = base*res;
	}
	printf("\nOutput: %d",res);
	printf("\n---------------------------------------\n");
	return 0;
}
