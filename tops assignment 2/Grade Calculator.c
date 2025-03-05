#include <stdio.h>

int main()
{
    int marks;

    // Take the marks as input from the user
    printf("\n\n\t Enter the marks of the student: ");
    scanf("%d", &marks);

   
    if (marks > 90) {
        printf("\n\n\t Grade A\n");
    } 
	else if (marks > 75 && marks <= 90) 
	{
        printf("\n\n\t Grade B\n");
    } 
	else if (marks > 50 && marks <= 75) 
	{
        printf("\n\n\t Grade C\n");
    } 
	else if (marks <= 50) 
	{
        printf("\n\n\t Grade D\n");
    } 
	else 
	{
        printf("\n\n\t Invalid marks entered.\n");
    }

    
}

