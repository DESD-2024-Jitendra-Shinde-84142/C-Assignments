#include<stdio.h>

int main()
{
	int month, year;
	printf("\nEnter the month: ");
	scanf("%d",&month);
	printf("\nEnter the year: ");
	scanf("%d",&year);

	switch(month)
	{
	case 1 :
		printf("No. of Days= 31\n");
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
		printf("No. of Days= 31\n");
	break;
	case 4 :
		printf("No. of Days= 30\n");
	break;
	case 5 :
		printf("No. of Days= 31\n");
	break;
	case 6 :
		printf("No. of Days= 30\n");
	break;
	case 7 :
		printf("No. of Days= 31\n");
	break;
	case 8 :
		printf("No. of Days= 30\n");
	break;
	case 9 :
		printf("No. of Days= 31\n");
	break;
	case 10 :
		printf("No. of Days= 30\n");
	break;
	case 11 :
		printf("No. of Days= 31\n");
	break;
	case 12 :
		printf("No. of Days= 30\n");
	break;
	default:
		printf("Invalid Month.\n");
	break;
	}
	return 0;
}
