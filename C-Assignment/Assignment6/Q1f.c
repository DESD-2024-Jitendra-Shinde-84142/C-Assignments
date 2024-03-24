#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	size_t len =0;
	printf("\nEnter the string: ");
	scanf("%s",str);
	
	len = strlen(str);
	printf("Before strrev = %s\n",str);
	
	strrev(str,len);

	printf("After strrev = %s\n",str);

	return 0;
}

void strrev(char *str, const size_t size)
{
	char temp;
	int i=0;
	int j= size-1;

	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}

}
