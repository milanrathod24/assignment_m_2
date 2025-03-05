//LAB EXERCISES 3
//Challenge: Modify the program to also find the average of the numbers

#include <stdio.h>

main() 
{
    int N, i, sum = 0;
    float average;

    printf("\n\n\t Enter the number of elements: ");
    scanf("%d", &N);

   
    int arr[N];

  
    printf("\n\n\t Enter %d numbers:\n", N);
    for (i = 0; i < N; i++) {
        printf("\n\n\t Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < N; i++) {
        sum += arr[i];
    }


    average = (float)sum / N;

    printf("\n\n\t The sum of all array elements is: %d\n", sum);
    printf("\n\n\t The average of all array elements is: %.2f\n", average);

    return 0;
}

