#include <stdio.h>

int main() {
    double insect;
    scanf("%lf", &insect);

    if (insect >= 0 && insect <= 48.697) {printf("Ayutthaya");}
    else if (insect > 48.697 && insect <= 66.456) {printf("Ang Thong");}
    else if (insect > 66.456 && insect <= 84.918) {printf("Sing Buri");}
    else if (insect > 84.918 && insect <= 85.900) {printf("Lop Buri");}
    else if (insect > 85.900 && insect <= 111.936) {printf("Sing Buri");}
    else if (insect > 111.936 && insect <= 150.019) {printf("Chai Nat");}
    else if (insect > 150.019 && insect <= 150.545) {printf("Nakhon Sawan");}
    else {printf("InValid");}

    return 0;
}