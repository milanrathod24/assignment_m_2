#include <stdio.h>

main() 
{
   
    FILE *file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("\n\n\t Error opening file for writing.\n");
        return 1;
    }

    
    fprintf(file, "\n\n\t Hello, this is a test string.\n");

    fclose(file);

    
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("\n\n\t Error opening file for reading.\n");
        return 1;
    }

   
    char ch;
    while ((ch = fgetc(file)) != EOF) 
	{
        putchar(ch);  
    }

    
    fclose(file);

    return 0;
}

