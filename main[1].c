/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, sum, product, quotient;
    
    printf("Enter your first number: ");
    scanf("%i", &num1);
    
    printf("Enter your second number: ");
    scanf("%i", &num2);
    
    if (num1 > num2)
    {
        printf("%i is greater than %i\n", num1, num2);
    }
    
    if (num1 < num2)
    {
        printf("%i is less than %i\n", num1, num2);
    }
    
    if (num1 == num2)
    {
        printf("%i is equal to %i\n", num1, num2);
    }
    
    
    printf("Enter your first number: ");
	scanf("%i", &num3);
	
	printf("Enter your second number: ");
	scanf("%i", &num4);

	if (num3 % num4 == 0)	
		printf("%i is evenly divisible by %i\n", num3, num4);
	else	
		printf("%i is not evenly divisible by %i\n", num3, num4);

    quotient = num3 / num4;
    printf("%i / %i = %i R %i\n", num3, num4, quotient, num3%num4);
    
    
    printf("Enter your first number: ");
    scanf("%i", &num1);
    
    printf("Enter your second number: ");
    scanf("%i", &num2);
    
    printf("Enter your third number: ");
    scanf("%i", &num3);
    
    printf("Enter your fourth number: ");
    scanf("%i", &num4);
    
    printf("Enter your fifth number: ");
    scanf("%i", &num5);
    
    sum = num1 + num2 + num3 + num4 + num5;
    product = num1 * num2 * num3 * num4 * num5;
    
    if (num1 > 0)
    {
        printf("%i + %i + %i + %i + %i = %i\n", num1, num2, num3, num4, num5, sum);
    }
    else
    {
        printf("%i * %i * %i * %i * %i = %i\n", num1, num2, num3, num4, num5, product);
    }
    
    
    float   value1;
    char    operator;
    
    printf("Type in a single-digit number.\n");
    scanf( "%c", &operator);
    
    switch(operator)
    {
        case '1':
            printf("One");
            break;
        case '2':
            printf("Two");
            break;
        case '3':
            printf("Three");
            break;
    }
    
    return 0;
}





