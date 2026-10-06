#include <stdio.h>

int main(){
    printf("\n\t\tWELCOME TO GRADE CHECKER\n\n");
    char grade;
    printf("Enter your grade - \n1. A\n2. B\n3. C\n4. D\n5. F\nNotice - This Input is Case Sensitive, Use Capital letters!\nChoose: ");
    scanf("%c", &grade);
    
    switch (grade)
    {
    case 'A':
        printf("Excellent!");
        break;
    case 'B':
        printf("Good!");
        break;
    case 'C':
        printf("Average!");
        break;
    case 'D':
        printf("Below Average!");
        break;
    case 'F':
        printf("Failing");
        break;

    default:
        printf("Your Input is Wrong!");
        break;
    }
    return 0;
}