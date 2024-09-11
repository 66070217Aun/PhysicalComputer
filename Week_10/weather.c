#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Weather {
    char outlook[9]; //outlook{overcast,sunny,rain}
    int temperature;
    int humidity;
    char wind; //wind{T,F}
} Weather;

void playing_desition(Weather* weather) {
    if (!strcmp(weather->outlook, "overcast")) {
        printf("yes");
    } else if (!strcmp(weather->outlook, "sunny") && weather->humidity <= 77.5) {
        printf("yes");
    } else if (!strcmp(weather->outlook, "rain") && weather->wind == 'F') {
        printf("yes");
    } else {
        printf("no");
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        Weather* nigga = (Weather*) malloc(sizeof(Weather));
        scanf("%s %d %d %c", nigga->outlook, &nigga->temperature, &nigga->humidity, &nigga->wind);

        playing_desition(nigga);

        free(nigga);
    }

    return 0;
}