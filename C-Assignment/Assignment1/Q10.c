#include<stdio.h>
#include<math.h>

int main()
{
	float Perimeter, Area,a,b,c;
	printf("\n Enter the value of a,b,c:\n");
	scanf("%f%f%f",&a,&b,&c);
	Perimeter = a + b +c;
	printf("\nPerimeter of Triangle= %f",Perimeter);
	float S = Perimeter/2;
	Area = sqrt(S*(S-a)*(S-b)*(S-c));
	printf("\nArea of Triangle = %f", Area);
	printf("\n");

return 0;
}
