//Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).//

#include <stdio.h>

int main() 
{
    int num, i, N;

    
    printf("\n\n\t Enter the number for the multiplication table: ");
    scanf("%d", &num);
    printf("\n\n\t Enter the range (N): ");
    scanf("%d", &N);

    
    printf("\n\n\t Multiplication table for %d (up to %d):\n", num, N);
    for (i = 1; i <= N; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

