#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    for(int i=m; (m > n) ? i>=n: i<=n; (m>n) ? i-- : i++) {
        printf("%d ", i);
    }

    return 0;
}