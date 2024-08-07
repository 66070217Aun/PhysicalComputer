#include <stdio.h>
#include <string.h>

int main() {
    char sentense[301], alphabet;
    scanf("%[^\n]\n%c", sentense, &alphabet);


    int founded = 0, position[300];
    for(int i = 0; i < strlen(sentense); i++) {
        if (sentense[i] == alphabet || (sentense[i]-32 == alphabet && alphabet < 91 && alphabet > 64) || (sentense[i]+32 == alphabet && alphabet > 96 && alphabet < 123)) {
            position[founded] = i+1;
            founded-=-1;
        }
    }

    if (founded <= 0){
        printf("Not found.");
    } else {
        printf("There is/are %d \"%c\" in the above sentences.\nPosition: %d", founded, alphabet, position[0]);
        for (int i = 1; i < founded; i++){
            printf(", %d", position[i]);
        }
    }

    return 0;
}