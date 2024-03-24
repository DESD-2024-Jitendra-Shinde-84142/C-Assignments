#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	size_t len;
	printf("\nEnter the string: ");
	scanf("%[^\n]s",str);

	printf("str = %s\n",str);

	len = strlen(str);
	printf("Length = %d\n",len);

	return 0;
}
