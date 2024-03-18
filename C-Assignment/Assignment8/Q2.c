#include<stdio.h>

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
	stud_t s;
	accept_student(&s);
	print_student(&s);

	return 0;

}

void accept_student(stud_t *s)
{
	printf("\n-----------------------------------------------------------------\n");
	printf("Enter Students Details (rollno name marks): ");
	scanf("%d %s %f",&s->rollno,s->name,&s->marks);
}
void print_student(stud_t *s)
{

	printf("\nRoll No: %d\nName: %s\nMarks: %.2f\n",s->rollno,s->name,s->marks);

	printf("-----------------------------------------------------------------\n");
}


