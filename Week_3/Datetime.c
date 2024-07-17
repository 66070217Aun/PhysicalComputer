#include <stdio.h>

int main() {
    int time;
    scanf("%d", &time);

    int day, hour, min, second, now;
    second = time % 60; now = time / 60;
    min = now % 60; now = now /60;
    hour = now % 24; now = now / 24;
    day = now;

    printf("%d s = %d d %d h %d m %d s", time, day, hour, min, second); 

    return 0;
}