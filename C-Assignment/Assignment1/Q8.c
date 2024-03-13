#include<stdio.h>
float average(float, float, float);
float acceptNum();

int main()
{
    float num;
    num = acceptNum();
    float num1=num;
    num = acceptNum();
    float num2=num;
    num = acceptNum();
    float num3=num;
    average(num1,num2,num3);
    return 0;
}

float acceptNum()
{
    float n;
    printf("\nEnter the No:");
    scanf("%f",&n);

    return n;   
}

float average(float a,float b,float c)
{
    float Avg=(a+b+c)/3;
    printf("\nAverage: %f\n",Avg);
	return 0;
}
