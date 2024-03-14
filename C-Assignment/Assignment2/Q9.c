#include<stdio.h>

int main()
{
	int month, year;
	printf("\nEnter the month: ");
	scanf("%d",&month);
	printf("\nEnter the year: ");
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 && month == 2)
	printf("\nNo. of days in the given month= 29\n");
	else if(year % 400 == 0 && month == 2)
	printf("\nNo. of days in the given month= 29\n");
	else if(year % 100 == 0 && month == 2)
	printf("\nNo. of days in the given month= 28\n");
	else if(year % 4 != 0 && month == 2)
	printf("\nNo. of days in the given month= 28\n");
	else if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
	printf("\nNo. of days in the given month= 31\n");
	else
	printf("\nNo. of days in the given month= 30\n");

	return 0;
}
