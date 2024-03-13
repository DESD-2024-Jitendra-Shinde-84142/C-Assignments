#include<stdio.h>
#include<float.h>
#include<limits.h>
#include<inttypes.h>


int main(void)
{	
	printf("-------------------------------------------------------------------\n");
    printf("Data Type      Size   FS     Range                           \n");
    printf("-------------------------------------------------------------------\n");
    printf("\n float %11u   %%f %7f to %f", sizeof(float), FLT_MIN, FLT_MAX);
	printf("\n double %9u   %%g %4g to %g", sizeof(double), DBL_MIN, DBL_MAX);
	printf("\n-------------------------------------------------------------------\n");

 return 0;
}

