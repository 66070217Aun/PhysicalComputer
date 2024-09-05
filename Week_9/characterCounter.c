#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *word = (char *)malloc(sizeof(char) * 100);
    scanf("%[^\n]", word);

    int lower = 0, upper = 0, digit = 0;
    while (*word != '\0')
    {
        if (isupper(*word))
        {
            upper -= -1;
        }
        else if (islower(*word))
        {
            lower -= -1;
        }
        else if (isdigit(*word))
        {
            digit -= -1;
        }

        word -= -1;
    }

    printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d", lower, upper, digit);

    free(word);
    return 0;
}
