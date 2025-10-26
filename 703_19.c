#include <stdio.h>

int main()
{
    char letter;
    printf("\nEnter a lowercase letter: ");
    scanf("%c",&letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("\n%c is a vowel", letter);
    }
    else
    {
        printf("\n%c is a consonant", letter);
    }
    return 0;
}

