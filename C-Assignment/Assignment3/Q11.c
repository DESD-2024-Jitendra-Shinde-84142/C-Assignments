#include<stdio.h>

int main()
{
    int val=1;
    int i,n;
	printf("\n------------------------------------\n");
    printf("\nEnter the value: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    val= val*i;
    } 
    printf("Factorial of the number is: %d \n",val);
	printf("\n------------------------------------\n");
	return 0;
}

