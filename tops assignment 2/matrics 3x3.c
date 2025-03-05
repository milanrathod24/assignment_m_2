//LAB EXERCISE 2: Matrix Addition
//Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.

#include <stdio.h>

main() 
{
    int matrix1[3][3], matrix2[3][3], sum[3][3], product[3][3];
    int i, j, k;

    
    printf("\n\n\t Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("\n\n\t Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("\n\n\t Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("\n\n\t Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

   
    printf("\n\n\t Sum of the matrices:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Product of the matrices:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++)
		 {
            product[i][j] = 0;
            for (k = 0; k < 3; k++)
			 {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

