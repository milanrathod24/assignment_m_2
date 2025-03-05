#include <stdio.h>

int main() 
{
    int num;

    // Take input from the user
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0)
	 {
        printf("\n\n\t The number is even.\n");
    } else {
        printf("\n\n\t The number is odd.\n");
    }

    // Check if the number is positive, negative, or zero
    if (num > 0) 
	{
        printf("\n\n\t The number is positive.\n");
    } 
	else if (num < 0)
	 {
        printf("\n\n\t The number is negative.\n");
    } 
	else 
	{
        printf("\n\n\t The number is zero.\n");
    }

    // Check if the number is a multiple of both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) {
        printf("\n\n\t The number is a multiple of both 3 and 5.\n");
    } else {
        printf("\n\n\t The number is not a multiple of both 3 and 5.\n");
    }

  
}

