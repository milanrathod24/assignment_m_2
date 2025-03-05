//LAB EXERCISE 3: Sum of Array Elements
//Write a C program that takes N numbers from the user and stores them in an array. The program should then calculate and display the sum of all array elements.

#include <stdio.h>

main() 
{
    int N, i, sum = 0;

    printf("\n\n\t Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    printf("\n\n\t Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("\n\n\t Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    printf("\n\n\t The sum of all array elements is: %d\n", sum);

    return 0;
}

