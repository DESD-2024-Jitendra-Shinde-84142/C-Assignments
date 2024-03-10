#include<stdio.h>
int fact();

int main()
{
    //int n;
    //printf("\n Enter the value: ");
    //scanf("%d",&n);
    int Result = fact();
    printf("Factorial of the number is: %d",Result);
    while(1)
    {
        main();
    }
}

/*int fact(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return i*fact(i-1);
    }
}
*/

int fact()
{
    int val=1;
    int i,n;
    printf("\nEnter the value: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    val= val*i;
    } 
    return val;  
}
