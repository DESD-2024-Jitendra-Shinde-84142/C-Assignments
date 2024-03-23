#include<stdio.h>

float accept_marks( float arr[], int len);

float total=0;

float main()
{

   float arr[5];
   int len;
   float average = 0;
   accept_marks(arr,5);

   average = total / 5;

   printf("\nThe average marks of the 5 subject is %.2f\n",average);
   return 0;

}

float accept_marks(float arr[], int len)
{  
 
   for(int i = 0; i < len; i++)
   {
       printf("\nEnter the marks of sub%d : ",i+1);
	   scanf("%f",arr + i);

	   total = total + arr[i];
   }

   return total;
 
}
