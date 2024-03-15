#include<stdio.h>

int main()
{
	int empid,deptNo;
	char dc;
	printf("Enter the Employee ID  : ");
	scanf("%d",&empid);
	printf("Enter Dept No          : " );
	scanf("%d",&deptNo);
	printf("Enter Desig. Code      : ");
	getchar();
	dc = getchar();

	switch(deptNo)
	{
		case 10 :printf("Employee With Employee ID '%d' is Working in a Marketing Department ",empid);
			     break;
	
		case 20 :printf("Employee With Employee ID '%d' is Working in a Management Department ",empid);
			     break;

		case 30 :printf("Employee With Employee ID '%d' is Working in a Sales Department ",empid);
			     break;
	
		case 40 :printf("Employee With Employee ID '%d' is Working in a Desighning Department ",empid);
			     break;
	}

	switch(dc)
	{
		case 'M' :printf("as Manager \n");
				  break;

		case 'S' :printf("as Supervisor \n");
				  break;

		case 's' :printf("as Security Officer \n");
				  break;
				  
		case 'C' :printf("as Clerk \n");
				  break;
	}
	return 0;
}


