#include <stdio.h>
 
int main() {
    char first, second, third, forth, fifth;
     
    scanf("%c\n%c\n%c\n%c\n%c", &first, &second, &third, &forth, &fifth);
 
 
    first += 1; third += 1; fifth += 1;
 
    printf("%c\n%c\n%c\n%c\n%c", first, second, third, forth, fifth);
 
    return 0;
}