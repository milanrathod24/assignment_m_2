//4. Arrays
//LAB EXERCISE 1: Maximum and Minimum in Array
//Challenge: Extend the program to sort the array in ascending order

#include <stdio.h>

void sortArray(int arr[], int size);

int main() 
{
    int numbers[10]; 
    int i, max, min;

 
    printf("\n\n\t Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("\n\n\t Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    max = min = numbers[0];


    for (i = 1; i < 10; i++) 
	{
        if (numbers[i] > max) 
		{
            max = numbers[i];
        }
        if (numbers[i] < min) 
		{
            min = numbers[i];
        }
    }

    
    printf("\n\n\t Maximum value: %d\n", max);
    printf("\n\nt Minimum value: %d\n", min);

   
    sortArray(numbers, 10);

   
    printf("\n\n\t Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}



        void sortArray(int arr[], int size) 
		{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
	 {
        for (j = 0; j < size - i - 1; j++)
		 {
            if (arr[j] > arr[j + 1]) 
			{
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
