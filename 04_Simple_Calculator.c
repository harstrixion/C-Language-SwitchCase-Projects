#include <stdio.h>

int main()
{
    int a, b, c;
    char ch;
    printf("Enter the choice -\nA sum\nN mul\n");
    scanf("%c", &ch);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (ch)
    {
    case 'A':
        c = a + b;
        printf("The sum of the number %d", c);        
        break;
    case 'N':
        c = a * b;
        printf("The mul of the number %d", c);
        break;
      
    default:
        printf("This is Wrong Input!");
        break;
    }
    return 0;
}