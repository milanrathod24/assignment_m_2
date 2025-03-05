//Challenge: Modify the program to print all prime numbers between 1 and a given number//

#include <stdio.h>

int main()
 {
    int num, i, j, isPrime;

    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    printf("\n\n\t Prime numbers between 1 and %d are:\n", num);

    
    for (i = 2; i <= num; i++)
	 {
        isPrime = 1;

        
        for (j = 2; j * j <= i; j++) 
		{
            if (i % j == 0) 
			{
                isPrime = 0; 
                break;
            }
        }

        
        if (isPrime) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

