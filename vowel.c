#include <stdio.h>

int main()
{
    char vowel;
    printf("\n Enter any character: ");
    scanf("%c", &vowel);
    switch(vowel) {
        case 'A':
        case 'a':
            printf("\nThe A");
            break;
        case 'E':
        case 'e':
            printf("\nThe E");
            break;
        case 'I':
        case 'i':
            printf("\nThe I");
            break;
        case 'O':
        case 'o':
            printf("\nThe O");
            break;
        case 'U':
        case 'u':
            printf("\nThe U");
            break;
        default:
            printf("%c is constant", vowel);
    }
}