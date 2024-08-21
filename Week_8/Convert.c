#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char word1[102], word2[102];
    scanf("%[^\n]\n%[^\n]", word1, word2);

    for (int i = 0; i < strlen(word1); i++)
    {
        if (word1[i] > 64 && word1[i] < 91)
        {
            word1[i] += 32;
        }
        else if (word1[i] > 96 && word1[i] < 123)
        {
            word1[i] -= 32;
        }
    }

    for (int i = 0; i < strlen(word2); i++)
    {
        if (word2[i] > 64 && word2[i] < 91)
        {
            word2[i] += 32;
        }
        else if (word2[i] > 96 && word2[i] < 123)
        {
            word2[i] -= 32;
        }
    }

    printf("*** Results ***\n");
    printf("%s\n", word1);
    printf("%s\n", word2);
    printf("***************\n");

    bool same = true;
    if (strlen(word1) != strlen(word2))
    {
        same = false;
    }
    else
    {
        for (int i = 0; i < strlen(word1); i++)
        {
            if (tolower(word1[i]) != tolower(word2[i]))
            {
                same = false;
                break;
            }
        }
    }

    (same) ? printf("Both strings are the same.") : printf("Both strings are not the same.");

    return 0;
}