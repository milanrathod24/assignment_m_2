//LAB EXERCISE 3: Sum of Digits
//Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.

#include <stdio.h>

int main() 
{
    int num, sum = 0;

    
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

   
    if (num < 0) 
	{
        num = -num;  
    }
  while (num != 0)
   {
        sum += num % 10;  
        num /= 10;         
    }

    
    printf("\n\n\t  Sum of the digits: %d\n", sum);

    return 0;
}

