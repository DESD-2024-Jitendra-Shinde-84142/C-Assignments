#include<stdio.h>

int main()
{
	int num1,num2, num3, num4;
	printf("Enter the 4 Digit No: \n");
	scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
	printf("\n %-4d %-4d %-4d %-4d\n",num1, num2, num3, num4);
	printf("\n%d%d%d%d= %d + %d + %d + %d\n",num1,num2,num3,num4,num1*1000,num2*100,num3*10,num4);
	printf("\n%d%d%d%d",num4,num3,num2,num1);
	printf("\n");
return 0;
}
