#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    int largest, smallest;

    // Take input from the user
    printf("\n\n\t Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Using switch-case to find the largest number
    switch (1) 
	{
        case 1:
            largest = num1;
            switch (num2 > largest) 
			{
                case 1: largest = num2; break;
                default: break;
            }
            switch (num3 > largest)
			 {
                case 1: largest = num3; break;
                default: break;
            }
            break;
    }

    // Using switch-case to find the smallest number
    switch (1) 
	{
        case 1:
            smallest = num1;
            switch (num2 < smallest)
			{
                case 1: smallest = num2; break;
                default: break;
            }
            switch (num3 < smallest)
			{
                case 1: smallest = num3; break;
                default: break;
            }
            break;
    }

    // Output the results
    printf("\n\n\t The largest number is: %d\n", largest);
    printf("\n\n\t The smallest number is: %d\n", smallest);

   
}


