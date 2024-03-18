#include<stdio.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;

}stud_t;

int main(void)
{	
	stud_t s;
	printf("\n-----------------------------------------------------------------\n");
	printf("Enter the Student Details:\n");
	printf("Enter Details (rollno name marks): \n");
	printf("\nRoll No: ");
	scanf("%d",&s.rollno);
	printf("\nName: ");
	scanf("%*c%[^\n]s",s.name);
	printf("\nMarks: ");
	scanf("%f",&s.marks);
	printf("\nRoll No: %d\nName: %s\nMarks: %f\n",s.rollno,s.name,s.marks);
	
	printf("-----------------------------------------------------------------\n");
	return 0;

}
