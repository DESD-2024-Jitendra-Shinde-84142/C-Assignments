#include<stdio.h>

void fibonacci(int*,int*,int*);

int main()
{
    int a, b, c, series;
	printf("\n---------------------------------------------\n");
    printf("\n Enter the No.1: ");
    scanf("%d",&a);
    printf("\n Enter the No.2: ");
    scanf("%d",&b);
    printf("\n Enter the series count: ");
    scanf("%d",&series);
    printf("\n");
	c = a+b;
    printf(" Fibonacci Series given by:  %d,",a);
    printf("  %d,",b);
    printf("  %d,",c);
	
    for(int i=1; i<=(series-3); i++)
	{
		fibonacci(&a,&b,&c);
		printf("  %d,",c);
	}

	printf("\n---------------------------------------------\n");
	return 0;
}


void fibonacci(int *x, int *y, int *z)
{
        *x = *y;
        *y = *z;
	    *z = *x + *y;
}
