//LAB EXERCISE 3: Sum of Digits
//Challenge: Extend the program to reverse the digits of the number

#include <stdio.h>

int main() 
{
    int num, sum = 0, reversedNum = 0, originalNum;

    
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; 

    
    if (num < 0) 
	{
        num = -num;  
    }

    
    while (num != 0) {
        sum += num % 10;          
        reversedNum = reversedNum * 10 + (num % 10);  
        num /= 10;                
    }

    
    if (originalNum < 0) {
        reversedNum = -reversedNum;
    }

   
    printf("\n\n\t Sum of the digits: %d\n", sum);
    printf("\n\n\t Reversed number: %d\n", reversedNum);

    return 0;
}

