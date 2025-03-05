#include <stdio.h>


long int factorial(int);  
 main() {
    int num;
    
    
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);
    
   
     long int result = factorial(num);  
    
    
    printf("\n\n\t Factorial of %d is %ld\n", num, result);
    
    return 0;
}


 long int factorial(int n) 
{
    if (n == 0 || n == 1)
	 {
        return 1;  
    } else 
	{
        return n * factorial(n - 1); 
    }
}

