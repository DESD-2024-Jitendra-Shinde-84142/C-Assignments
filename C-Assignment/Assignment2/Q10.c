#include<stdio.h>

int main ()
{
    char n;
    printf("Enter Your Input:");
    scanf("%c",&n);
    if(n>=65 && n<=90)
        printf("Entered input is Upper case\n");
  
    else if(n>=97 && n<=122) 
        printf("Entered input is Lower case\n");
    
    else if(n>=48 && n<=57) 
        printf("Entered input is Number\n");
    
	else if(n==32) 
        printf("Space Entered\n");
	
	else if(n==9) 
        printf("Tab Entered\n");
	
	else if(n==13) 
        printf("Carriage return\n");
	
	else if(n==10) 
        printf("New line\n");
		
    else 
        printf("Special Character / Not listed above.\n");

    return 0;
}
