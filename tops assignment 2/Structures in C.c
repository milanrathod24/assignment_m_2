#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    int i;
    struct Student students[3];

    
    for (i = 0; i < 3; i++) 
	{
        printf("\n\n\t Enter name for student %d: ", i + 1);
        scanf("\n\n\t %[^\n]s", students[i].name); 
        printf("\n\n\t Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].rollNumber);
        printf("\n\n\t Enter marks for student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    
    printf("\n\n\t Student Details:\n");
    for ( i = 0; i < 3; i++) 
	{
        printf("\n\n\t Student %d\n", i + 1);
        printf("\n\n\t Name: %s\n", students[i].name);
        printf("\n\n\t Roll Number: %d\n", students[i].rollNumber);
        printf("\n\n\t Marks: %.2f\n\n", students[i].marks);
    }

    
}

