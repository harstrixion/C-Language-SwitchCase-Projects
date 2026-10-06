#include <stdio.h>

int main(){
    int month;
    printf("\n\t\tWELCOME TO SEASON FINDER PROGRAM\n");
    printf("Choose a Month -\n1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n- ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Winter!");
        break;
    case 2:
        printf("Winter!");
        break;
    case 3:
        printf("Summer!");
        break;
    case 4:
        printf("Summer!");
        break;
    case 5:
        printf("Summer!");
        break;
    case 6:
        printf("Rainy!");
        break;
    case 7:
        printf("Rainy!");
        break;
    case 8:
        printf("Rainy!");
        break;
    case 9:
        printf("Rainy!");
        break;
    case 10:
        printf("Autumn!");
        break;
    case 11:
        printf("Autumn!");
        break;
    case 12:
        printf("Winter!");
        break;

    default:
        printf("Your Input is Invalid!");
        break;
    }
    return 0;
}