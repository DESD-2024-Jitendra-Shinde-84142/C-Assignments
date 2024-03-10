#include<stdio.h>

int main ()
{
    int a, b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("\nEnter 2st Number: ");
    scanf("%d",&b);
    if (a>b)
        printf("Greater Number: %d\n",a);
    else
    printf("Greater Number: %d\n",b);
    return 0;
}