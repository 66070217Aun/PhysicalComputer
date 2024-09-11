#include <stdio.h>
#include <stdlib.h>

int main() {
    char* meaningFulVariableName = (char*) malloc(sizeof(char) * 150);
    scanf("%[^\n]s", meaningFulVariableName);

    int count = 0;
    while (*(meaningFulVariableName + count) != '\0') {
        if (*(meaningFulVariableName + count) != ' '){
            printf("%c", *(meaningFulVariableName+count));
        }

        count-=-1;
    }
    
    return 0;
}