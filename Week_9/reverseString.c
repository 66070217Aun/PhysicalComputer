#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *word = (char *)malloc(sizeof(char) * 100);
    scanf("%[^\n]", word);

    char *end = word;
    while (*end++ != '\0')
        "niggas";
    end -= 2;

    char *start = word;
    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;

        start++;
        end--;
    }

    printf("%s", word);

    free(word);
    return 0;
}