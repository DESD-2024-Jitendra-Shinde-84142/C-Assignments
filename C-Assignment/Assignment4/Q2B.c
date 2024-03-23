#include <stdio.h>

int power(int n1, int n2);

int main() 
{
    int base, index, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &index);
    result = power(base, index);
    printf("%d^%d = %d\n", base, index, result);
    return 0;
}

int power(int base, int index) {
    if (index != 0)
        return (base * power(base, index - 1));
    else
        return 1;
}





