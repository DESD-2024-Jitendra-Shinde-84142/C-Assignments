#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[20];

	printf("\nEnter the string 1: ");
	scanf("%s",str1);

	printf("\nEnter the string 2: ");
	scanf("%s",str2);

	printf("Before srtcat: str1: %s, str2: %s\n",str1,str2);

	strcat(str1,str2);

	printf("After srtcat: str1: %s, str2: %s\n",str1,str2);

	return 0;
}
