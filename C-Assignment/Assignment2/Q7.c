#include<stdio.h>

int main()
{
	int year;
	printf("\nEnter the year: ");
	scanf("%d",&year);
	if (year % 4 == 0 && year % 100 != 0)
	printf("No. of days in the given year is = 366\n");
	else if(year % 400 == 0)
	printf("No. of days in the given year is = 366\n");
	else if(year % 100 == 0)
	printf("No. of days in the given year is = 365\n");
	else
	printf("No. of days in the given year is = 365\n");

	return 0;
}
