#include <stdio.h>

int main() {
    int n, h, m;
    scanf("%d %d %d", &n, &h, &m);
    if (m % h != 0) {
        printf("%d", n - m / h - 1);
    }
    else {
        printf("%d", n - m / h);
    }
    return 0;
}