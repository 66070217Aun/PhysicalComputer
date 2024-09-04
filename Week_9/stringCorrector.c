#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacity = 10;
    int size = 0;
    char *array = (char *)malloc(sizeof(char) * capacity);

    char get;
    while (1)
    {
        scanf("\n%c", &get);

        if (get == '-')
            break;
        if (size >= capacity)
        {
            capacity *= 2;
            char *tmp = (char *)realloc(array, sizeof(char) * capacity);
            array = tmp;
        }

        *(array + size) = get;
        size++;
    }

    printf("%s\n", array);

    char *start = array;
    char *end = array + size - 1;
    while (start < end)
    {
        char tmp = *start;
        *start = *end;
        *end = tmp;

        start++;
        end--;
    }

    printf("%s", array);

    return 0;
}