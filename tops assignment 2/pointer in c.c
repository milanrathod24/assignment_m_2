#include <stdio.h>

int main() 
{
    int num = 10;      // Declare an integer variable
    int *ptr = &num;   

    printf("\n\n\t Original value of num: %d\n", num);

    
    *ptr = 20;  

    printf("\n\n\t Modified value of num using pointer: %d\n", num);

 
}

