#include <stdio.h>

main()
{
    
    int i, arr[5];

    printf("\n\n\t Enter 5 integers:\n");
    
	for (i = 0; i < 5; i++) 
	{
        scanf("%d", &arr[i]);
    }

    
    printf("\n\n\t The integers are:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}

