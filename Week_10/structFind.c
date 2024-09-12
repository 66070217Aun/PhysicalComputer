#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct student_info
{
    char name[60];
    char surname[60];
    char sex[7];
    int age;
    char id[12];
    double gpa;
} student_info;

bool compare(char *word1, char *word2, int place)
{
    if (isdigit(word1[0]))
    {
        if (word1[place] != word2[place])
        {
            return word1[place] < word2[place];
        }
        else
        {
            return compare(word1, word2, place + 1);
        }
    }
    if (tolower(word1[place]) != tolower(word2[place]))
    {
        return tolower(word1[place]) < tolower(word2[place]);
    }
    else
    {
        return compare(word1, word2, place + 1);
    }
}

void swap(student_info *left, student_info *right)
{
    student_info tmp = *right;
    *right = *left;
    *left = tmp;
}

void golower(char* word, int size) {
    for(int i = 0; i < size; i++) {
        *(word+i) = tolower(word[i]);
    }
}

int main()
{
    student_info student[20];
    char type[8];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %s %s %s %d %s %lf", student[i].name, student[i].surname, student[i].sex, &student[i].age, student[i].id, &student[i].gpa);
    }
    scanf("\n%s", type);
    golower(type, strlen(type));

    int min;
    for (int i = 0; i < 19; i++)
    {
        min = i;
        for (int j = i + 1; j < 20; j++)
        {
            if (!strcmp(type, "name") && compare(student[j].name, student[min].name, 0))
            {
                min = j;
            }
            else if (!strcmp(type, "surname") && compare(student[j].surname, student[min].surname, 0))
            {
                min = j;
            }
            else if (!strcmp(type, "id") && compare(student[j].id, student[min].id, 0))
            {
                min = j;
            }
        }
        swap(&student[i], &student[min]);
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%s %c %s (%d) ID: %s GPA %.2lf\n", (!strcmp(student[i].sex, "Male")) ? "Mr" : "Miss", student[i].name[0], student[i].surname, student[i].age, student[i].id, student[i].gpa);
    }

    return 0;
}