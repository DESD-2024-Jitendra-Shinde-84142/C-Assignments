#include<stdio.h>


int main(void)
{
	char str[64];
	char substr[8];
	printf("\nEnter String: ");
	scanf("%[^\n]s",str);
	printf("\nEnter Substring to find: ");
	scanf("%s",substr);

	char *ptr = strstr(str, substr);
	
	if (ptr == NULL)
        printf ("\nSubstring not found in the string\n"); 
    else
        printf ("\nSubstring found: %s\n",ptr);

	return 0;
}

