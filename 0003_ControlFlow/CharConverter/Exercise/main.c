#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    bool isNumeric = false;
    if (character >= '0' && character <= '9')
    {
        isNumeric = true;
    }
    printf("\nis numeric: %d", isNumeric);

    // is upper case
    bool isUpperCase = false;
    if (character >= 'A' && character <= 'Z')
    {
        isUpperCase = true;
    }
    printf("\nis upper case: %d", isUpperCase);

    // is lower case
    bool isLowerCase = false;
    if (character >= 'a' && character <= 'z')
    {
        isLowerCase = true;
    }
    printf("\nis lower case: %d", isLowerCase);

    // is alpha
    bool isAlpha = false;
    if (isUpperCase || isLowerCase)
    {
        isAlpha = true;
    }
    printf("\nis alpha: %d", isAlpha);

    // is alpha numeric
    bool isAlphaNumeric = false;
    if (isAlpha || isNumeric)
    {
        isAlphaNumeric = true;
    }
    printf("\nis alpha numeric: %d", isAlphaNumeric);

    // to upper case
    if (isLowerCase)
    {
        character -= 32;
        printf("\nto upper case: %c", character);
    }

    // to lower case
    if (isUpperCase)
    {
        character += 32;
        printf("\nto upper case: %c", character);
    }

    return 0;
}