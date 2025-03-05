//LAB EXERCISE 1: Prime Number Check//

#include <stdio.h>

int main() 
{
    int num, i, isPrime = 1;

   
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    // Negative numbers, 0, and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for factors of num
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    
    if (isPrime) {
        printf("\n\n\t %d is a prime number.\n", num);
    } else {
        printf("\n\n\t %d is not a prime number.\n", num);
    }

    return 0;
}

