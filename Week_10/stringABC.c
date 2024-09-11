#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char* left, char* right);

int main() {
    char* name = (char*) malloc(sizeof(char) * 200);
    scanf("%[^\n]", name);
    char* tmp = (char*) realloc(name, strlen(name)+1);
    name = tmp;

    char min;
    for (int i = 0; i < strlen(name) - 1; i++) {
        min = i; 
        for (int j = i; j < strlen(name); j++) {
            if (name[j] < name[min]) {
                min = j;
            }
        }
        swap(&name[i], &name[min]);
    }
    
    printf("%s", name);

    free(name);
    return 0;
}

void swap(char* left, char* right) {
    char tmp = *right;
    *right = *left;
    *left = tmp;
}