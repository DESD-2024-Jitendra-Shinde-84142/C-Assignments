#include<stdio.h>
#include<limits.h>
int main(void)
{	
	printf("-------------------------------------------------------------------\n");
    printf("Data Type            Size   FS     Range                           \n");
    printf("-------------------------------------------------------------------\n");
    printf("\n signed char %11d   %%c %7d to %d", sizeof(char), SCHAR_MIN, SCHAR_MAX);
	printf("\n unsigned char %9d   %%c %4d to %d", sizeof(unsigned char), 0, UCHAR_MAX);
    printf("\n short int %13d   %%hd %8d to %d", sizeof(short int), SHRT_MIN, SHRT_MAX);
	printf("\n unsigned short int %4d   %%hu %3d to %d", sizeof(unsigned short int), 0, USHRT_MAX);
    printf("\n int %19d   %%d %14d to %d",sizeof(int), INT_MIN, INT_MAX); 
	printf("\n unsigned int %10d   %%u %4u to %u", sizeof(unsigned int), 0, UINT_MAX);
    printf("\n long %18ld   %%ld %22ld to %ld",sizeof(long), LONG_MIN, LONG_MAX); 
	printf("\n unsigned long int %5lu   %%lu %3lu to %lu", sizeof(unsigned long), 0, ULONG_MAX);
	printf("\n-------------------------------------------------------------------\n");
 return 0;
}

