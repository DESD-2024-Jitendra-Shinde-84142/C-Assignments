#include<stdio.h>

int main(void)
{
	int num1, num2, n1, n2, ans=1;
	printf("\n---------------------------------------\n");
	printf("Input: ");
	printf("\n  No.1: ");
	scanf("%d",&num1);
	printf("\n  No.2: ");
	scanf("%d",&num2);
	printf("\nOutput: \n");
	n1 = num1;
	n2 = num2;
	while(ans != 0)
	{
		ans = n1 % n2;
		if(ans==0)
		goto HERE;
		else
		{
		printf("  %d %% %d = %d\n",n1,n2,ans);
		n1 = n2;
		n2 = ans;
		}
	}

HERE:	printf("\n  GCD of %d and %d is %d\n",num1,num2,n2);
		printf("\n---------------------------------------\n");
	return 0;
}
