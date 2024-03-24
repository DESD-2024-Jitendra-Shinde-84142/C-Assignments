#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	char ch;
	char *ptr;

	printf("\nEnter the string: ");
	scanf("%s",str);
	
	printf("\nEnter Character: ");
	scanf("%*c %c",&ch);
	
	ptr = strchr(str,ch);

	if(ptr==NULL)
		printf("\nCharacter is not found\n");
	else
		printf("\nCharacter is found\n");

	return 0;
}
