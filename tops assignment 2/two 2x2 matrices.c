//LAB EXERCISE 2: Matrix Addition
//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.

#include <stdio.h>

main() 
{
    int matrix1[2][2], matrix2[2][2], sum[2][2];
    int i, j;

    
    printf("\n\n\t Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\n\n\t Enter element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

   
    printf("\n\n\t Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("\n\n\t Enter element at position [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    
    printf("\n\n\t Resultant matrix after addition:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

