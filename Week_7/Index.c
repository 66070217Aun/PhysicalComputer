#include <stdio.h>
#include <stdbool.h>

bool find(int input, int number);

int main() {
    
    int input = 0;
    while (input <= 0 || input >= 21) {
        scanf("%d", &input);
    }

    if (!(find(input, 0) || find(input, 1))) {
        printf("%d is not in neither M nor N", input);
    }
    
    return 0;
}

bool find(int input, int number) {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};

    for (int i = 0; i < (int) ((number == 0) ? sizeof(M) / sizeof(int) : sizeof(N) / sizeof(int)); i++) {
       if ((number == 0 && M[i] == input) || (number == 1 && N[i] == input)) {
            (number == 0) ? printf("%d is in M at index [%d]", input, i) : printf("%d is in N at index [%d]", input, i);
            return true;
       } 
    }


}