#include<stdio.h>

int main()
{
    int val=1;
    int i,n;
	printf("\n------------------------------------\n");
    printf("\nEnter the value: ");
    scanf("%d",&n);
    i = 0;
	while(i<n)
    {
	i++;
    val= val*i;
    } 
    printf("Factorial of the number is: %d \n",val);
	printf("\n------------------------------------\n");
	return 0;
}

