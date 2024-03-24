#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[20];
	int ret;

	printf("\nEnter the string 1: ");
	scanf("%s",str1);

	printf("\nEnter the string 2: ");
	scanf("%s",str2);

	printf("\nstr1: %s, str2: %s\n",str1,str2);

	ret = strcmp(str1,str2);
	if(ret == 0)
		printf("\nstr1 and str2 are equal\n");
	else if(ret < 0)
		printf("\nstr1 is less than str2\n");
	else
		printf("\nstr1 is greater than str2\n");

	return 0;
}
