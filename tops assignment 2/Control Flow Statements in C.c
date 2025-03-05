#include <stdio.h>

main() 
{
    int num, month;

    // Check if the number is even or odd using if-else
    printf("\n\n\t Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\n\n\t The number %d is even: ", num);
    } else {
        printf("\n\n\t The number %d is odd: ", num);
    }

   
    printf("\n\n\t Enter a number between 1 and 12 to get the month name: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("\n\n\t January");
            break;
        case 2:
            printf("\n\n\t February");
            break;
        case 3:
            printf("\n\n\t March");
            break;
        case 4:
            printf("\n\n\t April");
            break;
        case 5:
            printf("\n\n\t May");
            break;
        case 6:
            printf("\n\n\t June");
            break;
        case 7:
            printf("\n\n\t July");
            break;
        case 8:
            printf("\n\n\t August");
            break;
        case 9:
            printf("\n\n\t September");
            break;
        case 10:
            printf("\n\n\t October");
            break;
        case 11:
            printf("\n\n\t November");
            break;
        case 12:
            printf("\n\n\t December");
            break;
        default:
            printf("\n\n\t Invalid input Please enter a number between 1 and 12: ");
    }

  
}

