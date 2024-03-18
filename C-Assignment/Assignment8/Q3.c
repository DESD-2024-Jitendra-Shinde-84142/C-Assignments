#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int rollno;
	char name[20];
	float marks;

}stud_t;

void accept_student(stud_t *s);
void print_student(stud_t *s);

int main(void)
{	
	printf("\n-----------------------------------------------------------------\n");
	int n;
	printf("Enter No. of student: ");
	scanf("%d",&n);
	
	stud_t *arr = (stud_t *)malloc(n*sizeof(stud_t));
	
	for(int i=0 ; i<n ; i++)
	accept_student(&arr[i]);

	printf("\nStudents Details:");
	for(int i=0 ; i<n ; i++)
	print_student(&arr[i]);

	printf("\n-----------------------------------------------------------------\n");

	return 0;

}

void accept_student(stud_t *s)
{
	printf("\nEnter Students Details (rollno name marks): ");
	scanf("%d %s %f",&s->rollno,s->name,&s->marks);
}
void print_student(stud_t *s)
{
	
	printf("\n%-15d %-15s %.2f",s->rollno,s->name,s->marks);

}


