#include <stdio.h>
 
int main() {
    char number[5];
    scanf("%s", number);
 
    printf("%c%c%c%c%c", number[2], number[3], number[4], number[0], number[1]);
 
    return 0;
}