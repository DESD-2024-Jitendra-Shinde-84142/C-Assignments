#include<stdio.h>

int main()
{
	int num,i,table;
	printf("Enter the No: ");
	scanf("%d",&num);
	printf("\nTable of the No:\n");
	for(i=1;i<=10;i++)
	{
	table = num*i;
	printf(" %d\n",table);
	}

return 0;
}
