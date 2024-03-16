#include<stdio.h>

int main()
{
    int a, b, c, i, series;
	printf("\n---------------------------------------------\n");
    printf("\n Enter the No.1: ");
    scanf("%d",&a);
    printf("\n Enter the No.2: ");
    scanf("%d",&b);
    printf("\n Enter the series count: ");
    scanf("%d",&series);
    printf("\n");
	c=a+b;
    printf(" Fibonacci Series given by:  %d,",a);
    printf("  %d,",b);
    printf("  %d,",c);
    for(i=1; i<=(series-3); i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("  %d,",c);
    }
	printf("\n---------------------------------------------\n");

    return 0;
}
