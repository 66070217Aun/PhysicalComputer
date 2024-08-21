#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char *normalName(char name[])
{
    char storage[61] = {};
    char output[3][61] = {};
    int count = 0, count_output = 0;
    int cooked = strlen(name);
    name[cooked] = ' ';

    for (int i = 0; i < cooked + 1; i++)
    {
        if (name[i] != ' ')
        {
            if (count == 0)
            {
                storage[count] = toupper(name[i]);
                count -= -1;
            }
            else
            {
                storage[count] = tolower(name[i]);
                count -= -1;
            }
        }
        else
        {
            storage[count] = ' ';
            strcpy(output[count_output], storage);
            memset(storage, '\0', sizeof(storage));
            count_output -= -1;
            count = 0;
        }
    }

    return strcat(strcat(output[0], output[1]), output[2]);
}

bool compare(char left[], char right[], int number)
{
    if (left[number] > right[number])
    {
        return true;
    }
    else if (left[number] < right[number])
    {
        return false;
    }
    else
    {
        return compare(left, right, number + 1);
    }
}

int main()
{
    int round;
    scanf("%d\n", &round);
    char name[round][61];

    for (int i = 0; i < round; i++)
    {
        scanf("\n%[^\n]", &name[i]);
        strcpy(name[i], normalName(name[i]));
    }

    char tmp[61];
    for (int i = 0; i < round - 1; i++)
    {
        for (int j = 0; j < round - i - 1; j++)
        {
            if (compare(name[j], name[j + 1], 0))
            {
                strcpy(tmp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], tmp);
            }
        }
    }

    for (int i = 0; i < round; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}