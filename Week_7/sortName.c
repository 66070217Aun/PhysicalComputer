#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool compare(char left[], char right[], int i) {
    if (left[i] > right[i]) {
        return true;
    } else if (right[i] > left[i]) {
        return false;
    } else {
        return compare(left, right, i+1);
    }
}

void cumlower(char word[]) {
    int i = 0;
    while (word[i] != '\0') {
        word[i] = tolower(word[i]);
        i-=-1;
    }
}

int main() {
    char name[20][61];
    for (int i = 0; i < 20; i++) {
        char first[61], last[61];
        scanf("%s %s", &first, &last);
        cumlower(first); cumlower(last);
        first[0] -= 32; last[0] -= 32;
        strcpy(name[i], strcat(strcat(first, " "), last));
    }

    char tmp[61];
    for (int k = 0; k < 20; k++) {
        for (int i = 0; i < 19; i++) {
            if (compare(name[i], name[i+1], 0)) {
                strcpy(tmp, name[i]);
                strcpy(name[i], name[i+1]);
                strcpy(name[i+1], tmp);
            }
        }
    }
    
    for (int i = 0; i < 20; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
