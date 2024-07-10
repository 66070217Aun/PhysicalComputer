#include <stdio.h>
 
int main() {
    char number[6];
    scanf("%s", number);
 
    printf("%-81.1s", number);
    printf("%-81.2s", number);
    printf("%-81.3s", number);
    printf("%-81.4s", number);
    printf("%-81.5s", number);
 
    return 0;
}