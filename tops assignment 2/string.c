#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100]; 

   
    printf("\n\n\t Enter the first string: ");
    scanf("%s", str1);

    
    printf("\n\n\t Enter the second string: ");
    scanf("%s", str2);

    
    strcat(str1, str2);  

    
    printf("\n\n\t The concatenated string is: %s\n", str1);

    
    printf("\n\n\t The length of the concatenated string is: %lu\n", strlen(str1));

    return 0;
}

