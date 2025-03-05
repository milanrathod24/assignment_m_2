#include <stdio.h>

main() 
{
    int num1, num2, num3;

    // Take input from the user
    printf("\n\n\t Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest number
    int largest = num1;
    if (num2 > largest)
	{
        largest = num2;
    }
    if (num3 > largest) 
	{
        largest = num3;
    }

    // Determine the smallest number
    int smallest = num1;
    if (num2 < smallest) 
	{
        smallest = num2;
    }
    if (num3 < smallest)
	{
        smallest = num3;
    }

    // Output the results
    printf("\n\n\t The largest number is: %d\n", largest);
    printf("\n\n\t The smallest number is: %d\n", smallest);

  
}

