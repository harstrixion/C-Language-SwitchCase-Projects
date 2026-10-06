#include <stdio.h>

int main(){

    int language;    
    printf("\n\t\tWELCOME TO SIMPLE LANGUAGE SELECTOR PROJECT\n\n");
    printf("Choose a language -\n1. English\n2. Hindi\n3. French\n4. Spanish\n5. Urdu\n6. Russian\n7. Chinese\n8. Japanese\n- ");
    scanf("%d", &language);

    switch (language)
    {
    case 1:
        printf("Hello Sir!");
        break;
    case 2:
        printf("Namaste Sir!");
        break;
    case 3:
        printf("Salut Monsieur!");
        break;
    case 4:
        printf("Hola Señor!");
        break;
    case 5:
        printf("ہیلو سر!");
        break;
    case 6:
        printf("привет, сэр!");
        break;
    case 7:
        printf("你好，先生!");
        break;
    case 8:
        printf("こんにちは、お客様!");
        break;
            
    default:
        printf("Entered Input is Invalid!");
        break;
    }
    return 0;
}