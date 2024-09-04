#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, jump;
    scanf("%d\n%d", &size, &jump);
    char *word = (char *)malloc(sizeof(char) * (size + 1));
    scanf("\n%[^\n]", word);

    for (int i = 0; i < size; i += jump)
    {
        printf("%c", *(word + i));
    }

    free(word);

    return 0;
}