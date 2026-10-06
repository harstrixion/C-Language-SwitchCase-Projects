#include <stdio.h>

int main()
{
    printf("\n\t\t\tWELCOME TO NUBMERS OF DAYS IN A MONTH FINDER\n\n");
    int month_number;
    printf("Enter Month Number -\n1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\nChoose: ");
    scanf("%d", &month_number);

    switch (month_number)
    {
    case 1:
        printf("\nJanuary has 31 days!");
        break;
    case 2:
        printf("\nFebruary has 28 days, but in a leap year it becomes 29!");
        break;
    case 3:
        printf("\nMarch has 31 days!");
        break;
    case 4:
        printf("\nApril has 30 days!");
        break;
    case 5:
        printf("\nMay has 31 days!");
        break;
    case 6:
        printf("\nJune has 31 days!");
        break;
    case 7:
        printf("\nJuly has 31 days!");
        break;
    case 8:
        printf("\nAugust has 31 days!");
        break;
    case 9:
        printf("S\neptember has 30 days!");
        break;
    case 10:
        printf("\nOctober has 31 days!");
        break;
    case 11:
        printf("\nNovember has 30 days!");
        break;
    case 12:
        printf("\nDecember has 31 days!");
        break;
    
    default:
        printf("\nYour input in Invalid!");
        break;
    }

    return 0;
}