// LAB EXERCISE 2: Multiplication Table//
//Write a C program that takes an integer input from the user and prints its multiplication table using a for loop.//

#include <stdio.h>

int main()
 {
    int num, i;

 
    printf("\n\n\t Enter an integer: ");
    scanf("%d", &num);

   
    printf("\n\n\t Multiplication table for %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

