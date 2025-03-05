#include <stdio.h>

main() 
{
    double num1, num2;
    char operator;

    
    printf("\n\n\t Enter first number: ");
    scanf("%lf", &num1);

    printf("\n\n\t Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 

    printf("\n\n\t Enter second number: ");
    scanf("%lf", &num2);

    // Perform the calculation based on the operator
    switch (operator) 
	{
        case '+':
            printf("\n\n\t Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("\n\n\t Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("\n\n\t Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            
            if (num2 != 0) 
			{
                printf("\n\n\t Result: %.2lf\n", num1 / num2);
            } else {
                printf("\n\n\t Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            
            if ((int)num1 == num1 && (int)num2 == num2) 
			{
                printf("\n\n\t Result: %d\n", (int)num1 % (int)num2);
            } else {
                printf("\n\n\t Error: Modulus operator requires integer values.\n");
            }
            break;
        default:
            printf("\n\n\t Error: Invalid operator.\n");
    }

    
}

