#include<stdio.h>

int char_count(char,int);

int main()
{
	char ch;
	int num;
	printf("\nEnter character: ");
	scanf("%c",&ch);

	printf("\nEnter print count: ");
	scanf("%d",&num);
	printf("\nOutput: \n");
	char_count(ch,num);

	return 0;
}

int char_count(char ch,int num)	
{
	int i=0;
	while(i< num)
	{
	i++;
	printf("	%c",ch);
	}
	printf("\n");
	return 0;
}

