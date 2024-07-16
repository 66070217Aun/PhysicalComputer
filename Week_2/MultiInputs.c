#include <stdio.h>
 
int main() {
    char str1[30], str2[30], str3[30], str4[30];
    scanf("%s\n%s\n%s\n%s", str1, str2, str3, str4);
 
    printf("String 1: %.3s\nString 2: %.4s\nString 3: %.5s\nString 4: %.6s", str1, str2, str3, str4);
 
    return 0;
}