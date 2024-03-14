#include<stdio.h>

float main()
{
	float x, y;
	printf("-----------------------------------\n");
	printf("\nEnter X co-ordinate: ");
	scanf("%f",&x);
	printf("\nEnter Y co-ordinate: ");
	scanf("%f",&y);
	printf("\n-----------------------------------\n");
	if(x>0 && y>0)
	printf("X=%f,Y=%f :1st Quadrant\n",x,y);
	else if(x<0 && y>0)
	printf("X=%f,Y=%f :2nd Quadrant\n",x,y);
	else if(x<0 && y<0)
	printf("X=%f,Y=%f :3rd Quadrant\n",x,y);
	else if(x>0 && y<0)
	printf("X=%f,Y=%f :4th Quadrant\n",x,y);
	else if(x==0 && y>0 || y<0)
	printf("X=%f,Y=%f :Point lies on Y-axis\n",x,y);
	else if(y==0 && x>0 || x<0)
	printf("X=%f,Y=%f :Point lies on X-axis\n",x,y);
	else if(x==0 && y==0)
	printf("X=%f,Y=%f :Point lies on Origin\n",x,y);
	printf("-----------------------------------\n");

	return 0;
}
