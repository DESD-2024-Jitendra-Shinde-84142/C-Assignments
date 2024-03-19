#include<stdio.h>

int fact(int);

int main()
{
    int n;
	printf("\n------------------------------------\n");
    printf("\nEnter the value: ");
    scanf("%d",&n);
	int result = fact(n);	
    printf("Factorial of the number is: %d \n",result);
	printf("\n------------------------------------\n");
	return 0;
}


int fact(int n)
{
    int val=1;
    
	for(int i=1; i<=n; i++)
    val= val*i;
    
	return val;
}


