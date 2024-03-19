#include<stdio.h>

 
void add();
void sub();
void mul();
void div();
int acceptNum();


int main(void)
{
    int choice;
    do
    {
        printf("\nEnter your choice : 0.Exit 1.Add 2.Sub 3.Mul 4.Div:  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                add(); 
            break;
            case 2:
                sub();  
            break;
            case 3:
                mul();  
            break;
            case 4:
                div();  
            break;
        }


    } while (choice!=0);
    
    return 0;
}


int acceptNum()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    return num;
}
void add()
{
    int a,b,res;
    a=acceptNum();
    b=acceptNum();
    res = a+b;
    printf("Addition = %d",res);
    
}
void sub()
{
    int a,b,res;
    a=acceptNum();
    b=acceptNum();
    res = a-b;
    printf("Subtraction = %d",res);
}

void mul()
{
    int a,b,res;
    a=acceptNum();
    b=acceptNum();
    res = a*b;
    printf("Multiplication = %d",res);
}
void div()
{
    int a,b,res;
    a=acceptNum();
    b=acceptNum();
    res = a/b;
    printf("Division = %d",res);
}
