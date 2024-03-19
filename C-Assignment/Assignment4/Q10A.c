#include<stdio.h>

int leapyear(int, int);
int monthdays(int, int);

int main()
{
	int month, year;
	printf("\nEnter the month: ");
	scanf("%d",&month);
	printf("\nEnter the year: ");
	scanf("%d",&year);
	leapyear(month, year);
	monthdays(month, year);
	
	return 0;
}

int leapyear(int month, int year)
{
	if(year % 4 == 0 && year % 100 != 0)
	printf("\nLeap Year\n");
	else if(year % 400 == 0)
	printf("\nLeap Year\n");
	else if(year % 100 == 0)
	printf("\nGiven year is not a Leap Year\n");
	else if(year % 4 != 0)
	printf("\nGiven year is not a Leap Year\n");

}

int monthdays(int month, int year)
{
	switch(month)
	{
	case 1 :
		printf("\nNo. of Days= 31\n");
	break;
	case 2 :
	if(year % 4 == 0 && year % 100 != 0)
	printf("\nNo. of Days = 29\n");
	else if(year % 400 == 0)
	printf("\nNo. of Days = 29\n");
	else if(year % 100 == 0)
	printf("\nNo. of Days = 28\n");
	else if(year % 4 != 0)
	printf("\nNo. of Days = 28\n");
	break;
	case 3 :
		printf("\nNo. of Days= 31\n");
	break;
	case 4 :
		printf("\nNo. of Days= 30\n");
	break;
	case 5 :
		printf("\nNo. of Days= 31\n");
	break;
	case 6 :
		printf("\nNo. of Days= 30\n");
	break;
	case 7 :
		printf("\nNo. of Days= 31\n");
	break;
	case 8 :
		printf("\nNo. of Days= 30\n");
	break;
	case 9 :
		printf("\nNo. of Days= 31\n");
	break;
	case 10 :
		printf("\nNo. of Days= 30\n");
	break;
	case 11 :
		printf("\nNo. of Days= 31\n");
	break;
	case 12 :
		printf("\nNo. of Days= 30\n");
	break;
	default:
		printf("\nInvalid Month.\n");
	break;
	}
	return 0;
}
